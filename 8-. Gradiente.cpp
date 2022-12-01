// Juego Matematicas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Programa que calcula el gradiente
//Crear un programa en c++ que sirva para derivar unba función exponencial básica de datos almacenados en el programa, no olvide utilizar objetos.
//sea F(xy)=axy^n grad=(ay^n , a(nx)y^n-1)

#include <iostream>
#include <stdlib.h>
using namespace std;

class grad {
    int dx;
public:
    void g(int x, int y, int z, int n);
};

void grad::g(int x, int y, int z, int n) {
    dx = x * y ^ n;

    cout << "Ingrese el valor de x";
    cin >> x;
    cout << "Ingrese el valor de y";
    cin >> y;
    cout << "Ingrese el valor de n";
    cin >> n;
    cout << "Ingrese el valor de z";
    cin >> z;

    cout << "dx=" << dx;
}
   

int main() {
    grad uno; //declare dos variables de tipo grad 

    uno.g(x,y,n,z); //falta que las funciones salgan
    
    return 0;

}
