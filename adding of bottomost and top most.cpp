#include <stdio.h>
#include <stdlib.h>

// Queue Node Structure
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// Queue Structure
struct Queue {
    struct QueueNode* front;
    struct QueueNode* rear;
};

// Create a new Queue Node
struct QueueNode* createQueueNode(int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

// Queue Operations
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = createQueueNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }
    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(struct Queue* queue) {
    if (queue->front == NULL)
        return -1;
    int data = queue->front->data;
    struct QueueNode* temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL)
        queue->rear = NULL;
    free(temp);
    return data;
}

// Stack Structure using two Queues
struct Stack {
    struct Queue* queue1;
    struct Queue* queue2;
};

// Create a new Stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->queue1 = (struct Queue*)malloc(sizeof(struct Queue));
    stack->queue2 = (struct Queue*)malloc(sizeof(struct Queue));
    stack->queue1->front = stack->queue1->rear = NULL;
    stack->queue2->front = stack->queue2->rear = NULL;
    return stack;
}

// Push operation using two Queues
void push(struct Stack* stack, int data) {
    enqueue(stack->queue1, data);
}

// Pop operation using two Queues
int pop(struct Stack* stack) {
    if (stack->queue1->front == NULL)
        return -1;

    // Move elements from queue1 to queue2 except the last one
    while (stack->queue1->front->next != NULL) {
        enqueue(stack->queue2, dequeue(stack->queue1));
    }

    // The last element in queue1 is the top element of the stack, remove it
    int data = dequeue(stack->queue1);

    // Swap the queues so that queue2 becomes queue1
    struct Queue* temp = stack->queue1;
    stack->queue1 = stack->queue2;
    stack->queue2 = temp;

    return data;
}

// Main function for testing the stack using two queues
int main() {
    struct Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Pop: %d\n", pop(stack));
    printf("Pop: %d\n", pop(stack));
    printf("Pop: %d\n", pop(stack));

    return 0;
}
