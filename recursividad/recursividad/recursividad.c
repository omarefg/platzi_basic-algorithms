#include<stdio.h>

long result;
int n;

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char const *argv[]) {
    printf("Ingrese el número a calcular\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Vamo a calmano, el número debe ser positivo\n");
    } else {
        result = factorial(n);
        printf("El factorial de %d es %ld\n", n, result);
    }
    return 0;
}
