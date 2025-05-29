#include <iostream> // con getline y cin.ignore() corta la primera letra
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    struct Estudiante {
        string nombre;
        int edad;
        int calificaciones[3]; // Array p/calificaciones 3 materias
    };

    int numEstu; // Número de estudiantes a almacenar
    cout << "Ingresa la cantidad de estudiantes: ";
    cin >> numEstu;
    cin.ignore(); // limpia el buffer

    Estudiante estudiantes[numEstu]; // Arreglo de estructuras Estudiante

    // Ingreso de datos para cada estudiante
    for (int i = 0; i < numEstu; i++) {
        cout << "\nIngresa los datos del estudiante #" << i + 1 << ":\n";
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;

        // Ingresamos las calificaciones
        cout << "Ingresa las calificaciones de 3 materias:\n";
        for (int j = 0; j < 3; j++) {
            cout << "Calificación #" << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
        cin.ignore(); // Limpia el buffer de entrada
    }

    // Mostramos la información de todos los estudiantes
    cout << "\nInformación de los estudiantes:\n";
    for (int i = 0; i < numEstu; i++) {
        cout << "\nEstudiante #" << i + 1 << ": ";
        cout << "Nombre: " << estudiantes[i].nombre << " ";
        cout << "Edad: " << estudiantes[i].edad << " ";
        cout << "Calificaciones: ";
        for (int j = 0; j < 3; j++) {
            cout << estudiantes[i].calificaciones[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976