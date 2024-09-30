#include <stdio.h>
#include <math.h>

double volume(double raio){
	double v;
	v = 4/3*(3.14*pow(raio,3));
	return v;	
}

int main(){
	double raio;
	
	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);
	
	double r = volume(raio);
		
	printf("%.2lf", r);
	
}