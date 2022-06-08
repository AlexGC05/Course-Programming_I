
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415;

void Area_y_Volumen(double arista, double &area, double &volumen)
{
	area = arista * arista * sqrt(3.0);
	volumen = sqrt(2) / 12 * arista * arista;
}

void Area_y_Volumen_P(double radio, double* area, double* volumen)
{
	*area = 4 * PI * radio * radio;
	*volumen = 4.0 / 3 * PI * radio * radio;
}
int main()
{
	double arista, area, volumen;
	cout << "Ingrese la arista:";
	cin >> arista;

	if (arista > 0)
	{
		Area_y_Volumen(arista, area, volumen);
		// Area_y_Volumen_P(radio, &area, &volumen)
		cout << "El area es:" <<area<< endl;
		cout << "El volumen es:"<<volumen<<endl;
	}
	else
	{
		cout << " MENSAJE";
	}

	return 0;
}
