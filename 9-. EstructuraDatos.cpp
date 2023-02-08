#include <iostream>
#include <time.h>
#include <cstdlib>


void imprimir(int[]);
void inimanual(int[], int);
void inialeatorio(int[], int);
void iniconN(int[],int);
void inidelaN(int[],int);
void sumatoria(int[],int);
void minimo(int[],int);


using namespace std;

int main()

{
    int arreglo[20] = {0}, opc, n, s, m;

    while (1)
    {
        cout << "........opereaciones con arreglos"<< endl;
        cout << "........0. Imprimir" <<endl;
        cout << "........1. inicializacion manual" << endl;
        cout << "........2. inicializacion aleatoria" <<endl;
        cout << "........3. inicializacion con N " <<endl;
        cout << "........4. inicializacion de 1 a N /n" <<endl;
        cout << "........5. sumatoria " <<endl;
        cout << "........6. Maximo" <<endl;
        cout << "........7. Minimo " <<endl;
        cin >> opc;

        switch (opc)
        {
        case 0:
            imprimir(arreglo);
            break;

        case 1:
            cout << "cuantos datos quieres ingresar";
            cin >> n;
            inimanual(arreglo, n);
            break;

        case 2:
            cout << "cuantos datos quieres ingresar";
            cin >> n;
            inialeatorio(arreglo, n);
            break;

        case 3:
	        cout<<"cuantos datos quieres ingresar";
	        cin>>n;
	        iniconN(arreglo, n);
	        break;
	
	    case 4:
	    	cout<<"cuantos datos quieres ingresar";
	        cin>>n;
	        inidelaN(arreglo,n);
	        break;
	
	    //case 5:
	     //   s=sumatoria(arreglo, n);
	     //   cout<<"la sumatoria es:"<<sumatoria<<"/n";
	     //   break;

        case 6:
            int maxi(int a[20], int n);
            break;

        //case 7:
          //  min(arreglo,n);
          //  cout<<"El valor minimo es:"<<m<<endl;
          //  break;
        }
    }
}

void imprimir(int a[20])
{
    int i;
    cout << "contenido del arreglo " <<endl;
    cout << "subindice valor" <<endl;
    for (i = 0; i <= 19; i++)
        cout << "it" << i << "/t/t" << a[i] <<endl;
}

void inimanual(int a[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "arreglo[<<i<<]:";
        cin >> a[i];
    }
}

void inialeatorio(int a[20], int n)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
        a[i] = 1 + rand() % 100;
}

void iniconN(int a[20],int n){

}

void inidelaN(int a[20],int n){

}

void sumatoria(int a[20],int n){

}

void minimo(int a[20],int n){

}




/*//Función para valor minimo

int valor_min(int a[20], int n)
{
    min = 999;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

//Fución para sacar el promedio 

void prom(int s,n){
    float aux;
    aux =s/n; // aux = float(s)/float(n);''
    cout<<"pomedio:"
    }
    
    //tambien usar la f suma anterior 
    case 8:
    prom(suma(arr, n),n);
    break;*/
