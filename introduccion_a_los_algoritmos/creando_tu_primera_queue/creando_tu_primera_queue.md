# Creando tu primera Queue

Lo primero que necesitamos es tener un problema.

En éste ejemplo el problema es:

> Necesito llevar el orden en el que me están comprando comida en un restaurante que tiene un cupo máximo de cinco personas y debo atenderlos por orden de llegada.

## Pasos

1. Crear pointer para saber que hay en front y rear.
2. Colocar estos valores en -1 al inicializar
3. Incrementar en 1 el valor de *rear* cuando agregemos un elemento
4. Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue
5. Antes de agregar un elemento revisar si hay espacio
6. Antes de remover un elemento revisamos que existan elementos
7. Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1 y agregar el valor de 0 a front al hacer nuestro primer enqueue

[Implementación de nuestro Queue en C](./creando_tu_primera_queue.c)