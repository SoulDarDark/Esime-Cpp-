#include<iostream>
#include<time.h>
#include <stdlib.h>
void imprimir(int[]);
int iniManual(int[], int);
int iniAleatoria(int[], int);
void iniconN(int[], int, int);
void inide1aN(int[], int);
int sumatoria(int[], int);
int maximo(int[], int);
int minimo(int[], int);
void promedio(int, int);
void MayoresPromedio(int[], int);
int buscar(int[], int, int);
void buscarmod(int[], int, int, int);
int InsertarPosicionCero(int[], int);
int InsertarUltimaPosicion(int[], int);
int InsertarBloqueInicio(int[], int, int);
int InsertarBloqueFinal(int[], int, int);
int InsertarEnMedio(int[], int, int, int, int);
int EliminarUltimaPosicion(int[], int);
int EliminarPrimeraPosicion(int[], int);
using namespace std;
int main()
{
	int arreglo[20] = { 0 }, opc, n, s, valor, m, up = -1, d1, d2, b, pos = -1;
	while (1)
	{
		cout << "Operaciones con arreglo\n";
		cout << "0 imprimir\n";
		cout << "1 Inicializacion manual\n";
		cout << "2 Inicializacion aleatoria\n";
		cout << "3 Inicializacion con N\n";
		cout << "4 Inicializacion de 1 a N\n";
		cout << "5 sumatoria\n";
		cout << "6 valor maximo\n";
		cout << "7 valor minimo\n";
		cout << "8 promedio\n";
		cout << "9 Mayores al promedio\n";
		cout << "10 buscar\n";
		cout << "11 buscar y modificar\n";
		cout << "12 insertar en la posicion 0\n";
		cout << "13 insertar ultima posicion \n";
		cout << "14 insertar bloque al inicio\n";
		cout << "15 insertar un bloque al final\n";
		cout << "16 insertar en medio\n";
		cout << "17 eliminar ultima posicion\n";
		cout << "18 eliminar primera posicion\n";
		cin >> opc;
		switch (opc)
		{
		case 0:
			imprimir(arreglo);
			break;
		case 1:
			cout << "cuantos datos tienes que ingresar";
			cin >> n;
			up = iniManual(arreglo, n);
			break;
		case 2:
			cout << "cuantos datos quieres ingresar";
			cin >> n;
			up = iniAleatoria(arreglo, n);
			break;
		case 3:
			cout << "Cuantos datos quieres ingresar?: ";
			cin >> n;
			cout << "Ingresa el valor: ";
			cin >> valor;
			iniconN(arreglo, n, valor);
			break;
		case 4:
			cout << "Cuantos datos quieres inicializar?: ";
			cin >> n;
			inide1aN(arreglo, n);
			break;
		case 5:
			s = sumatoria(arreglo, n);
			cout << "la sumatoria es:" << s << "\n";
			break;
		case 6:
			m = maximo(arreglo, n);
			cout << "El valor maximo es: " << m << endl;
			break;
		case 7:
			m = minimo(arreglo, n);
			cout << "El valor minimo es: " << m << endl;
			break;
		case 8:
			promedio((sumatoria(arreglo, n)), n);
			break;
		case 9:
			MayoresPromedio(arreglo, n);
			break;
		case 10:
			int val, p;
			cout << "¿Que dato desea buscar?\n";
			cin >> val;
			p = buscar(arreglo, n, val);
			break;
		case 11:
			cout << "Dato a buscar: ";
			cin >> val;
			pos = buscar(arreglo, n, val);
			buscarmod(arreglo, val, n, pos);
			break;
		case 12:
			up = InsertarPosicionCero(arreglo, up);
			break;
		case 13:
			up = InsertarUltimaPosicion(arreglo, up);
			break;
		case 14:
			cout << "tamaño de bloque:";
			cin >> n;
			up = InsertarBloqueInicio(arreglo, up, n);
			break;
		case 15:
			cout << "tamaño de bloque:";
			cin >> n;
			up = InsertarBloqueFinal(arreglo, up, n);
			break;
		case 16:
			int pd1, pd2;
			cout << "primer dato:\n";
			cin >> d1;
			cout << "segundo dato:\n";
			cin >> d2;
			{
				cout << "tamaño del bloque:";
				cin >> b;
				up = InsertarEnMedio(arreglo, pd1=0, pd2=0, up, b);
			}
			break;
		case 17:
			cout << "se elimina la ultima posicion:\n";
			up = EliminarUltimaPosicion(arreglo, up);
			break;
		case 18:
			cout << "se elimina la primera posicion:\n";
			up = EliminarPrimeraPosicion(arreglo, up);
			break;
		}
	}
}
void imprimir(int a[20])
{
	int i;
	cout << "contenido de arreglo\n";
	cout << "subindice de valor\n";
	for (i = 0; i <= 19; i++)
		cout << "\t" << i << "\t\t" << a[i] << "\n";
}
int iniManual(int a[20], int n)
{
	int i, up;
	for (i = 0; i < n; i++)
	{
		cout << "Ingresa a[" << i << "]:";
		cin >> a[i];
	}
	up = n - 1;
	return up;
}
int iniAleatoria(int a[20], int n)
{
	int i, up;
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
	up = n - 1;
	return up;
}
void iniconN(int a[20], int n, int v)
{
	int i;
	for (i = 0; i <= v; i++)
		a[i] = v;
}
void inide1aN(int a[20], int n)
{
	int i;
	for (i = 0; i < n; i++)
		a[i] = i + 1;
}
int sumatoria(int a[20], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int maximo(int a[20], int n)
{
	int maximo, i;
	maximo = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > maximo)
			maximo = a[i];
	}
	return maximo;
}
int minimo(int a[20], int n)
{
	int minimo, i;
	minimo = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] < minimo)
			minimo = a[i];
	}
	return minimo;
}
void promedio(int s, int n)
{
	float aux = 0;
	aux = float(s) / float(n);
	cout << "El promedio es de: " << aux << "\n";
}
void MayoresPromedio(int a[], int n)
{
	int i;
	float sum = 0, promedio = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	promedio = sum / n;
	for (i = 0; i < n; i++) {
		if (a[i] > promedio)
			cout << "\n\t" << a[i];
	}
}
int buscar(int a[20], int n, int val)
{
	int i, bandera = 0, pos = -1;
	for (i = 0; i < n; i++)
	{
		if (val == a[i])
		{
			bandera = 1;
			pos = i; break;
		}
	}
	if (bandera == 1)
		cout << "Dato encontrado\n";
	else
		cout << "Dato NO encontrado\n";
	return pos;
}
void buscarmod(int a[20], int n, int val, int pos)
{
	int p = -1;
	p = pos;
	if (p > -1)
	{
		cout << "ingresa el nuevo valor: "; cin >> a[p];
	}
}

