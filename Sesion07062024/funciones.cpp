#include <iostream>
#include <string.h>
#include "variables.h"
using namespace std;

CIUDAD ciudades[MAX_REG];
int pos=0;
//crud
void PedirDatos();
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(CIUDAD *c);
CIUDAD buscar(int id);
int menu(int op);
void principal();


void agregar(CIUDAD *c)
{
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id)
{
    for(int i=0; i<pos; i++)
    {
        if(ciudades[i].id == id)
        {
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;

}

int obtPos(int id)
{
    int posi = 0;
    for (int i = 0; i < pos; i++)
    {
       if (ciudades[i].id == id)
       {
        return i;
       }
    }
    return -1;
}
void editar(CIUDAD *c, int id)
{
    int posi=obtPos(id);
    strcpy(ciudades[posi].nombre = c->nombre);
    strcpy(ciudades[posi].descripcion, c->descripcion);
}

void eliminar(int id)
{
    int posi=obtPos(id);

    for (int i = posi; i < pos; i++)
    {
        ciudades[i] =ciudades[i+1];
    }
    pos--;
}

int menu()
{   
    int op;
    cout << "Menu \n";
    cout << "1. Agregar ciudad \n";
    cout << "2. Buscar ciudad \n";
    cout << "3. Editar ciudad \n";
    cout << "4. Eliminar ciudad \n";
    cout << "5. Mostrar todo \n";
    cout << "6. Salir \n";
    cout << "Ingrese una opcion: ";
    cin >> op;
    return op;
}

void principal()
{
    int op;
    do
    {
        op=menu();
        switch (menu())
        {
        case 1:
            PedirDatos();
            break;
        case 2:
            cout << "chau\n";
        default:
            cout << "fuck kevin\n";
            break;
        }
    } while (op!=6);
    
}

void PedirDatos()
{
    CIUDAD ciudad;
    cout << "Datos de ciudad\n";
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "NOMBRE: ";
    cin >> ciudad.nombre;
    cout << "DESCRIPCION: ";
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << "Registro Agregado... \n";
}