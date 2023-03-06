#include <iostream>

using namespace std;

int Entrada(int[], int);
int Salida(int[], int);
void Impresion(int[], int);

int main()
{
	int cola[8], opc, fin = -1;
	while (1)
	{
		//cout<<"__________________"<<endl;
		cout << "\n\n   MENU" << endl;
		//cout<<"__________________"<<endl;
		cout << "1.     Entrada" << endl;
		cout << "2.     Salida" << endl;
		cout << "3.     Impresion" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			fin = Entrada(cola, fin);
			break;
		case 2:
			fin = Salida(cola, fin);
			break;
		case 3:
			Impresion(cola, fin);
			break;
		}
	}
	return 0;
}
int Entrada(int x[8], int y)
{
	int aux;
	if (y < 7)
	{
		cout << "Ingrese el dato de la cola: ";
		cin >> x[y + 1];
		cout << "Dato ingresado con exito!" << endl;
		y = y + 1;
	}
	else
	{
		cout << "Lo sentimos, la cola esta llena. Por favor, intente otra opcion " << endl;
	}
	return y;
}
int Salida(int x[8], int y)
{
	int i, j = 0;;
	if (y < 0)
	{
		cout << "Lo sentimos, la cola carece de valores. Por favor, intente otra opcion " << endl;
	}
	else
	{
		cout << "Ha salido el siguiente dato: " << x[j];
		for (i = 0; i < y; i++)
		{
			x[i] = x[i + 1];
		}
		y = y - 1;
	}
	return y;
}
void Impresion(int x[8], int y)
{
	int i, aux;
	if (y < 0)
	{
		cout << "Lo sentimos, la cola carece de valores. Por favor, intente otra opcion " << endl;
	}
	else
	{
		for (i = 0; i <= y; i++)
		{
			cout << "    " << x[i];
		}
		cout << "" << endl;
	}
}
