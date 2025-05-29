#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int vector[10]; // declara un vector de 10 posiciones
    int i, j, n, tempo;
    srand(time(0)); // Inicializa la semilla de números aleatorios
    do{
        cout<<"Dime cuantos elementos quieres ordenar? <2-10>:\n";
        cin>>n;
    }while(n<2 || n>10);
    
    for(i=0;i<n;i++) // Ciclo para llenar el vector
    {
        vector[i]=rand()%10; // Genera número aleatorio entre 0 y 9
        cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(vector[i]>vector[j])
            {
                tempo=vector[j];
                vector[j]=vector[i];
                vector[i]=tempo;
            }
        }
    }

    cout<<"Vector ordenado\n";
    for(i=0;i<n;i++)
        cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976