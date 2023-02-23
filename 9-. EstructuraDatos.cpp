#include<iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void imprimir(int[]);
int iniManual(int[], int);
int iniAleatoria(int[],int);
void iniconN(int[],int,int);  //mias cambiadas*
void inidelaN(int[],int);  //mias cambiadas*
int  sumatoria(int[],int); // sumatoria
int maxi(int[],int);
int min(int[],int);
float promedio(float , float); //prueba *
float mayorespromedio(int[],int);
int buscar(int[],int,int);
int buscarMod(int[],int,int);
int insertarPosCero(int[],int);
int insertarUltPos(int[],int);
int insertarBlo(int[],int,int);
int insertarBloFin(int[],int,int);
int insertarEnMedio(int[],int,int,int,int);
int eliminarUltPos(int[],int);
int eliminarPriPos(int[], int );


int main (){
	
int arreglo[20]={0},opc,n=0,v,up=-1,s;//,valor;  /,m;*/
float aux,p;

while(1){

cout<<"Operaciones con arreglos\n";
cout<<" 0.Imprimir \n";
cout<<" 1.Inicializacion manual \n";
cout<<" 2.inicializacion aleatoria \n";
cout<<" 3.Inicializacion con N \n";
cout<<" 4.Iniciaizacion de 1 a N \n";
cout<<" 5.Sumatoria \n";
cout<<" 6.Valor Maximo:\n";
cout<<" 7.Valor minimo:\n";
cout<<" 8.Promedio:\n";
cout<<" 9.Mayor del promedio\n";
cout<<"10.Buscar\n";
cout<<"11.Buscar y modificar\n";
cout<<"12.Insertar en posicion 0 \n ";
cout<<"13.Insertar en ultima posicion \n";
cout<<"14.Insertar un bloque al inicio\n";
cout<<"15.Insertar un bloque final\n";
cout<<"16.Insertar un bloque en medio\n";
cout<<"17.Eliminar ultima posicion\n";
cout<<"18.Eliminar primera posicion\n";
cout<<"---Selecciona una opcion:\n " ;
cin>>opc;

switch(opc){  

	case 0:
	imprimir(arreglo);
	break;
	case 1:
		
		cout<<"cuantos datos quieres ingresar:\n";
		cin>>n;
		up=iniManual(arreglo,n);//iniManual(arreglo,n);
		break;
	case 2:
		
	    cout<<"cuantos datos quieres ingresar:\n";	
	    cin>>n;
		up=iniAleatoria(arreglo,n);
		break;
    case 3:
    	int valor;
		cout<<"Que valor deseas ingresar:\n";	
	    cin>>valor;
	    cout<<"Cuantas veces deseas imprimir el valor mostrado: \n";
        cin>>n;
	    iniconN(arreglo,n,valor);
	    break;
	case 4:
		
		cout<<"Cuantos datos quieres ver:\n";	
	    cin>>n;
	    inidelaN(arreglo,n);
	    break;
	case 5:
		int s;
	    s=sumatoria(arreglo,n);
	    cout<<"La sumatoria es:\n "<<s<<"\n";   //No es sumatoria es s
	    break;
	case 6:
		int m;
		m=maxi(arreglo,n);
		cout<<"El valor maximo es: \n"<<m<<"\n";
		break;
	
	case 7:
	    m=min(arreglo,n);
	    cout<<"El valor minimo es: \n"<<m<<"\n";
	    break;
			
	case 8:
		s=sumatoria(arreglo,n);
		float aux;
		aux=promedio(s,n);
		cout<<"El promedio es: \n"<<aux<<"\n";
		break;
		
	case 9:
	    aux=promedio(s,n);
	    float p;
		p=mayorespromedio(arreglo,n); //prueba con if, else
		cout<<"El mayor al promedio es: \n"<<p<<"\n";
		break; 	
	
	case 10:
	int val,q;
	cout<<"Que dato deseas buscar? "<<"\n";
	cin>>val;
	q=buscar(arreglo,n,val);
	break;	
	    
	case 11:
		
		cout<<"Dato a buscar:\n" ;
		cin>>val;
		q=buscarMod(arreglo,n,val);
		break;
		
	 
	case 12:
		up=insertarPosCero(arreglo,up);
		break;
		
		
	case 13:
	    up=insertarUltPos(arreglo,up);
		break;	
		
	case 14:
        cout<<"Ingresa el tamaño del bloque: ";
		cin>>n;
		up=insertarBlo(arreglo,up,n);
    break;
    
    case 15:
		cout<<"Ingresa el tamaño del bloque: ";
		cin>>n;
		up=insertarBloFin(arreglo,up,n);
        break;
		
	case 16:
		int d1,d2,pd1,pd2,b;
	    cout<<"primer dato:";
		cin>>d1;
		cout<<"segundo dato:";
		cin>>d2;
		pd1=buscar(arreglo,n,d1);
		pd2=buscar(arreglo,n,d2);
		
		
		if(pd1==pd2+1 || pd2==pd1+1){
			cout<<"tamaño de bloque:";
			cin>>b;
			up=insertarEnMedio(arreglo,pd1,pd2,up,b);
		}	
		
		break;
		
	case 17:
	cout<<"Se elimina ultima posicion\n";
	up=eliminarUltPos(arreglo, up);
	break;	
	
	
	case 18:
   //eliminat primera posicion
	
	up=eliminarPriPos(arreglo,up); //int a[20], int up);
	break;
		
			 
}

}
system("cls");
}


