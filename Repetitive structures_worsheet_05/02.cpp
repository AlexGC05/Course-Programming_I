#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout << "Ingrese numero: ";
		cin >> n;
	} while (n<0 || n>10);

	return n;
}

void buclesAnidados(int numero)
{
	char caracter;

	cout << "Ingrese caracter: ";
	cin >> caracter;
	cout << endl;

	for (int i = 1; i <=numero ; i++)
	{
		for (int j = numero ; j >=i; j--)
		{
			cout << caracter;
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
