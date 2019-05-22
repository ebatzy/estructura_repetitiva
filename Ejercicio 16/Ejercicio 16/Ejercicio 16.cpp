/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa que lee 10 números enteros y muestre cuantos numeros ingresados son multiplos de 3
						  y multiplos de 5.
*/

#include <iostream>

using namespace std;

int main()
{
	int m3,m5,valor,f;
        m3=0;
        m5=0;
        for(f = 1; f <= 10; f++) {
            cout<<"Ingrese un valor: ";
            cin>>valor;
            if (valor%3 == 0) 
			{
                m3 = m3 + 1;
            } 
            if (valor%5 == 0) 
			{
                m5 = m5 + 1;
            }
        }
		cout<<"Cantidad de valores ingresados multiplos de 3: " << m3 << endl;
		cout<<"Cantidad de valores ingresados multiplos de 5: " << m5 << endl;
	
		system("pause");
}