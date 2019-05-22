/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Ingresar 15 valores en dos listas y verificar que lista es mayor o si son iguales.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int valor,x,suma1,suma2;
        x=1;
        suma1=0;
        suma2=0;
		cout<<"Primer lista"<< endl;
        while (x <= 15) 
		{
            cout<<"Ingrese valor: ";
            cin>>valor;
            suma1 = suma1 + valor;
            x = x + 1;
        }
		cout<<endl;
		cout<<"Segunda lista"<< endl;
        x=1;
        while (x <= 15) 
		{
            cout<<"Ingrese valor: ";
            cin>>valor;
            suma2 = suma2 + valor;
            x = x + 1;
        }
        if (suma1 > suma2) 
		{
			cout<<"Lista 1 mayor." << endl;
        } 
		else
		{
            if (suma2 > suma1) 
			{
                cout<<"Lista2 mayor." << endl;
            }
			else 
			{
                cout<<"Listas iguales." << endl;
            }
        }
		system("pause");
}		
