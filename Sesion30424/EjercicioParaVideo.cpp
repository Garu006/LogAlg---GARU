#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[5];

    cout << "Ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++){
        cin >> arreglo[i];
    }

    cout << "Los numeros ingresados son: " << endl;
    for(int i=0; i<5; i++){
        cout << arreglo[i] << endl;
    }
    return 0;
}

