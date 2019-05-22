/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Ingresar 15 valores en dos listas y verificar que lista es mayor o si son iguales.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n,x,valor,par,impar;
        x=1;
        par=0;
        impar=0;
        cout<<"Numeros a ingresar: ";
        cin>>n;
		while (x <= n) 
		{
            cout<<"Ingrese el valor: ";
            cin>>valor;
            if (valor%2 == 0) 
			{
                par = par + 1;
            }
			else 
			{
                impar = impar + 1;
            }
            x = x + 1;
        }
		cout<<endl;
		cout<<"Cantadad de pares: " << par <<endl;
        cout<<"Cantidad de impares: " << impar << endl;
		
		system("pause");
}