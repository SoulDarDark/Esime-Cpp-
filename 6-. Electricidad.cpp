#include <iostream>

using namespace std;

double Resist_total(double x, double y);
double Volt_total(double x, double y);

double Resist_total(double r1, double r2) {//se dan los nombres a las varaibles desde aqui, los que se van a usar en su impresion

	double rt;
	rt = r1 + r2;
	return rt;
}

double Volt_total(double v1, double v2) {//se dan los nombres a las varaibles desde aqui, los que se van a usar en su impresion

	double vt;
	vt = v1 + v2;
	return vt;
}

int main()
{
	double r1, r2;
	double v1, v2;

	//variables que referencias a las clases
	double restotal;
	double voltal;

   cout << "_________________________________________________" << endl;
   cout << "Calcula la resistencia total y el voltaje total\n";
   cout << "_________________________________________________ \n" << endl;
   cout << "El programa calcula la resistencia total y el voltaje\n";
   cout << "de un circuito a partir de: \nRT=R1+R2 y VT=V1+V2\n\n";
   cout << "Ingrese la Resistencia 1:";
   cin >> r1  ;
   cout << endl;
   cout << "Ingrese la Resistencia 2:";
   cin >> r2  ;
   cout << endl;
   cout << "Ingrese el Voltaje 1:";
   cin >> v1;
   cout << endl;
   cout << "Ingrese el Voltaje 2:";
   cin >> v2;
   cout << endl;

   restotal = Resist_total(r1, r2);//darle parametros de recibimiento
   cout << "la resistencia total es: " << restotal << " ohms" <<  endl;

   voltal = Volt_total(v1, v2);//darle parametros de recibimiento
   cout << "El voltaje total es: " << voltal << " volts" << endl;

   return 0;
}
