#include <stdio.h>
#define MAX 10

struct Queue{
    int data[MAX];
    int head;
    int tail;
};

void init(struct Queue* queue){
    queue->head = queue->tail = 0;
}

void put(struct Queue* queue, int value){
    queue->data[queue->tail] = value;
    queue->tail++;
}

int get(struct Queue* queue){
    int res = queue->data[queue->head];
    queue->head++;
    return res;
}

int isEmpty(struct Queue* queue){ // 1: true , 0 : false
    return 1 ? queue->head == queue->tail : 0;
}

int isFull(struct Queue* queue){ // 1: true , 0 : false
    return 1 ? queue->tail == MAX : 0;
}

int size(struct Queue* queue){
    return queue->tail - queue->head;
}

int main(){
    struct Queue queue;
    init(&queue);
    printf("Run put \n");
    for (int i = 0; i <= MAX + 1; i++){
        if (!isFull(&queue)) {
            put(&queue, i);
            printf("Size: %d ", size(&queue));
            printf("Put: %d \n", i);
        }
        else {
            printf("Queue is full \n");
        }
    }
    printf("Run get \n");
    for (int i = 0; i <= MAX; i++){
        if (!isEmpty(&queue)){
            printf("Size: %d ", size(&queue));
            printf("Get: %d \n", get(&queue));
        }
        else {
            printf("Queue is empty \n");
        }
    }
    return 0;
}
