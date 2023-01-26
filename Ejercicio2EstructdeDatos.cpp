#include <iostream>
#include <conio.h>
using namespace std;

class Materia{
	private:
		int clave;
		char Nombre[20];
		char Profesortit[20];
		char Librotexto[20];
	protected:
	public:
		void imprime(){
			cout<<"El nuevo nombre es: "<<Materia.Nombre;
			cout<<"Clave: "<<Materia.clave;
			cout<<"Profesor: "<<Materia.Profesortit;
			cout<<"Materia: "<<Materia.Librotexto;
			cout<<"Que tenga buen dia.";
			}
		void cambiarclave(int clave){
			cout<<"Escriba la nueva clave: ";
			cin>>Materia.clave;
		}
		void cambiaProfe(char Profesortit[]){
			cout<<"Escriba su profesor: ";
			cin>>Materia.Profesortit;
		}
	
};
int main(){
	Materia Programacion;
	Programacion.cambiarclave();
	Programacion.cambiaProfe();
	Programacion.imprime();
}
