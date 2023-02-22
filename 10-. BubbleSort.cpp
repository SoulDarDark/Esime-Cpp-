#include<iostream>
#include <time.h>
#include <cstdlib>
using namespace std;



int main(){
    int numeros[]={4,3,5,1,2};
    int i,j,aux;
    
    for(i=0; i<5; i++){ // Recorre todo el arreglo
        for(j=0;j<5;j++){ //inicia la comparación
            if(numeros[j]>numeros[j+1]){ //compara 1x1
                aux= numeros[j]; //empieza a usar valores del arreglo
                numeros[j]= numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }

    cout<<"Orden sacendente:";
    for(i=0; i<5;i++){
        cout<<numeros[i];
    }


    return 0;
}
