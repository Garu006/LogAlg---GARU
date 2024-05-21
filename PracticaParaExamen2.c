#include <stdio.h>
int suma();
int resta();
int multiplicar();
int dividir();

int main(int argc, char const *argv[])
{
    int option;
    printf("Bienvenido...\n");
    printf("Opcinon 1: Sumar\n");
    printf("Opcion 2: Restar\n");
    printf("Opcion 3: Multiplicar\n");
    printf("Opcion 4: Dividir\n");
    printf("Opcion 5: Salir\n");
    printf("Elige una opcion\n");
    scanf("%i", &option);

    if (option=1)
    {
        printf("La suma es: %i\n", suma());
    }
    else if (option=2)
    {
        printf("La restar es: %i\n", resta());
    }
    else if (option=3)
    {
       printf("La multipicar es: %i\n", multiplicar());
    }
    else if (option=4)
    {
        printf("La dividir es: %i\n", dividir());
    }
    else if (option=5)
    {
        printf("Adios");
    }
    
    else{
        printf("Opcion invalida, vuelve a intentarlo");
        
    }
        if (option !=5)
        {
            main(0,0);
        }
        
    return 0;
}

    int suma(){
        int num1, num2;
        printf("Dime dos numeros...\n");
        printf("Primer numero...");
        scanf("%i", &num1);
        printf("Segundo numero...");
        scanf("%i", &num2);
        return num1+num2;
    }
    int resta(){
        int num1, num2;
        printf("Dime dos numeros...");
        printf("Primer numero...");
        scanf("%i", &num1);
        printf("Segundo numero...");
        scanf("%i", &num2);
        return num1-num2;
    }
    int multiplicar(){
        int num1, num2;
        printf("Dime dos numeros...");
        printf("Primer numero...");
        scanf("%i", &num1);
        printf("Segundo numero...");
        scanf("%i", &num2);
        return num1*num2;
    }
    int dividir(){
        int num1, num2;
        printf("Dime dos numeros...");
        printf("Primer numero...");
        scanf("%i", &num1);
        printf("Segundo numero...");
        scanf("%i", &num2);
        if (num2>0) return num1/num2;
        return 0;
    }