/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
        num=8;
        while (num <= 500) 
		{
            cout<< num;
            cout<<" - ";
            num = num + 8;
        }
		cout<<endl;
		system("pause");
}
