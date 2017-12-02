#include <iostream>
using namespace std;
typedef struct {
    int rear,front,capacity,size;
    int *array;
}Queue;

Queue* create(int capacity){       //queue initialized.
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity=capacity;
    queue->rear=capacity-1;
    queue->front=queue->size=0;
    queue->array=(int*) malloc(sizeof(int)*queue->capacity);
    return queue;
}
bool isempty(Queue* queue){
    return (queue->size==0);
}
bool isfull(Queue* queue){
    return(queue->capacity==queue->size);
}
void Enqueue(Queue* queue,int item){
    if(isfull(queue))
        return;
    queue->rear=(queue->rear+1)%queue->capacity;  //rear should be within the capacity size
    queue->array[queue->rear]=item;   //increase rear and add item
    queue->size++;
    printf("\nenqueued %d\n",item);
}
int Dequeue(Queue* queue){
     if(isempty(queue))
         return INT8_MIN;
    int item=queue->array[queue->front]; //put top value in item
    queue->front=(queue->front+1)%queue->capacity;
    queue->size--;
    return item;
}
int front(Queue* queue){
    if(isempty(queue))
        return INT8_MIN;
    return queue->array[queue->front];
}

int rear(Queue* queue){
    if(isempty(queue))
        return INT8_MIN;
    return queue->array[queue->rear];
}
int main()
{
     Queue* queue = create(1000);

    Enqueue(queue, 10);
    Enqueue(queue, 20);
    Enqueue(queue, 30);
    Enqueue(queue, 40);

    printf("%d dequeued from queue\n", Dequeue(queue));

    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));

    return 0;
}
