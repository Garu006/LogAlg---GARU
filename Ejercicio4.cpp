#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numAlumnos;
    double costAlumno=0, costoTotal;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numAlumnos;

    switch (numAlumnos)
    {
    case 100 ... 999:
        numAlumnos = 60;
        costoTotal=costAlumno*numAlumnos;
        break;
    case 50 ... 99:
        numAlumnos = 70;
        costoTotal=costAlumno*numAlumnos;
        break;
    case 30 ... 49:
        numAlumnos = 100;
        costoTotal=costAlumno*numAlumnos;
        break;   
    default:
        break;
    }

    cout << "El costo por alumno es: " << costAlumno << "dolares \n";
    cout << "El costo total es: " << costAlumno << "dolares \n";
    return 0;
}
