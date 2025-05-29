#include <iostream> // programa que suma vectores y matrices
#include <time.h>   // random
using namespace std;

int main() {
    int m1[10][10]; // declara una matriz
    int sumaRen[10], sumaCol[10]; // declara 2 vectores
    int i, j, n, z; // variables para los ciclos y el límite
    srand(time(0)); // Inicializar la semilla de números aleatorios

    do {
        cout << "Cuantos elementos por lado tienen matriz y vector? (<2-10>): ";
        cin >> n;
    } while(n > 10 || n < 2);

    for(i = 0; i < n; i++) { // puesta a cero de los dos vectores
        sumaRen[i] = 0;
        sumaCol[i] = 0;
    }

    // llenado aleatorio matriz
    for(i = 0; i < n; i++) { // ciclo para renglones
        for(j = 0; j < n; j++) { // ciclo para columnas
            m1[i][j] = rand() % 10;
        }
    }

    // suma renglones
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sumaRen[i] = sumaRen[i] + m1[i][j];
        }
    }

    // suma columnas
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sumaCol[i] = sumaCol[i] + m1[j][i];
        }
    }

    // impresión
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << "[" << m1[i][j] << "] ";
        }
        cout << " [" << sumaRen[i] << "]\n";
        for(z = 0; z < 2147483633; z++); // ciclo retardador
    }

    for(j = 0; j < n; j++) { // ciclo para vector
        cout << "[" << sumaCol[j] << "]";
    }

    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976