# Merge Sort

El algoritmo MergeSort es un algoritmo del tipo Divide and Conquer, en este dividimos el array de entrada en dos mitades, se invoca la función merge_sort(arr,low,mid); y merge_sort(arr,mid+1,high);

En cada una de esas mitades y luego une las dos mitades ordenadas, la función merge() se encargará de unir las dos mitades.

El comando merge(arr, low, mid, high) es un proceso clave que une las partes ordenadas.

## Implementaciones

1. [Merge sort en C](./merge_sort.c)