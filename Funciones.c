#include <stdio.h>
int suma(int num1, int num2);

void test(){
    printf("Esto es una prueba\n");
    printf("La suma de 2 + 3 es %d", suma(2, 3));
    int x=25, y=6446;
    printf("La suma de %d + %d es %d", x, y, suma(x, y));
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Dime un numero: ");
    scanf("%d", &num1);
    printf("Dime el segundo numero: ");
    scanf("%d", &num2);
    printf("La suma de %d + %d es:\n", num1, num2);
    printf("%d", suma(num1,num2));
    return 0;

    test();
}

int suma(int num1, int num2)
{
    return num1 + num2;
}