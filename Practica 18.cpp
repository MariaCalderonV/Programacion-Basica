#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int X, int Y) {
		COORD coord;
		coord.X = X;
		coord.Y = Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
using namespace std;
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int uno,dos,tres,loquesea;
	char nombre[20];
	
	gotoxy(25,2);
	cout<<"INSTITUTO TECNOLOGICO DE DURANGO";
	gotoxy(28,3);
	cout<<"Fundamneto de programacion";
	gotoxy(10,5);
	cout<<"Dime tu nomre ";
	gets(nombre);
	gotoxy(10,6);cout<<"Dime el primer numero: "; cin>>uno;
	gotoxy(10,7);cout<<"Dime el segundo numero: "; cin>>dos;
	gotoxy(10,8);cout<<"Dime el tercer numero: "; cin>>tres;
	
	if (uno<dos and uno<tres)
	{
		loquesea=uno;
	}
	else
	{ 
		if (dos<uno and dos<tres)
		{
			loquesea=dos;
		}
		else
		{
			loquesea=tres;
		}
	}
	gotoxy(10,10);
	
	cout<<nombre<<" El menor de los tres numeros es: "<<loquesea;
	
	return 0;
}
 //Maria Jose Calderon Valenzuela 24040976