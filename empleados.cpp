#include <iostream>
#include <string.h>

using namespace std;

class empleados {

public:

	char nombre[64];
	long id_empleado;
	float salario;

	void ver_empleado();
		
	};

	void empleados::ver_empleado() {
		cout << "nombre: " << nombre;
		cout << "id: " << id_empleado;
		cout << "salario: " << salario;
	};

	int main() {
		empleados trabajador, jefe;
		strcpy(trabajador.nombre, "Pita P�rez");
		trabajador.id_empleado = 12345;
		trabajador.salario = 25000;
		strcpy(jefe.nombre, "Jamsa Feliz");
		jefe.id_empleado = 101;
		jefe.salario = 101101.00;
		trabajador.ver_empleado();
		jefe.ver_empleado();
	}