void imprimir (int a[20])
{
	int i;
	cout<<"Contenido del arreglo \n";
	cout<<"Subindice valor \n";
	for(i=0;i<=19;i++){  //imprime el numeor de arreglos
	
	cout<<"posicion"<<i<<"\t\t"<<a[i]<<"\n";
}
}



int iniManual(int a[20],int n)
{
int i,up;
for (i=0;i<n;i++){
	cout<<"ingresa a["<<i<<"]:";
	cin>>a[i];
}
up=n-1;
return up;		
}

int iniAleatoria(int a[20], int n){
	int i,up;
	//srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=1+rand()%100;
}
 up=n-1;
 return up;
}



void iniconN(int a[20],int n,int valor){
	

	
	int i;
	for(i=0;i<n;i++){
	
	a[i]=valor;
}
}

void inidelaN(int a[20],int n){
	int i;
	for(i=0;i<n;i++){
		a[i]=i+1;
		
}	
}

int sumatoria(int a[20],int n){
    
	int sum=0,i;	
	
	for(i=0;i<n;i++){
		sum+=a[i];
		
	}
	return sum;
}


int maxi(int a[20],int n){
	int maximo,i;
	maximo=a[0];
	for(i=0;i<n;i++){
		
		if(a[i]>maximo)
		maximo=a[i];
		
	}
	
	return maximo;
}


int min(int a[20],int n){
   int minimo,i;
   minimo=a[0];
   for(i=0;i<n;i++){
   	    
   	    if(a[i]<minimo)
   	    minimo=a[i];	
   }
    
    return minimo;
}


float promedio(float s,float n){
	float aux;
	aux=s/n;	
	return aux;	
}

 float mayorespromedio(int a[20],int n){ 
	int i,mayor;
	mayor=a[0];
	
	for(i=0;i<n;i++){	
		if(a[i]>mayor)
		mayor=a[i];
		
		
	}
	return mayor;
}


int buscar(int a[20],int n,int val){
	int i,auxiliante=0,pos=-1;
	for(i=0;i<n;i++){
		if(val==a[i]){
		
		auxiliante=1;
		pos=i;
		break;
	}
		
	}	

    
    if(auxiliante==1) //prueba para mejorrarlo
          cout<<"Dato encontrado \n";
            else
              cout<<"Dato no encontrado\n";
                return pos;
                

}

int buscarMod(int a[20],int n,int val){
	
	int q=-1;
	
	q=buscar(a,n,val);
	
	if(q!=-1){
		cout<<"ingresa el nuevo valor:\n";
		cin>>a[q];
	}
   return 0; 	
}


int insertarPosCero(int a[20],int up){
	int i;
	if(up==-1) {
		up=0;
		cout<<"Ingresar a[0]:";
		cin>>a[0];	
	}
	
	else{
		up++;
		if(up<=19){
			
			for(i=up;i>0;i--)
			a[i]=a[i-1];
			cout<<"Ingresa a[0]:";
			cin>>a[0];
			
		}
		
		else
		cout<<"El arreglo esta lleno:\n";
	}
	
	return up;
}



int insertarUltPos(int a[20],int up){
	if(up==-1){
		up=0;
		cout<<"Ingresa a[0]:";
		cin>>a[0];	
	}
	
	else{
		up++;
		if(up<=19){
			cout<<"ingresa el dato arreglo["<<up<<"]:";
			cin>>a[up];
		}
		
	
	else
	cout<<"El arreglo esta lleno:\n";
	}	
	return up;	
	}
	

int insertarBlo(int a[20],int up,int n){
	int temp,mov,i;
	if(up==-1){
		up=iniAleatoria(a,n);
		}else{
			temp=up+n;
			if(temp<=19){
				for(mov=1;mov<=n;mov++){
					up++;
					for(i=up;i>=mov;i--)
					a[i]=a[i-1];
					
					}
					for(i=0;i<n;i++)
					a[i]=1+rand()%100;
				}else
				cout<<"El arreglo esta lleno\n";
			}
			return temp;
}

int insertarBloFin(int a[20],int up,int n){
	int temp,mov,i;
	if(up==-1){
		up=iniAleatoria(a,n);
		}else{
			temp=up+n;
			if(temp<=19){
				for(i=1;i<=n;i++){
					up++;
					a[up]=1+rand()%100;
						}
					}else
					cout<<"El arreglo esta lleno\n";
				}
				return up;
			}	
	
	
int insertarEnMedio(int a[20],int pd1,int pd2,int up,int b)
{
	int i,temp,j,k;
	
	temp=up+b;
	   
	   if(temp>20)
	   
	   	cout<<"El bloque no se puede insertar\n";
	   
	   
	   else
	   { 
	     
	     for(i=1;i<=b;i++){
		 
	     	 
	     	 up++;
	     	    
	     	    for(j=up;j>pd2;j--)
				 a[j]=a[j-1];
				 
	    } 	    	  
	     	    	    
		
	     	    	     for(k=pd2;k<pd2+b;k++)
						  
	     	    	     	a[k]=1+rand()%100;//k en vez de i
							  
							  }
						  
	  return up;
	     	    	  		 
}
		 
	   
	
	
	



int eliminarUltPos(int a[20],int up){
	
	a[up]=0;
	up--;
	return up;	
	
}	


int eliminarPriPos(int a[20], int up)
{
	int i;
	for(i=0;i<up;i++)
	a[i]=a[i+1];
	a[up]=0;
	return up-1;
}
