/*crea una tabla de multiplicar usando punteros*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero=0;
    int *puntero;
    int i=0;

    puntero = &numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (i<=12)
    {
        printf("%i*%i=%i\n", i, *puntero, i* *puntero);
        i++;
    }
    

    return 0;
}
