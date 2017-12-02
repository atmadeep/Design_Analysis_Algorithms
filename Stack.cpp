#include <iostream>
using namespace std;
typedef struct{
    int top,size,capacity;
    int *array;
}Stack;
Stack* create(int capacity);
    bool isfull(Stack *stack);
bool isempty(Stack *stack);
void push(Stack *stack,int item);
int pop(Stack* stack);
int topval(Stack* stack);
int size(Stack *stack);
int main(){
    Stack *stack=create(10); //create int stack for 10 values.
    push(stack,10);
    push(stack,89);
    push(stack,67);
    push(stack,12);
    push(stack,34);
    push(stack,5);
    printf("\ntop value is %d\n",topval(stack));
    printf("\nsize is %d\n",size(stack));
    for (int i = 0; i < 10; ++i) {
        printf("popped itme is %d",pop(stack));
        printf("\n");
    }
    printf("\ntop value is %d\n",topval(stack));
    printf("\nsize is %d\n",size(stack));
    return 0;
}
Stack* create(int capacity){
    Stack *stack=(Stack*) malloc(sizeof(Stack));
    stack->top=-1;
    stack->size=0;
    stack->capacity=capacity;
    stack->array=(int*)malloc(sizeof(stack)*capacity);
    printf("\ncreated stack\n");
    return stack;
}
bool isfull(Stack *stack){
    if(stack->top==stack->size)
        return true;
    return false;
}
bool isempty(Stack *stack){
    if(stack->top==-1)
        return true;
    return false;
}
void push(Stack *stack,int item){
    if(!isfull(stack)){
        stack->array[++(stack->top)]=item;
        stack->size++;
    }
}
int pop(Stack* stack){
    if(isempty(stack))
        return INT8_MIN;
    stack->size--;
    return stack->array[stack->top--];

}
int topval(Stack* stack){
    if(isempty(stack))
        return INT8_MIN;
    return stack->array[stack->top];
}
int size(Stack *stack){
    if(isempty(stack))
        return INT8_MIN;
    return stack->size;
}