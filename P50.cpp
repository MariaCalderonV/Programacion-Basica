#include <iostream> // programa que suma vectores y matrices
#include <time.h>   // random
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int m1[10][10], m2[10][10], m3[10][10]; // declara tres matrices
    int i, j, n, r, c; // variables para ciclos, límite, renglón y columna

    srand(time(0)); // Inicializa la semilla de números aleatorios

    do {
        cout << "Cuantos elementos por lado tienen matriz? <2-10>: ";
        cin >> n;
    } while (n > 10 || n < 2);

    r = 2;
    for (i = 0; i < n; i++) { // ciclo para renglones
        c = 1;
        for (j = 0; j < n; j++) { // ciclo para columnas
            m1[i][j] = rand() % 10;
            gotoxy(c, r);
            printf("%2d", m1[i][j]);

            m2[i][j] = rand() % 10;
            gotoxy(c + n * 4, r);
            printf("%2d", m2[i][j]);

            m3[i][j] = m1[i][j] + m2[i][j];
            gotoxy(c + n * 8, r);
            printf("%2d", m3[i][j]);

            c += 3;
        }
        r++;
    }

    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976