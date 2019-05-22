/*Chimaltenango, 26 de febrero de 2019
Programador: Andy Aarón Sipac Sir
Descripcion del programa: Programa que lee los lados de n triángulos y mosrtrar si es equilatero
						escaleno o isosceles y tambien mostrar la cantidad de triangulos de cada tipo .
*/

#include <iostream>

using namespace std;

int main()
{
	int f,lado1,lado2,lado3,cant1,cant2,cant3,n;
        cant1=0;
        cant2=0;
        cant3=0;
        cout<<"Ingrese la cantidad de triangulos: ";
        cin>>n;
        for(f = 1; f <= n; f++) 
		{
           cout<<"Ingrese lado 1: ";
           cin>>lado1;
           cout<<"Ingrese lado 2: ";
           cin>>lado2;
           cout<<"Ingrese lado 3: ";
           cin>>lado3;
           if (lado1 == lado2 && lado1 == lado3) 
		   {
			   cout<<"Es un triangulo equilatero." << endl;
               cant1++;
           } 
		   else 
		   {
               if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                   cout<<"Es un triangulo isosceles." << endl;
                   cant2++;
               }
			   else 
			   {
            	   cant3++;
                   cout<<"Es un triangulo escaleno." << endl;
               }
           }
        }
		cout<<"Cantidad de triangulos equilateros: " << cant1 << endl;
		cout<<"Cantidad de triangulos isósceles:" << cant2 << endl;
		cout<<"Cantidad de triangulos escalenos: " << cant3 << endl;
		system("pause");
}