#include <stdio.h>

double factorial(int n) {
    if (n <= 1) {
        return 1.0;
    }
    return n * factorial(n - 1);
}

double calculateArrangements(int n, int p) {
    if (n < p) {
        return 0.0; // Não é possível calcular arranjos com n < p
    }
    return factorial(n) / factorial(n - p);
}

int main() {
    int n = 5; // Número total de elementos
    int p = 3; // Número de elementos a serem arranjados

    if (n >= p) {
        double result = calculateArrangements(n, p);
        printf("O número de arranjos de %d elementos tomados %d a %d é: %lf\n", n, p, p, result);
    } else {
        printf("O valor de n deve ser maior ou igual a p.\n");
    }

    return 0;
}