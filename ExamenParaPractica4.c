#include <stdio.h>
int salario(int horas, int valor);
int main(int argc, char const *argv[])
{
    int horas, valor;
    printf("Digite las horas que trabajas: ");
    scanf("%i", &horas);
    printf("Digite el valor que tiene cada hora de trabajo: ");
    scanf("%i", &valor);
    printf("Su salario sera de: %i", salario(horas, valor));
    return 0;
}
int salario(int horas, int valor){
    return horas*valor;
}
