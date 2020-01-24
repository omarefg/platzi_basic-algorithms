# Abstract data types

- Un tipo de dato abstracto (ADT) representa un set particular de comportamientos.
    - Podemos definir con precisión lo que hará un ADT
        - Un Stack es una lista que implementa una política "LIFO" en elementos agregados y eliminados

- Una estructura de datos es más concreta. Típicamente es una técnica o estrategia para implementar una ADT.
    - Por ejemplo, podemos utilizar una Linked List o un Array (estructuras de datos) para implementar un Stack (ADT)


- Algunos de los ADT más comunes que debes conocer como programador preparado son:
    - Stack (pila)
    - Queue (cola, FIFO)
    - Priority Queue (cola de prioridades)
    - Diccionarios o mapas
    - Trees (árboles)
    - Graph (grafos)

- Algunas de las estructuras de datos usadas para implementar esos ADTS son:
    - Array
    - Linked List
    - Hash Tables
    - Trees


> Los lenguajes de programación traen distintas implementaciones de los ADT.

## List ADT

Una lista es un tipo de datos abstracto utilizado para representar un número contable de valores ordenados. El mismo valor puede existir más de una vez, esta es la implementación computacional del concepto matemático de secuencia finita, la lista.

### Comandos

- **get()**: Retorna un elemento de la lista en cualquier posición especificada.
- **insert()**: Inserta un elemento en cualquier posición de la lista.
- **remove()**: Remueve la primera aparición de cualquier elemento en una lista no-vacía.
- **removeAt()**: Remueve el elemento que se encuentre en la posición especificada en una lista que no esté vacía.
- **replace()**: Reemplaza un elemento en cualquier posición por otro elemento.
- **size()**: Retorna el número de elementos contenidos en la lista.
- **isEmpty()**: Retorna true si la lista está vacía, si no, regresa false.
- **isFull()**: Retorna true si la lista está llena, si no, regresa false.

## Stack ADT

Un Stack es un tipo de datos abstracto que sirve como una colección de elementos con dos operaciones principales:

- **Push**: agrega un elemento a la colección.
- **Pop**: remueve el elemento que se añadió más recientemente y que no ha sido removido.

### Comandos


- **push()**: Inserta un elemento en un extremo de la pila denominado “cima”.
- **pop()**: Remueve y retorna el elemento en la cima de la pila, si el stack no está vació.
- **peek()**: Retorna el elemento en la cima del stack sin removerlo, si el stack no está vacío.
- **size()**: Retorna el número de elementos en el stack.
- **isEmpty()**: Retorna true si el stack está vacío, si no, retorna false.
- **isFull()**: Retorna true si la lista está llena, si no, regresa false.

## Queue ADT

Una cola es un ADT que sirve para almacenar datos en el orden en el que los datos van llegando.

### Comandos

- **enqueue()**: Inserta un nuevo elemento al final de la cola.
- **dequeue()**: Remueve y retorna el primer elemento de la cola si la cola no está vacía.
- **peek()**: Retorna el primer elemento de la cola sin removerlo.
- **size()**: Retorna el número de elementos almacenados en la cola.
- **isEmpty()**: Retorna true si la cola está vacía, si no, retorna false.
- **isFull()**: Retorna true si la cola está vacía, si no, retorna false.

# Glosario

- LIFO: Last in, first out
- FIFO: First in, first out