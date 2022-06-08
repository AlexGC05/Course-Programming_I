#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingresar numero: ";
	    cin >> n;

	} while (n <= 0 || n >= 11);

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
	/* Parte de arriba del triangulo */
	for (int i = 1; i <= numero; i++)
	{
		/* Espacios para centrar*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);
		/* Espacios para dar forma al triangulo*/
		imprimirEspacios(numero-i);
		int limite = 2 * i - 1;
		/*Formando la figura*/
		for (int j = 1; j <= limite; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	/* Parte de abajo del triangulo*/
	for (int i = numero - 1; i >= 1; i--)
	{
		/* Espacios para centrar*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);
		/* Espacios para dar forma al triangulo*/
		imprimirEspacios(numero - i);
		int limite = 2 * i - 1;
		/* Formando la figura al réves*/
		for (int j = 1; j <= limite; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

int main()
{
	int numero = validarNumero();
	imprimirTriangulo(numero);
	return 0;
}
