#include <iostream>
using namespace std;

int main()
{
    int arreglo[10] = {1,4,5,3,10,200,21,11,66,67};
    
    // Variable de totales
    int total = 0;
    
    // Bucle para sumar
    for (auto i : arreglo) {
        total = total + i;
    }
    
    // Muestro el resultado
    cout << "El total es: " << total << endl;
    
}