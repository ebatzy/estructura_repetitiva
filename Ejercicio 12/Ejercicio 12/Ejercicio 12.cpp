/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa que lee el peso de una pieza el proceso termina cuando ingresamos el valor 0
						  y mostrar cuantas piezas  9,8 Kg. y 10,2 Kg ,  cuántas con más de 10,2 Kg , cuantos menos de 9,8
						  y total de piezas.
*/

#include <iostream>

using namespace std;

int main()
{
	int cant1,cant2,cant3,suma;
        float peso;
        cant1=0;
        cant2=0;
        cant3=0;
        do {
            cout<<"Ingrese el peso de la pieza (0 para finalizar): ";
            cin>>peso;
            if (peso > 10.2) 
			{
                cant1++;
            }
			else
			{
                if (peso >= 9.8)
				{
                    cant2++;
                }
				else
				{
                    if (peso > 0)
					{
                        cant3++;
                    }
                }
            }
        } while(peso!=0);
		cout<<endl;
        suma = cant1 + cant2 + cant3;
		cout<<"Piezas con peso entre 9.8 kg y 10.2 kg: " << cant2 <<endl;
		cout<<"Piezas con un peso superior a 10.2 kg: " << cant1 << endl;
        cout<<"Piezas con un peso inferior a 9.8 kg: " << cant3 << endl;
		cout<<"Piezas procesadas: " << suma << endl;
		system("pause");
 }
