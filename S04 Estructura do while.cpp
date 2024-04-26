#include <iostream>

using namespace std;

int main()
{
    // Crear un menu utilizando Do-While de 4 opciones con las operaciones basicas 
    
    int condicion = 0;
    int seleccion;
    do
    {
        system("cls");
        cout << "---> MENU <---" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> seleccion;

        cout << "La opcion seleccionada fue " << seleccion << endl;

        cout << "Desea realizar otra accion? (0 = no | 1 = si)" << endl;
        cin >> condicion;

    } while (condicion != 0);

    cout << "Saliendo del programa!!!!";
    

    return 0;
}


/*do
{
    
} while ( condition );
*/