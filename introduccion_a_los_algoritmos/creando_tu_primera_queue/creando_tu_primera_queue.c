#include<stdio.h>
#define SIZE 5

int values[SIZE];
int front = -1;
int rear = -1;
int length = sizeof(values) / sizeof(values[0]);

void printQueueValues () {
    printf("Values are: \n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", values[i]);
    }
};

void enQueue (int value) {

    if (rear == SIZE - 1) {
        printf("The QUEUE is full \n");
    } else {
        if (front == -1) { front = 0; }
        rear++;
        values[rear] = value;
        printf("The value %d was inserted \n", value);
        printQueueValues();
    }

};

void deQueue () {

    if (front == -1) {
        printf("The QUEUE is empty \n");
    } else {
        printf("The value %d was deleted \n", values[front]);
        front++;
        rear--;
        for (int i = 0; i < length - 1; i++) {
            values[i] = values[i + 1];
        }
        values[length - 1] = 0;
        printQueueValues();
        if (front > SIZE - 1) {
            front = rear = -1;
        }
    }

};


main (int argc, char const *argv[]) {

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    enQueue(10);
    enQueue(11);
    enQueue(12);
    return 0;

};