#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int datos[15],op,n=-1,i,v,cont,t,band,mod,cont3, cont2,n2=-1,n3,to,to2,nef,nei,cont4,j,k,temp,temp2,Izq,Der,m,to3,aux,aux2,aux3,l,to4,aux4,aux5,h,fin;
	while (1)
	{
	cout<<"\n\t\t\t  **MENU**\n  \t\t\t0.IMPRIMIR\n  \t\t\t1.INSERTAR DATOS ALEATORIOS\n  \t\t\t2.INSERTAR DATOS MANUALMENTE\n";
	cout<<"\t\t\t3.INICIALIZAR N VALOR\n  \t\t\t4.SUMATORIA\n   \t\t\t5.BUSQUEDA\n  \t\t\t6.BUSQUEDA Y MODIFICACON\n   \t\t\t7.INSERTAR AL INICIO\n";
	cout<<"   \t\t\t8.INSERTAR AL FINAL\n   \t\t\t9.ELIMINAR AL FINAL\n   \t\t\t10.ELIMINAR AL INICIO\n   \t\t\t11.ORDENAMIENTO BURBUJA\n   \t\t\t12.ORDENAMIENTO SHAKER SORT\n";
	cout<<"   \t\t\t13.ORDENAMIENTO INSERCION DIRECTA\n   \t\t\t14.ORDENAMIENTO INSERCION BINARIA\n \t\t\t20.SALIR"<<endl;
	cout<<"Selecciona una opcion ";
	cin>>op;
	
	switch(op)
		{
		case 0:
			cout<<"**IMPRIMIR**"<<endl;
			if(n==-1)
				cout<<"\n***Arreglo vacio**\n"<<endl;
			else
			{
				cout<<"||";
				for(i=0;i<n;i++)
				cout<<datos[i]<<"||";
				cout<<"\n";
			}
			system("pause");
			system("cls");
		break;
		
		case 1:
			cout<<"**INSERTAR DATOS ALEATORIAMENTE**"<<endl;
			srand(time(NULL));
			cout<<"Cuantos datos quieres ingresar: "<<endl;
			cin>>n;
			for(i=0;i<n;i++)
				datos[i]=1+rand()%100;
			
			system("pause");
			system("cls");
		break;
		
		case 2:
			cout<<"**INSERTAR DATOS MANUALMENTE**"<<endl;
		
			cout<<"Cuantos datos quieres ingresar: "<<endl;
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"Ingresa el dato ["<<i<<"]: ";
				cin>>datos[i];
			}
			
			system("pause");
			system("cls");
		break;
		
		case 3:
			cout<<"**INICIALIZAR N VALOR**"<<endl;
		
			cout<<"Cuantos datos quieres ingresar: "<<endl;
			cin>>n;
			cout<<"Valor de inicio: ";
			cin>>v;
			for(i=0;i<n;i++)
				datos[i]=v;
			
			system("pause");
			system("cls");
		break;
		
		case 4:
			cont=0;
			cout<<"**SUMATORIA**"<<endl;
			for(i=0;i<n;i++)
			cont+=datos[i];
			
			cout<<"El total es: "<<cont<<endl;
			system("pause");
			system("cls");
		break;
		
		case 5:
		cout<<"**BUSQUEDA**"<<endl;		 
		  if (n==-1)
	      {
	        cout<<"**Arreglo vacio**"<<endl;
		  }
	      else
	      { 
	     	band=0;
	    cout<<"ingresa el valor que quieres buscar:"<<endl;
		 cin>>t;
		 i=0;
		 while(i<n){
		 if(t==datos[i])
		 {
		 	band=1;
		 	break;
		 }
		 i++;
		 }
		if(band==0)
		cout<<"Dato no encontrado. Intenta nuevamente"<<endl;
		else 
		cout<<"Dato encontrado en la posicion ["<<i<<"]"<<endl;
	  	
		}
		system("pause");
		system("cls");
		break;
		
		case 6:
			cout<<"**BUSQUEDA Y MODIFICACION**"<<endl;		 
		  if (n==-1)
	      {
	        cout<<"**Arreglo vacio**"<<endl;
		  }
	      else
	      { 
	     	band=0;
	    cout<<"ingresa el valor que quieres buscar:"<<endl;
		 cin>>t;
		 i=0;
		 while(i<n){
		 if(t==datos[i])
		 {
		 	band=1;
		 	break;
		 }
		 i++;
		 }
		if(band==0)
		cout<<"Dato no encontrado. Intenta nuevamente"<<endl;
		else{ 
		cout<<"Dato encontrado en la posicion ["<<i<<"]"<<endl;
		cout<<"Ingresa el nuevo valor"<<endl;
		cin>>mod;
		datos[i]=mod;
		}
		}
		system("pause");
		system("cls");
		break;
		
		case 7:
		cout<<"**INSERTAR AL INICIO**"<<endl;
		cout<<"Cuantos datos quieres ingresar?: ";
		cin>>n2;
        to=n;
        cont2=(n+n2);
        if(cont2<=15)
        {
        for(i=(cont2-1);i>=(cont2-to);i--)
        {
            datos[i]=datos[i-n2];
        }
      for(i=0;i<n2;i++){
      cout<<"Ingrese el dato: ";
      cin>>datos[i];}
      n=cont2;
          
          
    }
    else
    {
      cout<<"EL ARREGLO SE ENCUENTRA LLENO"<<endl;
    }
		
		system("pause");
		system("cls");
		break;	
		
	case 8:
		cout<<"**INSERTAR AL FINAL**"<<endl;
		cout<<"Cuantos datos quieres ingresar?: ";
		cin>>n3;
       
        cont3=(n+n3);
        if(cont3<=15)
        {
        for(i=n;i<cont3;i++)
		{
			datos[i]=1+rand()%100;
		}
    	  n=cont3;
    	}
		else
		{
		  cout<<"EL ARREGLO SE ENCUENTRA LLENO"<<endl;	
		}	
		
		system("pause");
		system("cls");
		break;	
		
		case 9:
		cout<<"**ELIMINAR AL FINAL**"<<endl;
		if(n==-1)
		{
			cout<<"**Arreglo vacio**"<<endl;
		}
		else
		{
			cout<<"Cuantos datos quieres eliminar? ";
			cin>>nef;
			n=n-nef;
			cout<<"Datos eliminados correctamente"<<endl;
		}
		system("pause");
		system("cls");
		break;
		
		case 10:
		cout<<"**ELIMINAR AL INICIO**"<<endl;
		if(n==-1)
		{
			cout<<"**Arreglo vacio**"<<endl;
		}
		else
		{
		cout<<"Cuantos datos quieres eliminar?: ";
		cin>>nei;
		to2=n;
		cont4=(n+nei);
        for(i=0;i<=(cont4-to2);i++)
	  	{
		datos[i]=datos[i+nei];
		
	   }
	  	n=n-nei;
	   cout<<"se elimino correctamente"<<endl;
		}
		system("pause");
		system("cls");
		break;
		case 11:
			
		cout<<"**ORDENAMIENTO BURBUJA**"<<endl;
		if(n==-1)
		{
			cout<<"\n**Arreglo vacio**"<<endl;
		}
		else{	
				cout<<"||";
				for ( i = 0;i<n; i++)
				cout<<datos[i]<<"||";
				cout<<endl<<endl;
				for ( i = 0;i<n-1; i++){ //pasadas
					cout << " \tPasada " << i+1 << ": "<<endl; 
					
					for ( j=0; j<n-1; j++){ //comparaciones
					if (datos[j] > datos[j+1])
						{ 
						temp = datos[j]; 
						datos[j] = datos[j+1]; 
						datos[j+1] = temp;
						
						 cout<<"(+) ";  // se cumple 
							cout<<"||";
							for( k=0; k<n; k++)
								cout <<datos[k] <<"||" ;cout << "<--- "<<datos[j+1] << ">" << datos[j];
						
						}
					else
						{
						cout<<"(-) "; // no se cumple
						cout<<"||";
						for ( k=0; k<n; k++)
						cout<<datos[k]<<"||";cout << "<--- "<<datos[j] << ">" << datos[j+1];
						
						}
						cout<<endl;
					}
				}
			}
		
		system("pause");
		system("cls");
		break;
		
		case 12:
		cout<<"**ORDENAMIENTO SHAKER SORT**"<<endl;
		cout<<"\n(+)--> SI SE CUMPLE\n(-)--> NO SE CUMPLE"<<endl;
		to3=n-1;  //zq = 1 , der = num-1 , k = num-1 , aux = 0, g=i;
		Izq=1;
        Der=n-1;
        aux=0;
                
		if(n==-1)
		{
			cout<<"\n**Arreglo vacio**"<<endl;
		}
		else
		{
			cout<<endl;
			cout<<"||";
			for ( i = 0;i<n; i++)
			cout<<datos[i]<<"||";
			cout<<endl;
			
				while(Der>=Izq){
			
					cout << "\n \t**Pasada " << aux+1 << "**\n "<<endl; 
					aux+=1;
					cout<<"Derecha a Izquierda\n"<<endl;
					for(j=Der ; j>= Izq ; j--){ 	//comparaciones derecha a izquierda
					
					if (datos[j-1]>datos[j] )
						{ 
						temp2 = datos[j]; 
						datos[j] = datos[j-1]; 
						datos[j-1] = temp2;
						to3=j;
						
						 cout<<"(+) ";  // se cumple 
							cout<<"||";
							for( k=0; k<n; k++)
								cout <<datos[k] <<"||" ;cout << "<--- "<<datos[j-1] << "<" << datos[j];
						
						}
					else
						{
						cout<<"(-) "; // no se cumple
						cout<<"||";
						for ( k=0; k<n; k++)
						cout<<datos[k]<<"||";cout << "<--- "<<datos[j] << "<" << datos[j-1];
						
						}
						cout<<endl;
					} Izq=to3+1; 
				cout<<" \nIzquierda a Derecha\n "<<endl;	
				for(j = Izq ; j <= Der ; j++){ //izquierda a derecha
				
					if (datos[j-1]>datos[j] )
						{ 
						temp2 = datos[j]; 
						datos[j] = datos[j-1]; 
						datos[j-1] = temp2;
						to3=j;
						
						 cout<<"(+) ";  // se cumple 
							cout<<"||";
							for( k=0; k<n; k++)
								cout <<datos[k] <<"||" ;cout << "<--- "<<datos[j] << ">" << datos[j-1];
						
						}
					else
						{
						cout<<"(-) "; // no se cumple
						cout<<"||";
						for ( k=0; k<n; k++)
						cout<<datos[k]<<"||";cout << "<--- "<<datos[j-1] << ">" << datos[j];
						
						}
						cout<<endl;
					} Der=to3-1; 
					
				
			}//Fin del ordenamiento
		}			
		system("pause");
		system("cls");
		break;
			
		case 13:
		cout<<"**ORDENAMIENTO POR INSERCION DIRECTA**"<<endl;
		cout<<"\n(+)--> SI SE CUMPLE\n(-)--> NO SE CUMPLE"<<endl;
           if (n==-1) 
        {
          cout << "**Arreglo Vacio**" << endl;
        }

        cout << "\n||";
        for (k = 0; k < n; k++) 
        cout << datos[k] << "||";
        cout << endl;

        for (i = 0; i <n-1; i++) 
        {
        cout << "\n \t**Pasada " << i+1 << "**\n "<<endl; 

        if(datos[i+1]<datos[i])
        {
          j=i+1;
        while(j>0)
        {
          band=datos[j]<datos[j-1];
          if(band)
          {
            aux2=datos[j-1];
            
            datos[j-1]=datos[j];
            datos[j]=aux2;
            cout<<"\n(+) ";  // se cumple 
					cout<<"||";
					for( k=0; k<n; k++)
					cout <<datos[k] <<"||" ;cout << "<--- "<<datos[j-1] << "<" << datos[j];
          }
          else
          {
            cout<<"\n(-) "; // no se cumple
						cout<<"||";
						for ( k=0; k<n; k++)
						cout<<datos[k]<<"||";cout << "<--- "<<datos[j]<<"<"<<datos[j-1];
          }       
          j--;
        }
      }
        else
        {
          cout<<"(-) "; // no se cumple
	      cout<<"||";
		   for ( k=0; k<n; k++)
				cout<<datos[k]<<"||";cout << "<--- "<<datos[i+1]<<"<"<<datos[i];
        }
        cout<<endl;
        }
        cout << endl;
		system("pause");
		system("cls");
		break;	
		
		case 14:
		cout<<"**ORDENAMIENTO POR INSERCION BINARIA**"<<endl;
		cout<<"\n(+)--> SI SE CUMPLE\n(-)--> NO SE CUMPLE"<<endl;
           if (n==-1) 
        {
          cout << "**Arreglo Vacio**" << endl;
        }
        else
        { 
			cout<<"||";
		   for ( k=0; k<n; k++)
				cout<<datos[k]<<"||";
			cout<<endl;
			fin = n-1;
			for (l=1; l<=fin; l++) 
			{
			cout << "\n \t**Pasada " << l << "**\n "<<endl; 
				aux3= datos[l]; 
				aux4=l-1;
				aux5=0; 
				to4=l; 
				while (aux4>=0) {

					cout << datos[l] << "<" << datos[aux4];
					if (datos[l] < datos[aux4]) 
					{

						cout << "(+)"<<endl;
						to4--;
						aux5++;
					}
					else {
						cout << "(-)"<<endl;
						aux4=0;
					}
					aux4--;
				}
				if (aux5!=0) 
				{
					for (h=l; h>to4; h--)
					datos[h] = datos[h-1];
					datos[to4] = aux3;
				}
				cout << "||";
				for (i = 0; i < n; i++) {
					cout << datos[i] << "||";
				}
				cout << endl;
			}
		}
		cout << endl;
		system("pause");
		system("cls");
		break;		
		case 20:
			exit(0);
		break;
		}
	}
	return 0;
}
