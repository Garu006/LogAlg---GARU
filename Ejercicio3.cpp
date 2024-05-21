#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int km;
    cout << "Ingrese la cantidad de kilometros que ha recorrido: ";
    cin >> km;

    double costSin_impuesto = 30;
    if(km<=500){
        costSin_impuesto=30;
    }   else if(km>500 && km <= 1000){
        costSin_impuesto+= 0.05 * (km - 500);
    } else {
        costSin_impuesto += 0.05 *500;
        costSin_impuesto += 0.08 * (km -1000);
    }

    double costoCon_impuesto = costSin_impuesto * 1.15;
    cout << "El costo sin impuesto es: " << costSin_impuesto << "dolares \n";
    cout << "El costo con impuesto es: " << costoCon_impuesto << "dolares \n";
    return 0;
}
