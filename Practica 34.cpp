#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

	int x=1;
	string clave;

	for(x=1;x<4;x++)
	{
		printf("Dame tu password sin espacios en blanco(intento &%d)",x);
		//getline(cin,clave);
		cin>>clave;
		if(clave=="soloyolose")
			break;
	}

	if(x==4)
		puts("\ausuario no autorizado");
	else
		printf("bienvenido al intento #%d",x);

		return 0;
}
 //Maria Jose Calderon Valenzuela 24040976