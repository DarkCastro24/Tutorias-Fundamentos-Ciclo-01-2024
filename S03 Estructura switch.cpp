#include <iostream>

using namespace std;

int main()
{
    // Crear un menu de opciones para un programa que tenga las siguientes opciones
    // (1. Ingresar 2. Modificar 3.Mostrar 4.Eliminar) CRUD CREATE READ UPDATE DELETE

    system("cls");
    int seleccion;

    cout << "-->    Menu de CRUD    <--" << endl;
    cout << "1. Ingresar datos" << endl;
    cout << "2. Modificar datos" << endl;
    cout << "3. Mostrar datos" << endl;
    cout << "4. Eliminar datos" << endl;
    cout << "Seleccione una de las opciones: ";
    cin >> seleccion;

    //cout << "La opcion seleccionada es: " << seleccion;

    switch (seleccion)
    {
    case 1:
        /* Ingresar datos */
        cout << "Ingresando datos!!!";
        break;

    case 2:
        /* Modificar datos*/
        cout << "Modificando datos!!!";
        break;

    case 3:
        /*  Mostrar datos*/
        cout << "Mostrando datos!!!";
        break;

    case 4:
        /* Eliminando datos */
        cout << " Eliminando datos!!!";
        break;

    default:
        cout << "Opcion no valida";
        break;
    }

    return 0;
}

/*
    int numero;

    cout << "Ingrese un numero";
    cin >> numero; // El numero ingresado es un 2 // Meto el numero 4

    switch(numero){

        case 1:
            // Esto no se ejecuta
        break;

        case 2:
            // Se ejecuta esta seccion de codigo
        break; // Marcar el fin de nuestro case (de aca sale del switch)

        case 3:
            // Esto tampoco
        break;

        default:
            // Se ejecuta en caso de que el numero ingresado no exista dentro de nuestros casos (Si meto 4 se ejecuta esto)
        break;

    }
*/