#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main( )
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
	int matriz[100][100];//matriz
	int i,j,n;
	srand(time(0));;//inicia la semilla para aleatorios
	 do{
        cout<<"Dime cuantos elementos quieres ordenar? <2-100>:\n";
        cin>>n;
    }while(n<2 || n>100);
    for(i=0;i<n;i++)//renglones
    	for(j=0;j<n;j++)//columnas
    	matriz[i][j]=rand()%100;//genera numeros aleatorios en la matriz
    cout<<"Impreion de la matriz\n";
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    		printf("%3d",matriz[i][j]);
    		cout<<"\n";
	}
	cout <<"impresion de la diagonal\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)//columna y fila igual
				printf("%3d",matriz[i][j]);
			else
				printf("    ");	
		}
		cout<<"\n";
	}

    return 0;
}
 //Maria Jose Calderon Valenzuela 24040976