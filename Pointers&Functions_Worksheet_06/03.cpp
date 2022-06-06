#include <iostream>

using namespace std;

void Mayor_votacion(int* Lista, int L)
{
	int mayor = Lista[1];
	int puntaje_mayor = 1;
	for (int i = 2; i < L; ++i)
	{
		if (Lista[i] > mayor)
		{
			mayor = Lista[i];
			puntaje_mayor = i;
		}
		cout << "mayor:" << mayor << endl;
	}
	cout << "El puntaje que obtuvo mayor votacion es: " << puntaje_mayor << endl;
}

int generarDatosEnRango(int low, int up)
{
	return low + rand() % (up - low + 1);
}

void Lista_puntajes(int *Vpuntaje,int n,int* Lista, int L)
{
	//Guardar datos frecuentes de []VPuntaje en []Lista
	for (int i = 1; i < L; ++i)
	{
		int contador = 0;
		for (int j = 0; j < n; ++j)
		{
			if (Vpuntaje[j] == i)
			{
				Lista[i] = ++contador;
			}
		}
	}

	//Mostrar cantidad de puntaje frecuente

	for (int i = 1; i < L; ++i)
	{
		cout << "Docentes que calificaron puntaje " << i << " son:" << Lista[i] << endl;
	}
}


void Generar_y_MostrarDatos(int* Vpuntaje, int n)
{
	//Generar datos
	for (int i = 0; i < n; ++i)
	{
		Vpuntaje[i] = generarDatosEnRango(1,4);
	}
	cout << endl;
	//Mostrar datos 
	for (int i = 0; i < n; ++i)
	{
		cout << "Puntaje de docente " << i+1 << " es: " << Vpuntaje[i] << endl;
	}
	cout << endl;
}


int main()
{
	srand(time(NULL));
	
	int n = 30;
	int *Vpuntaje = new int[n];

	int L = 5;
	int* Lista = new int[L] {};

	Generar_y_MostrarDatos(Vpuntaje, n);

	Lista_puntajes(Vpuntaje,n,Lista, L);

	Mayor_votacion(Lista, L);

	delete[]Vpuntaje;
	delete[]Lista;
	return 0;
}

