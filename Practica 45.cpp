#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int i, x;

    do {
        cout << "Dame un número para determinar si es primo o no (debe ser mayor que 1): ";
        cin >> x;
    } while (x <= 1);

    if (x == 2) {
        cout << "Sí es primo";
    } else {
        if (x % 2 == 0) {
            cout << "No es primo";
        } else {
            for (i = 3; i * i <= x && x % i != 0; i += 2); // ciclo vacío, sólo busca divisor

            cout << "Se determinó al dar " << i << " vueltas que: " << x << " ";
            if (i * i > x)
                cout << "Sí es primo";
            else
                cout << "No es primo";
        }
    }

    return 0;
}
