#include <stdio.h>

float pesoIdeal(float h, char sexo){
	if ((sexo == 'M') || (sexo == 'm')){
		return 72.7 * h - 58;
	}
	else if ((sexo == 'F') || (sexo == 'f')){
		return 62.1 * h - 44.7;
	}
}

int main(void){
	float altura, x;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite sua sexo: ");
	scanf(" %c", &sexo);
	
	x = pesoIdeal(altura, sexo);
	
	printf("Seu peso ideal eh %.2f", x);	
}