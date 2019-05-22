/* Chimaltenango, 26 de febrero de 2019
Programador: Andy Aaron Sipac Sir
Descripción del programa: Ingresar un conjunto de n alturas de personas por teclado
						  y mostrar la altura promedio de las personas.
*/

#include<iostream> 

using namespace std; 

int main()         
{
    int n,x;
        float altura,suma,promedio;
		cout<<"Cuantas personas hay: ";
        cin>>n;
        x=1;
        suma=0;
        while (x <= n) 
		{
            cout<<"Ingrese la altura: ";
            cin>>altura;
            suma = suma + altura;
            x = x + 1;
        }
        promedio = suma/n;
		cout<<"Altura promedio: " << promedio << endl;

		system("pause");
}
