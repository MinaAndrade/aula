#include <stdio.h>

double calcularFatorial(int n) {
    if (n <= 1) {
        return 1.0;
    }
    return n * calcularFatorial(n - 1);
}

double calcularS(int N) {
    if (N == 0) {
        return 1.0;
    }
    return 1.0 / calcularFatorial(N) + calcularS(N - 1);
}

int main() {
    int N;
    
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O valor deve ser inteiro e positivo.\n");
    } 
	else {
    	
	    double resultado = calcularS(N);
	    printf("O valor de S para %d = %.2lf\n", N, resultado);
	}
    return 0;
}