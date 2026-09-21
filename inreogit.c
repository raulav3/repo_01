#include <stdio.h>

int main() {
    int dia, mes, year;
    int suma;

    printf("Introduce el dia: ");
    scanf_s("%d", &dia);

    printf("Introduce el mes: ");
    scanf_s("%d", &mes);

    printf("Introduce el año: ");
    scanf_s("%d", &year);

    suma = dia + mes + year;

    printf("Resultado: %d\n", suma);
}