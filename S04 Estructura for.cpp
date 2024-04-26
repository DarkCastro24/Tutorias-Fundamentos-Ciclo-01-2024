#include <iostream>

using namespace std;


int main()
{
    // Crear un programa que imprima numeros del 1 a un numero N que ingrese el usuario 
    // Validar que el numero ingresado no sea menor a 1 
    // Metemos 1 se va a ejecutar 1 vez porque el bucle inicia desde 0

    int n;

    cout << "Ingrese el numero n: ";
    cin >> n;

    if (n > 0)
    {
        cout << "Imprimiendo numeros del 1 al " << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Num: " << i+1 << endl;
        }

        cout << "Saliendo del bucle for!!!";
        }
    else
    {
        cout << "Ingrese un numero mayor a 0!!!!";
    }
    
    return 0;
}


/*
    for (size_t i = 0; i < count; i++)
    {
        // Codigo   
    }

    i++ creciendo 1 en 1  | 1 2 3 4 5 6 ....
    i-- decreciendo 1 en  | 1 10 9 8 7 6 ....
*/


