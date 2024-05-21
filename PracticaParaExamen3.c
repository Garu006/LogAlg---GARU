#include <stdio.h>
int area(int h, int b);
int perimetro(int h, int b);

int main(int argc, char const *argv[])
{
    int b, h;
    printf("Ingrese la base: ");
    scanf("%i", &b);
    printf("Ingrese la altura: \n");
    scanf("%i", &h);
    printf("El area es: %i\n", area(h,b));
    printf("El perimetro es: %i\n", perimetro(h,b));
    return 0;
}
int area(int h, int b){
    return h*b;
}
int perimetro(int h, int b){
    return 2*(b+h);
}