#include <stdio.h>

int main(){
	float lado_1;
	float lado_2;
	float lado_3;
	float resultado_perimetro;
	
	printf("Ingresa la medida del primer lado del triangulo: ");
	scanf("%f", &lado_1);
	
	printf("Ingresa la medida del segundo lado del triangulo: ");
	scanf("%f", &lado_2);
	
	printf("Ingresa la medida del tercer lado del triangulo: ");
	scanf("%f", &lado_3);
	resultado_perimetro = (lado_1 + lado_2 + lado_3);
	printf("\nEl perimetro del triangulo con las medidas %0.2f , %0.2f y %0.2f es:\n %f", lado_1, lado_2, lado_3, resultado_perimetro);
	return 0;
}
