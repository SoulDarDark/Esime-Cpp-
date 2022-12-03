#include <iostream>
using namespace std;

class gradiente{
    int z,y,n,a;
    int px,py,nd; //parcial
    public:
    parcial();
    grad();

};

gradiente::parcial(){
    cout<<"El programa saca la derivada parcial \n\n";
    cout<<"ingrese x:";
    cin>>a;
    cout<<"ingrese y:";
    cin>>y;
    cout<<"ingrese n:";
    cin>>n;

    if(a=y=n=0){
        px=0;
        px=0;
        cout<<"la derivada parcial dx:"<<px<<endl;
        cout<<"la derivada parcial dy:"<<py<<endl;
    }
    if(a=y){
        px=y;
        py=a;
        
        cout<<"la derivada parcial dx:"<<px<<endl;
        cout<<"la derivada parcial dy:"<<py<<endl;
    }
  
    if(y==1)
    { //para no imprimir todo, tiene que imprimir ay^n
        px= a;
        py=px*y;
        nd=n-1;
        cout<<"\n";
        cout<<"\n la derivada parcial de x: "<<px<<"y^"<<nd<<endl; // aun no saca la potencia como n-1;
        cout<<"\n la derivada parcial de y: "<<py<<"xy^"<<nd<<endl;
        
    } else if(y!=1){
       cout<<"hola";
    }

        
}
    
    

gradiente::grad(){
    cout<<"El programa saca el gradiente:"<<endl;
    cout<<"El gradiente es: ("<<px<<","<<py<<")"<<endl;
}

int main(){
      gradiente a;
      a.parcial();
      a.grad();

    return 0;
}
