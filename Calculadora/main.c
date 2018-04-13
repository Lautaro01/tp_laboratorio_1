#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define ESC 27
int main()
{
    char seguir='s';
    char opcion;
    int numeroA=0;
    int numeroB=0;
    int resultado=0;
    float resultadoDivision=0;


    while(seguir=='s')
    {
        printf("   A=%d \t B=%d \n",numeroA,numeroB);
        printf("1. Ingresar numero A. \n");
        printf("2. Ingresar numero B. \n");
        printf("3. Sumar A + B. \n");
        printf("4. restar A - B. \n");
        printf("5. Dividir A / B. \n");
        printf("6. Multiplicar A * B. \n");
        printf("7. Calcular el factorial de A!.\n");
        printf("8. Todas las operaciones!. \n");
        printf("c. Limpiar A y B!.\n");
        printf("ESC. Salir. \n");
        opcion = getch();

        switch(opcion)
        {
            case '1':
                printf("ingrese el numero A: ");
                scanf("%d", &numeroA);
                system("cls");
                break;

            case '2':
                printf("ingrese el numero B: ");
                scanf("%d", &numeroB);
                system("cls");
                break;
            case '3':
                resultado = suma(numeroA, numeroB);
                system("pause");
                system("cls");
                break;
            case '4':
                resultado = resta(numeroA, numeroB);
                system("pause");
                system("cls");
                break;
            case '5':
                resultadoDivision = division(numeroA, numeroB);
                system("pause");
                system("cls");
                break;
            case '6':
                resultado = multiplicacion(numeroA, numeroB);
                system("pause");
                system("cls");
                break;
            case '7':
                resultado = factorial(numeroA);
                system("pause");
                system("cls");
                break;
            case '8':
                resultado = suma(numeroA, numeroB);
                resultado = resta(numeroA, numeroB);
                resultadoDivision = division(numeroA, numeroB);
                resultado = multiplicacion(numeroA, numeroB);
                resultado = factorial(numeroA);
                system("pause");
                system("cls");
                break;
            case 27:
                seguir = 'n';
                break;
            case 'c':
                numeroA = 0;
                numeroB = 0;
                system("cls");
                break;
            default:
                printf("ERROR! Ingrese un un numero correcto para realizar alguna operacion!\n");
                system("pause");
                system("cls");
                break;
        }
    }

    return 0;
}
