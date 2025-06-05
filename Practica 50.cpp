#include <iostream>
#include <time.h> // Para rand() y time()
using namespace std;

int main() {
    int matriz[5][5]; // declara una matriz de 5 por 5
    int i, j;

    srand(time(0)); // Inicializar la semilla de números aleatorios

    for (i = 0; i < 5; i++) { 
        for (j = 0; j < 5; j++) { 
            cout << "Dame el valor del renglón " << i << " columna " << j << ": ";
            cin >> matriz[i][j];
            // Para usar aleatorios, reemplaza la línea anterior por:
            // matriz[i][j] = rand() % 100; 
        }
    }

    cout << "\nMatriz resultante:\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
            // cout << matriz[i][j] << " "; // Alternativa sin printf
        }
        cout << "\n";
    }

    return 0;
}
