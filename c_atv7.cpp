#include <stdio.h>
#include <math.h>

float calcularXY(float x, float y){
	return pow(x, y);	
}

int main(){
	float x, y;
	
	printf("Digite o valor de X: ");
	scanf("%f", &x);
	printf("Digite o valor de Y: ");
	scanf("%f", &y);
	
	float resultado = calcularXY(x, y);
	
	printf("O valor de X elevado a Y = %.2f", resultado);
}