#include <windows.h>
#include <conio.h>  // para getche()
#include <iostream>
#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int r, vec[10];
    srand(time(0)); // Inicializa semilla aleatoria

    cout << "Maximice la pantalla y presione una tecla...";
    getche();
    system("CLS");

    // Dibujar líneas horizontales
    for (r = 0; r < 78; r++) {
        gotoxy(r, 0);  cout << "*";
        gotoxy(r, 18); cout << "*";
    }

    // Dibujar líneas verticales
    for (r = 0; r < 18; r++) {
        gotoxy(0, r);   cout << "*";
        gotoxy(79, r);  cout << "*";
    }

    gotoxy(30, 2);
    cout << "Impresión del vector";

    for (r = 0; r < 10; r++) {
        vec[r] = rand() % 100;
        gotoxy(40, r + 3);
        cout << vec[r];
    }

    gotoxy(5, 13);
    getche();
    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976