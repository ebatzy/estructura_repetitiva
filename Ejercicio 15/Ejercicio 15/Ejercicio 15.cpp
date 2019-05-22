/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa que ingresa 10 valores y posteriormente muetre la suma y promedio obtenido.
*/

#include <iostream>

using namespace std;

int main()
{
	int suma,f,valor,promedio;
        suma=0;
        for(f = 1; f <= 10; f++) 
		{
            cout<<"Ingrese valor: ";
            cin>>valor;
            suma = suma + valor;
        }
		cout<<"La suma es: " << suma << endl;
        promedio = suma/10;
        cout<<"El promedio es: " << promedio << endl;

		system("pause");
}