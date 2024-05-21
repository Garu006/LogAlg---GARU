#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numAlumnos;
    double costoTotal;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numAlumnos;

    switch (numAlumnos)
    {
    case 100 ... 999:
        costoTotal = 60 * numAlumnos;
        break;
    case 50 ... 99:
        costoTotal = 70 * numAlumnos;
        break;
    case 30 ... 49:
        costoTotal = 100 * numAlumnos;
        break;   
    default:
        break;
    }

    cout << "El costo por alumno es: " << costoTotal / numAlumnos << " dolares \n";
    cout << "El costo total es: " << costoTotal << " dolares \n";
    return 0;
}