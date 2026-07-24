#include <stdio.h>

int calificacion;

int main(int argc, char *argv[]) {

	printf("Ingrese la calificacion: ");
	scanf("%d", &calificacion);
	if (calificacion >= 90)
		printf("Calificacion: A\n");
	
	else if (calificacion >= 80) 
		printf("Calificacion: B\n");
	
	else if (calificacion >= 70) 
		printf("Calificacion: C\n");
	
	else if (calificacion >= 60) 
		printf("Calificacion: D\n");
	
	else 
		printf("Calificacion: F\n");

return 0;
}

