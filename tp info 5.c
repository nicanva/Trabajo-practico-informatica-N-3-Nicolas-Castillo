#include <stdio.h>

int main(int argc, char *argv[]) {
	int num_estudiantes;
	float calificacion, promedio;
	float suma = 0;
	float max = -1.0, min = 101.0;
	
	do {
		printf("Ingrese la cantidad de estudiantes a evaluar: ");
		scanf("%d", &num_estudiantes);
		if (num_estudiantes <= 0) printf("Error: Debe ser un numero positivo.\n");
	} while (num_estudiantes <= 0);
	
	for (int i = 1; i <= num_estudiantes; i++) {
		do {
			printf("Ingrese la calificacion del estudiante %d (0 a 100): ", i);
			scanf("%f", &calificacion);
			if (calificacion < 0 || calificacion > 100) printf("Error: Calificacion invalida.\n");
		} while (calificacion < 0 || calificacion > 100);
		
		if (calificacion > max) max = calificacion;
		if (calificacion < min) min = calificacion;
		suma += calificacion; 
	}
	
	promedio = suma / num_estudiantes;
	
	printf("\nEl promedio de las calificaciones es: %.2f\n", promedio);
	printf("La calificacion mas alta es: %.2f\n", max);
	printf("La calificacion mas baja es: %.2f\n", min);
	return 0;
}

