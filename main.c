#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int i;
    int factorial = 1;

    printf("ingrese un numero para sacar el factorial");
    scanf("%d", &numero );
    for (i = numero; i>=1; i--)
    {
        factorial = factorial * i;

    }
    printf("El factorial del numero ingresado es: %d", factorial);

    return 0;
}
