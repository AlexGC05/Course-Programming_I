
#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingrese numero: ";
		cin >> n;
	
	} while (n<=0 || n>=11);

	return n;
}

void imprimirEspacios(int num_espacios)
{
	for (int i = 1; i <= num_espacios; i++)
	{
		cout << " ";
	}
}

void imprimirFigura(int numero)
{   
	// PARTE DE ARRIBA
	for (int i = 1; i <= numero; i++)
	{
		/* CENTRAR FIGURA*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);
		/* Espacios en la figura*/
		imprimirEspacios(numero - i);
		/* IMPRIMIR FIGURA LINEA POR LINEA*/
		int limite = 2 * i - 1;
		for (int j = 0; j < limite; j++)
		{
			cout << (char)('A' + j);
		}
		cout << endl;
	}
	// PARTE DE ABAJO
	for (int i = numero-1; i >=1; i--)
	{
		/* CENTRAR FIGURA*/
		int num_espacios = 40 - numero;
		imprimirEspacios(num_espacios);
		/* Espacios en la figura*/
		imprimirEspacios(numero - i);
		/* IMPRIMIR FIGURA LINEA POR LINEA*/
		int limite = 2 * i - 1;
		for (int j = 0; j < limite; j++)
		{
			cout << (char)('A' + j);
		}
		cout << endl;
	}
}

int main()
{
	int numero = validarNumero();
	imprimirFigura(numero);
	return 0;
}
