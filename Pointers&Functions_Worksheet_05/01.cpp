#include <iostream>

using namespace std;

void generarEspacios(int n )
{
    for (int i = 1; i <= n; ++i)
    {
        cout << " ";
    }
}

void sumaFibonacchi(int &A, int&B, int&resultado)
{
    resultado = A + B;
    A = B;
    B = resultado;
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
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

double sumatoria(int n)
{
    int x;

    do
    {
        cout << "Ingrese x: ";
        cin >> x;
    } while (x <=0 || x >=5);

    double suma = x;

    for (int i = 1; i < n; ++i)
    {
       
        if (i % 2 == 0)
            suma += potencia(x, 2 * i) / factorial(2 * i);
        else
            suma -= potencia(x, 2 * i) / factorial(2 * i);
    }
    return suma;
}


void Fibonacci()
{
    int n;

    do
    {
        cout << "Qué n-ésimo termino desea : ";
        cin >> n;
    } while (n<=0);

    int A=0, B=1, resultado=0;
    for (int i = 1; i < n; ++i)
    {
        sumaFibonacchi(A, B, resultado);
    }
    cout << "El termino " << n << " es :" << resultado << endl;
}

void Graficar()
{
    int n;

    do
    {
        cout << "Ingrese el numero de filas: ";
        cin >> n;
    } while (n<1 || n > 10);

    for (int i = 1; i <= n; ++i)
    {
        // Generar espacio para centrar la figura
        int pantalla = 40;
        generarEspacios(pantalla);
        //Generar espacios para la figura fila por fila
        generarEspacios(n - i);

        //Generar el grafico fila por fila
        int limite = 2*i;
        for (int j = 1; j <= limite; ++j)
        {
            if (j % 2 == 0)
            {
                cout << " ";
            }
            else
                cout << j;
        }
        cout << endl;
    }


}

void CalculoSerie()
{
    int n;
    do
    {
        cout << "Ingrese el numero de terminos: ";
        cin >> n;
    } while (n <= 0 || n > 30);

    double resultado= sumatoria(n);
    cout << "El resultado de la sumatoria es:" << resultado << endl;
}

int main()
{
    int opcion;
    do {
        cout << "\t\t\t MENU PRINCIPAL" << endl;
        cout << "1. Calcular la serie" << endl;
        cout << "2. N-esimo término de Fibonacci" << endl;
        cout << "3. Gráfico" << endl;
        cout << "4. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            CalculoSerie();
            break;
        case 2:
            Fibonacci();
            break;
        case 3:
            Graficar();
            break;
        case 4:
            break;
        default:
            cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }

        system("pause");
        cout << endl;

    } while (opcion != 4);

	return 0;
}
