/* Chimaltenango, 26 de febrero de 2019
Programador: Andy Aaron Sipac Sir
Descripción del programa: Ingresar 10 notas y nos informe cuantos tienen mayores o iguales a 7 
							y cunatos menores.
*/

#include<iostream> 

using namespace std; 

int main()         
{             
    int x,nota,mayor,menor;
        x=1;
        mayor=0;
        menor=0;
        while (x <= 10) 
		{
        	cout<<"Ingrese nota: ";
            cin>>nota;
            if (nota >= 7) 
			{
                mayor = mayor + 1;
            }
			else 
			{
                menor = menor + 1;
            }
            x = x + 1;
        }
        cout<<"Cantidad de alumnos con notas mayores o iguales a 7: " <<mayor << endl;
        cout<<"Cantidad de alumons con notas menores a 7: " <<menor << endl;
    }

 
