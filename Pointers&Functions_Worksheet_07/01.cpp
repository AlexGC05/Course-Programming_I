#include <iostream>

using namespace std;

void generarEspacios(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << " ";
    }
}

double potencia(int base, int exponente)
{
    int pot = 1;
    for (int i = 1; i <= exponente; ++i)
    {
        pot *= base;
    }
    return pot;
}


double sumatoria(int n)
{
    double suma = 0;
    for (int i = 1; i <= n; ++i)
    {
        suma += potencia(-1,i+1)*(potencia(3, i) / potencia(2,i - 1));
    }
    return suma;
}
void Calcular_Serie()
{
    int n;

    do
    {
        cout << "Ingrese numero de terminos: ";
        cin >> n;
    } while (n<=0 || n>=21);

    double resultado = sumatoria(n);
    cout << "El resultado de la sumatoria es:" << resultado << endl;

}

void Graficar()
{
    int n;

    do
    {
        cout << "Ingrese numero de filas: ";
        cin >> n;
    } while (n <= 1 || n >= 10);

    int pantalla = 40;
    for (int i = n; i >=1; --i)
    {
        //Centrar figura
        generarEspacios(pantalla);
        //Espacios en la figura
        generarEspacios(n-i);
        // Lado izquierdo
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
            if (j == i)
            {
                //Lado derecho
                for (int k = i - 1; k >= 1; --k)
                {
                    cout << k;
                }
            }
        }
        cout << endl;
    }
}


int main()
{
    char opcion;
    do {
        cout << "\t\t\t MENU PRINCIPAL" << endl;
        cout << "A. Calcular la serie" << endl;
        cout << "B. Grafico" << endl;
        cout << "C. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 'A':
            Calcular_Serie();
            break;
        case 'B':
            Graficar();
            break;
        case 'C':
            break;
        default:
            cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }

        system("pause");
        cout << endl;

    } while (opcion != 'C');

	return 0;
}
