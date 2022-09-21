#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<< "________________________________"<< endl;
    cout<< "Detector de triangulos "<< endl;
    cout<< "________________________________\n\n";

    cout<<"ingrese el valor del primer arista:"<<endl;
    cin >> a;
    cout<<"ingrese el valor del segundo arista:"<<endl;
    cin >> b;
    cout<<"ingrese el valor del tercero arista:"<<endl;
    cin >> c;

    if((a=b) || (b=c)){
       cout<< "Triangulo equilatero"<< endl;
    }  else if ((a==b) || (b!=c)){
       // != significa diferente
       cout<< "Triangulo Iscoceles"<< endl;
    } else if ((a==c) || (c!=b)){
       cout<< "Triangulo Iscoceles"<< endl;
    } else if ((b==c) || (c!=a)){
       cout<< "Triangulo Iscoceles"<< endl;
    } 
}

