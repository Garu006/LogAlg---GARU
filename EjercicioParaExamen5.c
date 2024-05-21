#include <stdio.h>
void intercambiar(int v1, int v2);
int main(int argc, char const *argv[])
{   
    int num1, num2;
    printf("Ingresa un numero: ");
    scanf("%i", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%i", &num2);

    intercambiar(num1, num2);
    return 0;
}
void intercambiar(int v1, int v2){
    printf("%i, %i\n", v2, v1);
}