#include <iostream>

using namespace std;

int validarNumero()
{
	int n;
	do
	{
		cout<<"Ingrese numero: ";
		cin >> n;

	} while (n > 10);
	return n;
}

void buclesAnidados(int numero)
{
	for (int i = 1; i <= numero; ++i)
	{
		
		for (int j = 1; j <= i; j++)
		{
			cout << " " << j;
		}
		cout << endl;
	}
}

int main()
{
	int numero = validarNumero();
	buclesAnidados(numero);
}
