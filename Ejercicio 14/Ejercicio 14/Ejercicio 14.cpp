/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa bancario que lea los datos de las cuentas corrientes y muestre en pantalla
						  numero de cuenta y estadod de cuenta.
*/

#include <iostream>

using namespace std;

int main()
{
	int cuenta;
        float saldo,suma;
        suma=0;
        do {
			cout<<"Ingrese numero de cuenta: ";
            cin>>cuenta;
            if (cuenta >= 0) 
			{
                cout<<"Ingrese saldo: ";
                cin>>saldo;
                if (saldo > 0) 
				{
					cout<<"Saldo Acreedor." << endl;
                    suma = suma + saldo;
                } 
				else 
				{
                    if (saldo < 0) 
					{
						cout<<"Saldo Deudor." << endl;
                    }
					else 
					{
						cout<<"Saldo Nulo." << endl;
                    }
                }
            }
        } while(cuenta>=0);
        cout<<"Total de saldos Acreedores: " << suma << endl;

		system("pause");
}
