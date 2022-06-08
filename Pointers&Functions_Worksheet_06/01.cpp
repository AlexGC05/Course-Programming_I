#include <iostream>

using namespace std;

void  generarEspacios(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "   ";
    }
}

bool EsPrimo(int n)
{

    if (n != 1 && n != 0)
    {
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (n == i)
                    return true;
                else
                {
                    return false;
                }
            }
        }
    }
    else
        return false;
}

int impar(int n)
{
    return 2 * n + 1;
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

void Calcular_Serie()
{
    int n;
    double y;
    do
    {
        cout << "Ingrese el numero de terminos:";
        cin >> n;

    } while (n<=0 || n>25);

    do
    {
        cout << "Ingrese Y: ";
        cin >> y;
    } while (y <= 0 || y > 5.5);
        
    double suma = -1;

    for (int i = 1; i <= n-1; ++i)    
    {
        if (i % 2 != 0)
        {
            suma += impar(i) * potencia(y, 2 * i) / factorial(2 * i);
        }
        else
            suma -= impar(i) * potencia(y, 2 * i) / factorial(2 * i);
    }

    cout << "El resultado de la sumatoria es: " << suma << endl;
    
}

void Primos()
{
    int n;

    do
    {
        cout << "Ingrese n:";
        cin >> n;
    } while (n<=0);

    for (int i = 1; i <=n; ++i)
    {
        if (EsPrimo(i))
        {
            cout << i << endl;
        }
    }
}

void Graficar()
{
    int n;

    do
    {
        cout << "Ingrese numero de filas:";
        cin >> n;
    } while (n < 2 || n>9);

    cout << endl;

    int pantalla = 40;
    int limite = n;
    for (int i = 1; i <=n; ++i)
    {
        //Generar espacio para centrar la figura
       
        generarEspacios(pantalla);

        //Generar espacios para la figura fila por fila
        generarEspacios(n-i);

        //Generar el grafico fila por fila
        for (int j = 1; j<=i; ++j)
        {
            cout << limite << "  ";
        }
        limite--;
        cout << endl;
    }
}

int main()
{
    char opcion;
    do {
        cout << "\t\t\t MENU PRINCIPAL" << endl;
        cout << "A. Calcular la serie" << endl;
        cout << "B. Primos" << endl;
        cout << "C. Grafico" << endl;
        cout << "D. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 'A':
            Calcular_Serie();
            break;
        case 'B':
            Primos();
            break;
        case 'C':
            Graficar();
            break;
        case 'D':
            break;
        default:
            cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }

        system("pause");
        cout << endl;

    } while (opcion != 'D');

    return 0;
}
