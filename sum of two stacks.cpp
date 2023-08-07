#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

bool isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack->top++;
    stack->items[stack->top] = value;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        return -1;
    }
    int value = stack->items[stack->top];
    stack->top--;
    return value;
}

int sumBottomTop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    }

    int bottomElement = stack->items[0];
    int topElement = stack->items[stack->top];

    return bottomElement + topElement;
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);
    push(&stack, 20);

    int sum = sumBottomTop(&stack);
    if (sum != -1) {
        printf("Sum of bottom and top elements: %d\n", sum);
    }

    return 0;
}
