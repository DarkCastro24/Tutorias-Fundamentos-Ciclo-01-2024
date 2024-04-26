#include <iostream>

using namespace std;

/**
 *  Tipos de funciones
 *  int, double, void, boolean y string
*/

// Realizar dos validaciones primero que los numeros sean positivios > 0
// Los dos numeros no pueden ser iguales

// Prototipo o inicializacion de funciones
void imprimirMenu();
double sumar(double, double);
double restar(double, double);
double multiplicar(double, double);
double dividir(double, double);
bool validarNaturales(double, double);
bool validarIguales(double, double);

int main()
{
    int condicion = 0;
    // Crear un menu utilizando Do-While de 4 opciones con las operaciones basicas
    do
    {
        // Borrar el contenido de la consola
        system("cls");
        imprimirMenu();
        int seleccion;
        double num1, num2, resultado;
        cin >> seleccion;

        cout << "Ingrere el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        if (validarIguales(num1, num2))
        {
            if (validarNaturales(num1, num2))
            {
                switch (seleccion)
                {
                case 1:
                    resultado = sumar(num1, num2);
                    cout << "La opcion seleccionada fue suma" << endl;
                    break;

                case 2:
                    resultado = restar(num1, num2);
                    cout << "La opcion seleccionada fue resta" << endl;
                    break;

                case 3:
                    resultado = multiplicar(num1, num2);
                    cout << "La opcion seleccionada fue multiplicacion" << endl;
                    break;

                case 4:
                    resultado = dividir(num1, num2);
                    cout << "La opcion seleccionada fue division" << endl;
                    break;

                default:
                    cout << "Opcion no disponible!!! " << endl;
                    break;
                }

                cout << "El resultado es: " << resultado << endl;
            }
            else
            {
                cout << "Los numeros no son naturales" << endl;
            }
        }
        else
        {
            cout << "Los numeros no pueden ser iguales" << endl;
        }

        cout << "Desea realizar otra accion? (0 = no | 1 = si)" << endl;
        cin >> condicion;

    } while (condicion != 0);

    cout << "Saliendo del programa!!!!";

    return 0;
}

bool validarNaturales(double num1, double num2)
{
    // Al menos uno de los numeros debe ser natural
    // if (num1 > 0 || num2 > 0)
    // Ambos deben ser naturales
    //           y
    if (num1 > 0 && num2 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validarIguales(double num1, double num2)
{
    // not equals | no iguales
    if (num1 != num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void imprimirMenu()
{
    system("cls");
    cout << "---> MENU <---" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una opcion: " << endl;
}

double sumar(double num1, double num2)
{
    return num1 + num2;
}

double restar(double num1, double num2)
{
    return num1 - num2;
}

double multiplicar(double num1, double num2)
{
    return num1 * num2;
}

double dividir(double num1, double num2)
{
    return num1 / num2;
}

/*
    funcion que realiza una suma

    int sumar(int num1, int num2)
    {
        return num1+num2;
    }

    double sumar(double num1, double num2)
    {
        return num1+num2;
    }

    Quiero sumar dos numeros
    sumar(num1,num2);
    return = num1+num2

*/