/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999
*/

#include <iostream>

using namespace std;

int main()
{
	int suma,valor;
        suma=0;
        do 
		{
            cout<<"Ingrese un valor: ";
            cin>>valor;
            if (valor!= 9999) 
			{
                suma = suma + valor;
            }
        }while (valor!= 9999);
        cout<<"El valor acumulado es ";
        cout<<suma;
        if (suma == 0) 
		{
			cout<<"El valor acumulado es cero." << endl;
        } 
		else 
		{
            if (suma > 0) {
				cout<<"El valor acumulado es positivo." << endl;
            } 
			else 
			{
                cout<<"El valor acumulado es negativo" << endl;
            }
        }
		system("pause");
}
