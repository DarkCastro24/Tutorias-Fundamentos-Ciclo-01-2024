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

    if (n > 1)
    {
        cout << "Imprimiendo numeros del 1 al " << n << endl;
        
        int i = 1;

        while (i <= n)
        {
            cout << "Numero: " << i << endl;
            i++;
        }

        cout << "Saliendo del bucle while!!!";
        }
    else
    {
        cout << "Ingrese un numero mayor a 1!!!!";
    }
    
    return 0;
}


/*while (condition)
{
    // code 
}
*/
