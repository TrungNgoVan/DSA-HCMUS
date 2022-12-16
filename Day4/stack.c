#include <stdio.h>

#define MAX 10

struct Stack {
    int data[MAX];
    int top;
};

void init(struct Stack *stack);
void push(struct Stack *stack, int value);
int pop(struct Stack *stack);
int top(struct Stack *stack);
int full(struct Stack *stack);
int empty(struct Stack *stack);
int size(struct Stack *stack);

void init(struct Stack *stack){
    stack->top = 0;
}

void push(struct Stack *stack, int value){
    stack->data[stack->top] = value;
    stack->top++;
}

int pop(struct Stack *stack){
    int res = stack->data[stack->top - 1];
    stack->top--;
    return res;
}

int top(struct Stack *stack){
    return stack->data[stack->top - 1];
}

int full(struct Stack *stack){ // return 1 : true, 0 : false 
    return 1 ? stack->top == MAX : 0;
}

int empty(struct Stack *stack){ // return 1: true, 0 : false
    return 1 ? stack->top == 0 : 0;
}

int size(struct Stack *stack){
    return stack->top;
}

int main(){
    struct Stack stack;
    init(&stack);
    printf("Run Push \n");
    for (int i = 0; i <= MAX + 1; i++){
        if (!full(&stack)){
            push(&stack, i);
            printf("Size: %d ", size(&stack));
            printf("Push: %d \n", top(&stack));
        }
        else {
            printf("Stack is full \n");
        }
    }
    printf("Run Pop \n");
    for (int i = 0; i <= MAX; i++){
        if (!empty(&stack)){
            printf("Size: %d ", size(&stack));
            printf("Pop: %d \n", pop(&stack));
        }
        else {
            printf("Stack is empty \n");
        }
    }
    return 0;
}
