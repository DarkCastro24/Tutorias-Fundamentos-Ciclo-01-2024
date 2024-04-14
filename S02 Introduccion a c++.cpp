#include <iostream> // Importacion de libreria

using namespace std; // Omitir std:: en comandos cin, cout ,endl

int main()
{
    // Realizar un programa que realice las operaciones basicas (suma,resta,multiplicacion y division) con dos numeros solicitados al usuario
    
    int num1,num2,total;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Realizar operacion suma 
    total = num1 + num2;
    cout << "El resultado de sumar los numeros es: " << total << endl;
    
    // Realizar operacion resta 
    total = num1 - num2;
    cout << "El resultado de restar los numeros es: " << total << endl;

    // Realizar operacion multiplicacion
    total = num1 * num2;
    cout << "El resultado de multiplicar los numeros es: " << total << endl;

    // Realizar operacion division
    total = num1 / num2;
    cout << "El resultado de dividir los numeros es: " << total << endl;

    // Actividad opcional: Calcular el area de un cuadrado el valor del lado puede ser el numero 1 o el 2.

    // Area del cuadradado = L al cuadrado 

    cout << "Ingrese la longitud de un lado del cuadrado: ";
    cin >> num1;

    int area;

    area = num1 * num1; // Equivale a que elevemos al cuadrado

    cout << "El area de nuestro cuadrado es: " << area;


    return 0;
}