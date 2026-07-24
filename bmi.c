#include <stdio.h>
float peso;
float altura;
float resultado;
int main(int argc, char *argv[]) {
printf("Ingrese su peso en kg:\n");
scanf("%f",&peso);
printf("Ingrese su altura en metros\n");
scanf("%f", &altura);
resultado = peso / (altura * altura);
printf("Su indice de masa corporal es: %.2f\n", resultado);
printf("   Indice    |  Condicion\n");
printf("-----------------------------\n");
printf("   < 18.5    |  Bajo peso\n");
printf(" 18.5 a 24.9 |  Normal\n");
printf(" 25.0 a 29.9 |  Sobrepeso\n");
printf("   >= 30     |  Obesidad\n");
printf("-----------------------------\n");
printf("Segun su indice, su condicion es: ");

if (resultado < 18.5) 
printf("Bajo peso\n");

else if (resultado >= 18.5 && resultado <= 24.9) 
printf("Normal\n");

else if (resultado >= 25.0 && resultado <= 29.9) 
printf("Sobrepeso\n");

else 
printf("Obesidad\n");
	return 0;
}

