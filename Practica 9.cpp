#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);      

    int x = 10, y = 3;
    int z = 10; 
    int* dirz = &z; 

    cout << "x+y = " << x + y << "\n"; 
    cout << "x-y = " << x - y << "\n"; 
    cout << "x*y = " << x * y << "\n"; 
    cout << "x/y = " << x / y << "\n"; 
    cout << "residuo% = " << x % y << "\n"; 

    cout << "incrementado = " << ++x << " o bien " << x + 1 << "\n";
    cout << "--x = " << --x << " decrementado\n"; 

    printf("Dame un número entero para saber si es + o -: ");
    cin >> x;
    x > 0 ? cout << "positivo " : cout << " negativo ";

    cout << "\nDame un número entero para saber si es +,- o 0: ";
    cin >> x;
    x > 0 ? cout << "positivo " : x < 0 ? cout << "negativo " : cout << "es cero"; 

    x = 0;
    cout << "\nx= " << x << "\n";
    cout << "x++ = " << x++ << "\n";
    cout << "x= " << x << "\n";
    cout << "++x = " << ++x << "\n";
    cout << "x= " << x << "\n";
    cout << "y= " << y << ". La dirección de y es " << &y << "\n";

  
    cout << "El valor de z: " << z << endl;               
    cout << "La dirección de z (&z) es: " << &z << endl;  
    cout << "La dirección de z almacenada en dirz: " << dirz << endl;
    cout << "El contenido en *dirz: " << *dirz << endl;

    return 0;
}
//Maria Jose Calderon Valenzuela 24040976