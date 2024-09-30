#include <stdio.h>

int colocarOrdem(int* a, int* b, int* c){
	int temp;
	
	if ((*a > *b) && (*a > *c)){
		temp = *a;
		if (*b > *c){
			*a = *c;
			*c = temp;
		}
		else {
			*a = *b;
			*b = *c;
			*c = temp;
		}	
	}
	else if (*b > *c){
		temp = *b;
		if (*a > *c){
			*b = *a;
			*a = *c;
			*c = temp;
		}
		else{
			*b = *c;
			*c = temp;
		}
	}
	else{
		if (*a > *b){
			temp = *a;
			*a = *b;
			*b = temp;
		}
	}
}

int main(){
	int num1, num2, num3;
	
	printf("Digite os 3 valores positivos: ");
	scanf("%d %d %d",&num1, &num2, &num3);

	colocarOrdem(&num1, &num2, &num3);
	
	printf("Ordem crescente: %d %d %d\n", num1, num2, num3);

	return 0;
}