int InsertarPosicionCero(int a[20], int up)
{
	int i;
	if (up == -1)
	{
		up = 0;
		cout << "Ingresa a[0]:";
	}
	else
	{
		up++;
		if (up <= 19)
		{
			for (i = up; i > 0; i--)
				a[i] = a[i - 1];
			cout << "Ingresa a[0]:";
			cin >> a[0];
		}
		else
			cout << "El arreglo esta lleno:\n";
	}
	return up;
}
int InsertarUltimaPosicion(int a[20], int up)
{
	int i;
	if (up == -1)
	{
		up = 0;
		cout << "Ingresa a[up]:";
	}
	else
	{
		up++;
		if (up <= 19)
		{
			for (i = up; i > 0; i--)
				a[i] = a[i - 1];
			cout << "Ingresa a[up]:";
			cin >> a[up];
		}
		else
			cout << "El arreglo esta lleno:\n";
	}
	return up;
}
int InsertarBloqueInicio(int a[20], int up, int n)
{
	int i, x, temp, mov;
	if (up == -1)
	{
		up = iniAleatoria(a, n);
	}
	else
	{
		temp = up + n;
		if (temp <= 19)
		{
			for (mov = 1; mov <= n; mov++)
			{
				up++;
				for (i = up; i >= mov; i--)
					a[i] = a[i - 1];
			}
		}
		else
			cout << "El arreglo esta lleno\n";
	}
	return temp;
}
int InsertarBloqueFinal(int a[20], int up, int n)
{
	int i, temp;
	if (up == -1)
	{
		up = iniAleatoria(a, n);
	}
	else
	{
		temp = up + n;
		if (temp <= 19)
		{
			for (i = 1; i <= n; i++)
			{
				up++;
				a[up] = 1 + rand() % 100;
			}
		}
		else
			cout << "El arreglo esta lleno\n";
	}
	return up;
}
int InsertarEnMedio(int a[20], int pd1, int pd2, int up, int b)
{
	int i, temp, k;
	temp = up + b;
	if (temp > 20)
		cout << "el bloque no se puede insertar \n";
	else
	{
		for (i = 1; i <= b; i++)
		{
			up++;
			for (i = up; i > pd2; i--)
				a[i] = a[i - 1];
		}
		for (k = pd2; k < pd2 + b; k++)
			a[i] = 1 + rand() % 100;
	}
	return up;
}
int EliminarUltimaPosicion(int a[20], int up)
{
	a[up] = 0;
	up--;
	return up;
}
int EliminarPrimeraPosicion(int a[20], int up)
{
	a[0] = 0;
	up--; return up; 
}
