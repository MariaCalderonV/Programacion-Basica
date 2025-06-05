#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, c = 0;
    float sueldo, total;
    char opcion, nombre[10];

    // Ejemplo 1: condición falsa desde el inicio
    while (c != 0) { // La condición nunca se cumple
        cout << "Esto nunca se imprime";
        // c = 0;
    }

    // Ejemplo 2: ciclo while del 1 al 10
    x = 1; // inicialización
    while (x < 11) { // condición
        cout << x << "\n"; // Imprime una numeración 1-10
        x++; // variación
    }
    system("PAUSE");

    // Ejemplo 3: entrada controlada por el usuario
    opcion = 's'; // inicialización
    while (opcion == 's' || opcion == 'S') {
        system("CLS");
        cout << "Dame tu nombre: "; fflush(stdin); gets(nombre);
        cout << "Dame tu sueldo: "; cin >> sueldo;
        total += sueldo; // acumulador

        printf("¿Deseas capturar otro empleado (s/n)? ");
        cin >> opcion;
    }

    printf("Total de salarios= $%5.2f\n", total);
    cout << "Después de la pausa el programa se cicla\n";
    system("PAUSE");

    // Ejemplo 4: cuidado con el punto y coma después del while
    x = 0;
    while (x < 10); // este ; hace que se cicle sin ejecutar el bloque siguiente
    {
        cout << x << "\n";
        x++;
    }

    return 0;
}
//Maria Jose Calderon Valenzuela 24040976