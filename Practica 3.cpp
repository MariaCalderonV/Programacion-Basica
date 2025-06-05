#include <stdio.h> 
//#include<stdlib.h> //system
//#include <iostream> //cin, cout
#include <conio.h> 
//using namespace std;
int main()
{
    char cad[80]; 
    char c; 
    
    puts("dame una cadena"); 
    gets(cad); 
    puts("Ejemplo de impresión con puts");
    puts(cad); 

    printf("ejemplo de impresion con printf: "); 
    printf(cad); 

    printf("\nPresiona una tecla y continua automáticamente: ");
    c = getchar(); 

    puts(cad); 
    printf(cad); 

    printf("\nEscribe un caracter y luego enter: ");
    c = getchar(); 

    printf("\nPresiona una tecla y continua automáticamente: ");
    fflush(stdin); 

    c = getch(); 
    printf("\n");
    putchar(c);

    return 0;
}

 //Maria Jose Calderon Valenzuela 24040976