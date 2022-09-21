#include <iostream>

using namespace std;

int main (){
    int a,b;

    cout << "Digite dos numeros a comparar:";
    cin >> a >> b ;
    
    if (a == b){
        cout<< "Los numeros son iguales"<< endl; 
    } else if (a > b) {
        cout<< "El numero mayor es a:  "<< a;
    } else {
        cout<< "El numero mayor es b:  "<< b;
    }
}