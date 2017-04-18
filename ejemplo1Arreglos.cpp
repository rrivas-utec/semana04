#include <iostream>
using namespace std;

int main()
{
    // Creacion de variables
    int x = 10;
    int arreglo[5] = {3,4,5,6,7};
    
    // Acceder a los valores
    cout << x << endl;
    
    // Acceder a un arreglo
    cout << arreglo[0] << endl; // Accediendo al primer elemento
    cout << arreglo[4] << endl; // Accediendo al ultimo elemento
    
    cout <<"Mostrando el  bucle" << endl;
    
    // Bucle
    for (auto i: arreglo)
    {
        cout << i << endl;
    }
    
    
    return 0;
}