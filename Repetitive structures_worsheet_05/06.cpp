#include <iostream>

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

void imprimirEspacios(int num_espacios)
{
	for (int i = 1; i <= num_espacios; i++)
	{
		cout << " ";
	}
}

void buclesAnidados(int numero)
{
	char caracter;

	cout << "Ingrese caracter: ";
	cin >> caracter;
	cout << endl;
	/* PARTE DE ARRIBA */
	for (int i = 1; i <= numero; i++)
	{
		cout << endl;
		/* CENTRAR FIGURA*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);

		for (int j = 1; j <= i; j++)
		{
			if (i == 1 || i == numero || j == 1 || j == i)
			{
				cout << caracter << "\t";
			}
			else
			{
				cout << "\t";
			}
		}
		cout << endl;
	}
	/* PARTE DE ABAJO */

	for (int i = 2; i <= numero; i++)
	{
		cout << endl;
		/* CENTRAR FIGURA*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);

		for (int j = 1; j <= numero; j++)
		{
			if ( j==i || j==numero )
			{
				cout << caracter << "\t";
			}
			else
			{
				cout << "\t";
			}
		}
		cout << endl;
	}
}

int main()
{
	int numero = validarNumero();
	buclesAnidados(numero);
	return 0;
}
