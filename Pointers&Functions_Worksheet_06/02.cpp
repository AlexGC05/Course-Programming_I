#include <iostream>

using namespace std;

const double PI = 3.1415;

void Area_y_Volumen(double radio, double& area, double& volumen)
{
	area = 4 * PI * radio * radio;
	volumen = 4.0 / 3 * PI * radio * radio;
}

void Area_y_Volumen_P(double radio, double* area, double* volumen)
{
	*area = 4 * PI * radio * radio;
	*volumen = 4.0 / 3 * PI * radio * radio;
}
int main()
{
	double radio, area, volumen;
	cout << "Ingrese el radio:";
	cin >> radio;

	if (radio > 0)
	{
		Area_y_Volumen(radio, area, volumen);
		//Area_y_Volumen_P(radio, &area, &volumen);

		cout << "El area es:" << area << endl;
		cout << "El volumen es:" << volumen << endl;
	}
	else
	{
		cout << " MENSAJE";
	}

	return 0;
}
