#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingrese numero:";
		cin >> n;

	} while (n <= 1 || n >= 11);
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
	/* PARTE DE ARRIBA */
	for (int fila = 1; fila <=numero; fila++)
	{
		/* Centrar figura*/
		int espacios_consola = 40 - numero;
		imprimirEspacios(espacios_consola);
		/*Espacios en la figura*/
		/*Imprimiendo figura linea por linea*/
		int valor1 = numero;
		for(int columna = 1; columna <=numero;columna++)
		{
			if (columna <= fila)
			{
				cout <<valor1;
			}
			else
			{
				cout << " ";
			}
			valor1--;
		}
		int valor2 = 2;
		for (int columna = numero-1; columna >=1; columna--)
		{
			if (columna <=fila)
			{
				cout << valor2;
			}
			else
			{
				cout << " ";
			}
			valor2++;
		}
		cout << endl;
	}

    /* PARTE DE ABAJO */
	for (int fila = numero - 1; fila >= 1; fila--)
	{
		/* CENTRAR IMAGEN */
		int espacios_consola = 40 - numero;
		imprimirEspacios(espacios_consola);

		/* IMPRIMIR FIGURA LINEA POR LINEA*/
		int valor1 = numero;
		for (int columna = 1; columna <= numero; columna++)
		{
			if (columna <= fila)
				cout << valor1;
			else
				cout << " ";
			valor1--;
		}
		int valor2 = 2;
		for (int columna = numero - 1; columna >= 1; columna--)
		{
			if (columna <= fila)
				cout << valor2;
			else
				cout << " ";
			valor2++;
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
