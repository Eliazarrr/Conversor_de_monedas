#include <stdio.h>

int main() {
    float cantidad, resultado;
    int opcion;

    printf("Bienvenido al conversor de moneda\n");
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("\nSeleccione la moneda de entrada:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            resultado = cantidad / 7.78; // Tasa de cambio de quetzales a dólares
            printf("\n%.2f quetzales son %.2f dólares estadounidenses\n", cantidad, resultado);
            printf("%.2f quetzales son %.2f euros\n", cantidad, resultado * 0.86); // Tasa de cambio de dólares a euros
            break;
        case 2:
            resultado = cantidad * 7.78; // Tasa de cambio de dólares a quetzales
            printf("\n%.2f dólares estadounidenses son %.2f quetzales\n", cantidad, resultado);
            printf("%.2f dólares estadounidenses son %.2f euros\n", cantidad, cantidad * 0.86); // Tasa de cambio de dólares a euros
            break;
        case 3:
            resultado = cantidad / 0.86; // Tasa de cambio de euros a dólares
            printf("\n%.2f euros son %.2f dólares estadounidenses\n", cantidad, resultado);
            printf("%.2f euros son %.2f quetzales\n", cantidad, resultado * 7.78); // Tasa de cambio de euros a quetzales
            break;
        default:
            printf("\nOpción no válida\n");
    }

    return 0;
}











