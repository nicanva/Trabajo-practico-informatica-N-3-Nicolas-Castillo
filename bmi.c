#include <stdio.h>
// Link al repositorio: https://github.com/nicanva/Trabajo-practico-informatica-N-3-Nicolas-Castillo
float peso, altura, resultado;

int main(int argc, char *argv[]) {
    printf("Calculadora de masa corporal (BMI)\n\n");
    
    do {
        printf("Ingrese su peso en kg: ");
        scanf("%f", &peso);
        if (peso < 0) printf("Error: El peso no puede ser negativo. Intente de nuevo.\n");
    } while (peso < 0);
    
    do {
        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);
        if (altura < 0) printf("Error: La altura no puede ser negativa. Intente de nuevo.\n");
    } while (altura < 0);
    
    resultado = peso / (altura * altura);
    
    printf("\nSu indice de masa corporal (BMI) es: %.2f\n\n", resultado);
    
    printf("   Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("   < 18.5    |  Bajo peso\n");
    printf(" 18.5 a 24.9 |  Normal\n");
    printf(" 25.0 a 29.9 |  Sobrepeso\n");
    printf("   >= 30     |  Obesidad\n");
    printf("-----------------------------\n\n");
    
    printf("Segun su BMI, usted se encuentra en condicion de: ");
    if (resultado < 18.5) printf("Bajo peso\n");
    else if (resultado <= 24.9) printf("Normal\n");
    else if (resultado <= 29.9) printf("Sobrepeso\n");
    else printf("Obesidad\n");
    
    return 0;
}
