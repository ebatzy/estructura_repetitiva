/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Realizar un programa que muestre en pantalla 
						25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado).
*/


#include <iostream>
using namespace std;

int main()
{
	int x,t;
        x=1;
        t=11;
        while (x <= 25) 
		{
            cout<< t;
            cout<<" - ";
            x = x + 1;
            t = t + 11;
		}
		cout<<endl;
		system("pause");
}
