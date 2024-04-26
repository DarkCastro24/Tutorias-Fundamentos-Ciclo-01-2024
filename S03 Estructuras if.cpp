#include <iostream>

using namespace std;


int main()
{
    system("cls");
    // Hacer un programa que solicite un numero al usuario y verifique si es menor a 0, igual a 0 o mayor que 0

    // Cadena de texto es cualquier palabra que ingresemos: "Programacion" "Diego" "Matematicas Discretas" "Programacion de estructuras dinamicas"
    int num1;
    cout << "Ingrese un numero: ";
    cin >> num1;

    if (num1 == 0)
    {
        cout << "El numero ingresado es igual a 0!!!";
    }
    else if (num1 > 0) // Es numero positivo 1, 2 , 3 ,4 , .....
    {
        cout << "El numero ingresado es mayor a 0!!!";
    }
    else if(num1 < 0)
    {
        cout << "El numero ingresado es menor a 0!!!!";
    }
    else
    {
        cout << "Dato erroneo";
    }
    return 0;
}


/*
*   Estructura IF
*   IF(Expresion) Expresion verdadera o falsa TIPO BOOLEANO
*   Expresacion = num1 > 0  num1 < 0 clave == "clave123" 
*/

/*if (num1 >= 1) // Incluye al 1
{
    // El numero es mayor a 1
}
else if(num1 == 0) // Si la condicion se cumple esto nos da true    num1 != 0 false (comprobar si no es igual)
{
    // El numero es igual a 0
}
else
{
    // Si no se cumplen niguna de las condiciones anteriores entra aca  
    // Es menor a 0
}*/
