#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingrese numero: ";
		cin >> n;
	} while (n <= 0 || n >=10);

	return n;
}

void imprimirEspacios(int numero)
{
	for (int i = 1; i <= numero; i++)
	{
		cout << " ";
	}
}

void imprimirTriangulo(int numero)
{
	/* PARTE DE ARRIBA*/
	/* LADO IZQUIERDO*/
	for (int i = 1; i <= numero; i++)
	{
		imprimirEspacios(numero - i);

		for (int j = 1; j <= i; j++)
		{
			cout << j;
			/* LADO DERECHO */
			if (j == i)
			{
				for (int k = j-1; k >= 1; k--)
				{
					cout << k;
				}
			}
		}
		cout << endl;
	}

   // PARTE DE ABAJO 
	for (int i = numero -1; i >=1; i--)
	{
		// LADO IZQUIERDO //
	imprimirEspacios(numero - i);

	for (int j = 1; j <= i; j++)
	{
		cout << j;
		if (j == i)
		{
			for (int k = j - 1; k >= 1; k--)
			{
				cout << k;
			}
		}
	}
	cout << endl;
}

int main()
{
	int numero = validarNumero();
	imprimirTriangulo(numero);
	return 0;
}
