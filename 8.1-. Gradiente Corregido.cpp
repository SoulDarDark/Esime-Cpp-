#include <iostream>
using namespace std;

class gradiente{
    int x,z,y,n;
    int px,py,pz,nd; //parcial
    public:
    parcial();
    grad();

};

gradiente::parcial(){

    cout<<" *1-. derivadas parciales * \n";
    cout<<"ingrese x:";
    cin>>x;
    cout<<"ingrese y:";
    cin>>y;
    cout<<"ingrese n:";
    cin>>n;
    cout<<"ingrese z:";
    cin>>z;

    /*-----1-----*/
    if(x==0,y==0,n==0,z==0){ 

        cout<<endl;
        cout<<"la derivada parcial dx:"<<x<<endl;
        cout<<"la derivada parcial dy:"<<y<<endl;
        cout<<"la derivada parcial dz:"<<z<<endl;
        cout<<endl;

    /*-----2-----*/
    }else if(y==1) 
    { //para no imprimir todo, tiene que imprimir ay^n
        px= x;
        py=px*y;
        nd=n-1;
        cout<<"\n";
        cout<<"\n la derivada parcial de x: "<<px<<"y^"<<nd<<endl; // aun no saca la potencia como n-1;
        cout<<"\n la derivada parcial de y: "<<py<<"xy^"<<nd<<endl;
        cout<<"\n la derivada parcial de z: "<<px<<"y^"<<nd<<endl;
        
    }else if(x>1||y>1||z<1){ // || significa y 
        px=n*x;
        py=n*y;
        nd=n-1;
        z=z;
        
        cout<<"\n";
        cout<<"\n la derivada parcial de x:"<<px<<"x "<<y<<"y "<<z<<"z"<<endl;
        cout<<"\n la derivada parcial de y:"<<x<<"x "<<py<<"y^"<<nd<<" "<<z<<"z"<<endl;
		cout<<"\n la derivada parcial de z:"<<x<<"x "<<y<<"y "<<pz<<"z"<<endl;
    
    }

        
}
    
    

gradiente::grad(){
    cout<<endl;
    cout<<"*2-. Gradiente *:"<<endl;
    
    /*-----1-----*/
    if(x==0,y==0,n==0,z==0){ 

        cout<<endl;
        cout<<"El gradiente es:∇: ("<<x<<","<<y<<","<<z<<")"<<endl;
        
    /*-----2-----*/
    }else if(y==1) 
    { //para no imprimir todo, tiene que imprimir ay^n
        px= x;
        py=px*y;
        nd=n-1;
        pz=0;
        cout<<"\n";
        cout<<"\n El gradiente es: ∇:("<<px<<","<<py<<","<<pz<<")"<<endl;
        
    /*-----excepcion-----*/
    } else if (n<=0){
        cout<<"\n La derivada no se puede resolver, por favor ingrese un N valido ";
    } else if(z>1||y>1||z<1){ // || significa y 
        
        cout<<"\n El gradiente es: ("<<px<<"x "<<y<<"y "<<z<<"z "<<","<<x<<"x "<<py<<"y^"<<nd<<" "<<z<<"z "<<","<<x<<"x "<<y<<"y "<<pz<<"z "<<")"<<endl;
        
    }

}

int main(){

      cout<<"______________________________________"<<endl;
      cout<<"|Proyecto final 'Gradiente Vectorial'|"<<endl;
      cout<<"______________________________________"<<endl;
      cout<<"Saca la derivada parcial de la forma 'f(xyz)= Xx Yy^n Zz'\n"<<endl;
      gradiente a;
      a.parcial();
      a.grad();

    return 0;
}
