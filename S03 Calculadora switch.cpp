#include <iostream>

using namespace std;

int main()
{
    // Crear un menu de opciones para un programa que tenga las siguientes opciones
    // (1. Ingresar 2. Modificar 3.Mostrar 4.Eliminar) CRUD CREATE READ UPDATE DELETE

    system("cls");

    // Realizar un programa que realice las operaciones basicas (suma,resta,multiplicacion y division) con dos numeros solicitados al usuario

    int num1, num2, total;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int seleccion;

    system("cls");

    cout << "-->    OPERACIONES DISPONIBLES    <--" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Elevar al cuadrado" << endl;
    cout << "Seleccione una de las operaciones: ";
    cin >> seleccion;

    // cout << "La opcion seleccionada es: " << seleccion;

    switch (seleccion)
    {
    case 1:
        // Realizar operacion suma
        total = num1 + num2;
        cout << "El resultado de sumar los numeros es: " << total << endl;
        break;

    case 2:
        // Realizar operacion resta
        total = num1 - num2;
        cout << "El resultado de restar los numeros es: " << total << endl;
        break;

    case 3:
        // Realizar operacion multiplicacion
        total = num1 * num2;
        cout << "El resultado de multiplicar los numeros es: " << total << endl;
        break;

    case 4:
        // Realizar operacion division
        total = num1 / num2;
        cout << "El resultado de dividir los numeros es: " << total << endl;
        break;

    case 5:
        // Realizar operacion potencia al cuadrado
        total = num1 * num1; // Elevar al cuadrado
        cout << "El num1 elevado al cuadrado es: " << total << endl;
        total = num2 * num2; // Elevar al cuadrado
        cout << "El num2 elevado al cuadrado es: " << total << endl;
        break;

    default:
        cout << "Operacion no valida";
        break;
    }

    return 0;
}