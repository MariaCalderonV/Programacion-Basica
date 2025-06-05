#include <iostream>

using namespace std;

void cuad1(int x);  // copia el valor
void cuad2(int &x); // copia la dirección

int main(void)
{
    int x;
    cout << "dame un valor para elevar al cuadrado ";
    cin >> x;
    cout << "x=" << x << " antes de enviarla a la funcion 1";
    system("PAUSE");

    cuad1(x);
    cout << "\nx=" << x << " despues de enviarla a la funcion 1";
    system("PAUSE");

    cuad2(x);
    cout << "\nx=" << x << " despues de enviarla a la funcion 2";

    return 0;
}

void cuad1(int x)
{
    x = x * x;
    cout << "\nx=" << x << " DENTRO de la funcion 1";
    system("PAUSE");
}

void cuad2(int &x)
{
    x = x * x;
    cout << "\nx=" << x << " DENTRO de la funcion 2";
    system("PAUSE");
}
