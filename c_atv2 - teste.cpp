#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
	if (num <= 0){
		//printf("Nao eh numero valido");
		return false;
	}
	else if ((num % 1 ==0) && (num % num == 0)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int num;
	bool x;
	
	while (num != 0){
		
		printf("Digite um numero inteiro e positivo: ");
		scanf("%d", &num);
		
		x = primo(num);
		
		//printf(x);
		
		if (x == false){
			printf("Nao eh primo\n");
		}
		else {
			printf("Eh primo\n");
		}
	}
}