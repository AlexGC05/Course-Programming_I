#include <iostream>

using namespace std;

int contarLetra(char LETRA)
{
	return LETRA - 'A';
	/* Si LETRA es A  al ser la funcion contarLetra un INT solo devolvera numeros 
	  por lo tanto 
	  LETRA = A = 65 - 'A'= 65 = 0
	  LETRA = B = 66 - 'A'= 65 = 1
	  LETRA = C = 67 - 'A'= 65 = 2
	*/
}

void Lista_Puntajes(char* VPuntajes, int n)
{
	int* Conteo = new int[3]{};

	//Contar el numero de letras usando la resta de sus valores en ASCII
	for (int i = 0; i < n; ++i)
	{
		int indice = contarLetra(VPuntajes[i]);
		Conteo[indice]++;
	}
	// Mostrar el conteo por cada letra 
	// USAMOS CHAR para mostrar letra 
	for (char i = 'A'; i <= 'C'; ++i)
	{ 
		int indice = contarLetra(i);
		cout << "Cantidad de personas que calificaron con " << i << " : " << Conteo[indice] << endl;
	}

	delete[]Conteo;
}

int generarDatos(int low, int up)
{
	return low + rand() % (up - low + 1);
}

void Generar_y_MostrarDatos(char* VPuntajes,int n)
{
	//Generar datos A=65 y C=67
	for (int i = 0; i < n; ++i)
	{
		VPuntajes[i] = generarDatos('A','C');
	}
	//Mostrar datos
	for (int i = 0; i < n; ++i)
	{
		cout << "La persona " << i + 1 << " califico con un puntaje: " << VPuntajes[i] << endl;
	}

}

bool Sabor_Aprobado(char* VPuntajes, int  n)
{
	int excelente = 0;
	// Contara todos las calificaciones con A=EXCELENTE 
	for (int i = 0; i < n; ++i)
	{
		if (VPuntajes[i] == 'A')
		{
			excelente++;
		}
	}
	// Determinara si la cantidad de calificaciones EXCELENTES son mayores que el 50%(n/2.0) del total
	if (excelente > n / 2.0)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	srand(time(NULL));

	int n = 40;
	char* VPuntajes = new char[n];

	Generar_y_MostrarDatos(VPuntajes, n);
	Lista_Puntajes(VPuntajes, n);

	if (Sabor_Aprobado(VPuntajes, n))
		cout << "El nuevo sabor de hamburguesa fue APROBADO" << endl;
	else
		cout << "El nuevo sabor de hamburguesa fue DESAPROBADO" << endl;

	delete[]VPuntajes;
	return 0;
}
