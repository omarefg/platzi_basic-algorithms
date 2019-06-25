/*
    1 - Crear pointer para saber que hay en front y rear
    2 - Colocar estos valores en -1 al inicializar
    3 - Incrementar en 1 el valor de rear cuando agregamos un elemento
    4 - Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue
    5 - Antes de agregar un elemento revisar si hay espacio
    6 - Antes de remover un elemento revisamos que existan elementos
    7 - Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1 y agregar el valor de 0 a front al hacer nuestro primer enqueue
 */

#include<stdio.h>
#define SIZE 5

int values[SIZE];
int front = -1;
int rear = -1;

void enQueue (int value) {

    if (rear == SIZE - 1) {
        printf("The QUEUE is full bro \n");
    } else {
        if (front == -1) { front = 0; }
        rear++;
        values[rear] = value;
        printf("The value %d was inserted bro \n", value);
        printf("Values is: \n");
        for (int i = 0; i < sizeof(values); i++) {
            printf("%d\n", values[i]);
        }
    }

};

void deQueue () {

    if (front == -1) {
        printf("The QUEUE is empty bro \n");
    } else {
        printf("The value %d was deleted bro \n", values[front]);
        front++;
        rear--;
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










