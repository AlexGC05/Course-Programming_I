/* 7. Realice una aplicación en C++ que solicite el ingreso de un número entero positivo y menor 
a 10 (N) y muestre, de izquierda a derecha N triángulos rectángulos.
Ejemplo:
Ingrese N: 3 */

#include <iostream>
#include <conio.h>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingrese numero: ";
		cin >> n;
	} while (n < 0 || n>10);

	return n;
}

void imprimirNFiguras(int numero)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int k = 1; k <= numero; k++)
		{
			for (int j = 1; j <= 5; j++)
			{
				if (j == 1 || j == i || i == 5)
					cout << "*";
				else
					cout << " ";
			}
			cout << " ";
		}
		cout << endl;
	}
}


int main()
{
	int numero = validarNumero();
	imprimirNFiguras(numero);
	return 0;
}

