/* Chimaltenango, 26 de febrero de 2019
Programador: Andy Aaron Sipac Sir
Descripci�n del programa: muestre en pantalla los n�meros del -50 al 0.
*/

#include <iostream>  

using namespace std;  
 
int main()       
{
	int x; x = -50;
	while (x <= 0)
	{
	cout <<x;                       
	cout << endl;                       
	x = x + 1;                 
	}           
	
	system("pause");
	return 0;
}   