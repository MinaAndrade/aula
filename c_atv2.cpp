#include <stdio.h>
#include <stdbool.h>

bool valorprimo(int num){
	if (num <= 1){
		return false;
	}
	for (int i = 2; i*i<=num; i++){
		if (num% i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int valor;
	
	printf("Digite um valor inteiro e positivo: ");
	scanf("%d", &valor);
	
	if (valorprimo(valor)){
		printf("%d eh primo", valor);
	}
	else{
		printf("%d nao eh primo", valor);
	}
}