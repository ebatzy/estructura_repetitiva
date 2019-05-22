/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa que informa cuantos empleados cobran entre Q100 - Q500 como tambien
					      los que cobran sueldo mayor a Q300 y el gsto total de la empresa.
*/


#include <iostream>
using namespace std;

int main()
{

    int n,x,valor1,valor2;
        float sueldo,gastos;
        cout<<"Cuantos empleados tiene la empresa: ";
        cin>>n;
        x=1;
        valor1=0;
        valor2=0;
        gastos=0;
        while (x <= n) 
		{
            cout<<"Ingrese el sueldo del empleado: ";
            cin>>sueldo;
            if (sueldo <= 300) 
			{
                valor1 = valor1 + 1;
            }
			else
			{
            	valor2 = valor2 + 1;
            }
            gastos = gastos + sueldo;
            x = x + 1;
        }
		cout<<"Cantidad de empleados con sueldos entre 100 y 300: " << valor1 << endl;
		cout<<"Cantidad de empleados con sueldos mayor a 300: "<< valor2 << endl;
		cout<<"Gastos total de la empresa en sueldos: " << gastos << endl;

		system("pause");
}
