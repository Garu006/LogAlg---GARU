#include <iostream>
using namespace std;

void evaluarTriangulo(int ladoA, int ladoB, int ladoC) {
    if (ladoA == ladoB && ladoB == ladoC) {
        cout << "Triangulo equilatero" << endl;
    } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
        cout << "Triangulo isosceles" << endl;
    } else {
        cout << "Triangulo escaleno" << endl;
    }
}

int main() {
    
    evaluarTriangulo(3, 4, 5); 
    evaluarTriangulo(5, 5, 5); 
    evaluarTriangulo(5, 5, 6);
    return 0;
}
