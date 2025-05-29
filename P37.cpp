#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	char cadena[15];
	int len,i;
	cout<<"Dame un palabla en minusculas: ";
	gets(cadena);
	len=strlen(cadena);
	for(i=0;i<len;i++)
	cadena[i]=toupper(cadena[i]);
	cout<<"Impresion de la cadena completa:"<<cadena<<"\n";
	cout<<"Impresion elemetos por elemento: \n";
	for(int i=0;i<len;i++)
		cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
}
 //Maria Jose Calderon Valenzuela 24040976