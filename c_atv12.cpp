#include <stdio.h>

int encontrarMaior (int a,int b,int c){
	int maior = a;
	
	if (b>maior){
		maior=b;
	}
	if (c>maior){
		maior=c;
	}
	return maior;
}
int main(){
	int valor1,valor2,valor3;
	printf("Digite 3 valores:");
	scanf("%d %d %d", &valor1,&valor2,&valor3);
	int maior = encontrarMaior (valor1,valor2,valor3);
	printf("O maior valor: %d",maior);
	return 0;
}