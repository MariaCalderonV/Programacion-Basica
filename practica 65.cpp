#include <iostream>
using namespace std; // Función que verifica si un número es par o impar

void parImpar(int numero);

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    parImpar(numero);

    // vuelvo a llamar la función y no hay necesidad de repetir código
    cout << "Ingrese otro numero: ";
    cin >> numero;
    parImpar(numero);

    return 0;
}

void parImpar(int numero) {
    if (numero % 2 == 0)
        cout << "El numero es par.\n";
    else
        cout << "El numero es impar.\n";
}

 //Maria Jose Calderon Valenzuela 24040976