#include <iostream>

using namespace std;

int MenorNota(int* VPuntajes, int n)
{
	int menor = VPuntajes[0];
	for (int i = 0; i < n; ++i)
	{
		if (menor<VPuntajes[i])
		{
			menor = VPuntajes[i];
		}
	}
	return menor;
}

int Cantidad_menores(int* VPuntajes, int n)
{
	int cantidad = 0;
	int menor = MenorNota(VPuntajes, n);

	for (int i = 0; i < n; ++i)
	{
		if (VPuntajes[i] == menor)
		{
			cantidad++;
		}
	}
	return cantidad;
}

float calcularProm(int* VPuntajes,int n)
{
	float suma = 0;
	float prom;
	for (int i = 0; i < n; ++i)
	{
		suma = suma + VPuntajes[i];
	}
	prom = suma / n;
	return prom;
}
void Lista_DebajodelPromedio(int* VPuntajes, int n)
{
	float prom= calcularProm(VPuntajes, n);

	cout << "Notas debajo del promedio: " << endl;

	for (int i = 0; i < n; ++i)
	{
		if (VPuntajes[i] < prom)
		{
			cout << "El alumno " << i + 1 << " tiene nota: " << VPuntajes[i] << endl;
		}
	}
}

void GeneraryMostrarDatos(int* VPuntajes, int n)
{
	// Generar datos aleatorio

	for (int i = 0; i < n; ++i)
	{
		VPuntajes[i] = rand() % 101;
	}
	cout << endl;

	// Mostrar datos del arreglo

	for (int i = 0; i < n; ++i)
	{
		cout << VPuntajes[i] << " ";
	}
	cout << endl;
}

int main()
{
	//srand(time(NULL));
	srand(1);
	int n = 40;
	int* VPuntajes = new int[n];

	GeneraryMostrarDatos(VPuntajes, n);

	Lista_DebajodelPromedio(VPuntajes, n);

	cout<< "\n La cantidad de alumnos que obtuvieron la menor nota es: "<<Cantidad_menores(VPuntajes, n);

	delete[]VPuntajes;
	return 0;
}
