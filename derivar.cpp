#include<iostream> 
using namespace std;

class deriva{
    private: // atributos
    int base;
    int exponente;

    public: 
    deriva (int);

    void Prim_derivada();
    void Seg_derivada();
};

deriva :: deriva (int _base, int _exponente){
   base = _base;
   exponente=_exponente;

}

void deriva :: Prim_derivada (){
    cout <<"Aqui debemos derivar"endl;
}

void deriva :: Seg_derivada (){
    cout <<"Aqui debemos derivar por seguda vez"endl;
}

int main (){

    system("pause");
}
