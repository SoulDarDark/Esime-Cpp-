//Crear un programa en c++ que sirva para derivar parcialmetne una función exponencial básica de datos almacenados en el programa, no olvide utilizar objetos.
// f(xy)= xy
#include<iostream> 
using namespace std;

class deriva{
    private: // atributos
    int base;
    int exponente;

    public: //metodos
    //metodo constructor
    deriva (int, int);

    void Prim_derivada();
};

deriva :: deriva (int _base, int _exponente){
   base = _base;
   exponente=_exponente;
}

void deriva :: Prim_derivada (){
    int _deriva, _expderivado;
    

    _deriva = base*exponente;
    _expderivado = exponente - 1;
    cout <<_deriva<<"x ^"<<_expderivado<<endl;
}

//instanciacion de clases, crear objetos
int main (){
    // Valores dados en el programa;
    deriva r1(2,3);


    cout <<"Ingrese la base de la funcion a deirvar"<<endl;
    cin >> r1.base>>endl;

    cout <<"Ingrese el exponente de la funcion a deirvar"<<endl;
    cin >> r1.exponente>>endl;

    r1.Prim_derivada();
    system("pause");
}
