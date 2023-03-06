#include <iostream>

using namespace std;
 
int Push(int[], int);
int Pop(int[], int);
void Impresion(int[], int);

int main()
{
	int pila[8], opc, cima = -1;
	while (1)
	{
		cout<<"__________________"<<endl;
		cout << "    MENU" << endl;
		cout<<"__________________"<<endl;

		cout << "1.     Push (Entrada)" << endl;
		cout << "2.     Pop  (Salida)" << endl;
		cout << "3.     Impresion" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cima = Push(pila, cima);
			break;
		case 2:
			cima = Pop(pila, cima);
			break;
		case 3:
			Impresion(pila, cima);
			break;
		}
	}

	return 0;
}
int Push(int x[8], int y)
{
	if (y < 7)
	{
		cout << "Ingrese un dato: ";
		cin >> x[y + 1];
		cout << "\n\n ----->Listo" << endl;
		y = y + 1;
	}
	else
	{
		cout << "Pila llena." << endl;
	}
	return y;
}
int Pop(int x[8], int y)
{
	if (y < 0)
	{
		cout << "Lo sentimos, la pila carece de valores. Por favor, intente otra opcion " << endl;
	}
	else
	{
		cout << "Salida: " << x[y] << endl;
		y = y - 1;
	}
	return y;
}
void Impresion(int x[8], int y)
{
	int i;
	if (y < 0)
	{
		cout << "Lo sentimos, la pila carece de valores. Por favor, intente otra opcion" << endl;
	}
	else
	{
		cout <<"\n\n|| Impresión||"<<endl;
		for (i = y; i >= 0; i--)
		{
			cout << "|||>" << x[i] << endl;
		}
	}
}
