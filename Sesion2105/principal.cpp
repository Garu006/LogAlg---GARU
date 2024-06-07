#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    PERSON students[MAXREGISTERS];
    int op, i=0;

    cout << "CIF: ";
    cin >> teacher.cif;

    cout << "NOMBRE: ";
    scanf(" %[^\n]", teacher.name);

    cout << "APELLIDOS: ";
    scanf(" %[^\n]", teacher.lastName);

    do
    {
        system("cls||clear");
        printf("CIF: ");
        scanf(" %[^\n]", students[i].cif);
        printf("Nombre: ");
        scanf(" %[^\n]", students[i].name);
        printf("Apellidos: ");
        scanf("%d", students[i].lastName);
        printf("Nota: ");
        scanf("%d", students[i].grade);

        printf("Desea ingresar otro registro \n 1. SI \n 0. No \n Digite su opcion: ");
        cin >> op;
        i++;
    } while (op!=0);
    

    printf("Datos del profesor\n CIF: %s\n", teacher.cif);
    printf("Nombre Completo: %s %s\n", teacher.name, teacher.lastName);

    for (int j = 0; j < i ; j++)
    {
        printf("Nombe: %s \nApellidos: %s \nNota: %d\n"
        students[j].name, students[j].lastname, students[j].grade);
    }
    
    cout << "CIF: ";
    cin >> students.cif;

    cout << "NOMBRE: ";
    scanf(" %[^\n]", students.name);

    cout << "APELLIDOS: ";
    scanf(" %[^\n]", students.lastName);

    cout << "NOTA :";
    scanf(" %[^\n]", students.grade);

    printf("Datos del estudiante\n CIF: %s\n", students.cif);
    printf("Nombre Completo: %s %s\n", students.name, students.lastName);
    printf("Nota del estudiante: %s\n", students.grade);
    return 0;
}

