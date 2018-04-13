
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED




int suma(int a, int b)
{
    int resultado;
    resultado = a + b;
    printf("El resultado de la suma es: %d+%d=%d\n",a,b,resultado);
    return resultado;

}

int resta(int a,int b)
{
    int resultado;
    resultado = a - b;
    printf("El resultado de la resta es: %d-%d=%d\n",a,b,resultado);
    return resultado;
}

float division(int a,int b)
{
    float resultado;
        if (b == 0)
        {
            printf("Error, no se puede dividir por 0! \n");
        }
        else
        {
            resultado = (float) a / b;
            printf("El resultado de la division es: %d/%d = %.2f\n",a,b,resultado);
        }
    return resultado;
}

int multiplicacion(int a, int b)
{
    int resultado;
    resultado = a * b;
    printf("El resultado de la multiplicacion es: %d*%d=%d\n",a,b,resultado);
    return resultado;
}

int factorial(int a)
{
    int i;
    int resultado=1;

        if(a < 0)
        {
            printf("Error! No se puede hacer el factorial de numeros negativos\n");
        }
        else if(a == 0)
        {
            printf("El resultado del factorial es: 0!=1\n");
        }
        else
        {
            for(i=a;i>1;i--)
            {
                resultado= resultado * i;

            }
            printf("El resultado del factorial es: %d!=%d\n",a,resultado);
        }

    return resultado;
}

#endif // FUNCIONES_H_INCLUDED
