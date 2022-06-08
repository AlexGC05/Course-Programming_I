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

void imprmirEspacios(int numero)
{
	int consola = 40 - numero / 2;
	for (int i = 1 ; i <= consola; i++)
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

	for (int i = 1; i <= numero; i++)
	{
		/* Espacio para centrar */


		/* Formando la figura*/
		cout << endl;
		imprmirEspacios(numero);
		for (int j =1; j <=numero; j++)
		{
			if(i==1 || i==numero || j==1 || j==numero)
			{
				cout << caracter <<"  ";
			}
			else
			{
				cout << "   ";
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
