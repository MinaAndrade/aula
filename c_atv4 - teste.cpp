#include <stdio.h>

void ordenar(int* a,int* b,int* c){
	int temp;
	
	if(*a>*b){
		temp=*a;
		*a = *b;
		*b = temp;	
	}
	if(*b>*c){
		temp=*b;
		*b = *c;
		*c = temp;	
	}
	if(*a>*b){
		temp=*a;
		*a = *b;
		*b = temp;	
	}
}

int main(){
	int num1,num2,num3;
	
	printf("Digite os 3 valores:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	ordenar(&num1,&num2,&num3);
	
	printf("Ordem crescente: %d %d %d\n",num1,num2,num3);
	return 0;
}