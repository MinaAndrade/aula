#include <stdio.h>

int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } 
	else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int valor;
    
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("O valor deve ser inteiro e positivo.\n");
    } 
	else {
        int resultado = calcularFatorial(valor);
        
        printf("O fatorial de %d = %d\n", valor, resultado);
    }
    return 0;
}