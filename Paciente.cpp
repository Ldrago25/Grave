#include "Paciente.h"

Paciente::Paciente()
{
	strcpy(n,"Brandon");
	edad=20;
	cedula=26566047;
	r=true;
	
}
	Paciente::Paciente(char n[],int edad,int cedula, bool r,char nombre[],char medica[],int costo,int mg):Ojo(nombre,medica,costo,mg){
		strcpy(this->n,n);
		this->edad=edad;
		this->cedula=cedula;
		this->r=r;
	}
	void Paciente::pedir(){
		cout<<endl<<"...:::Carga de datos:::..."<<endl;
		cout<<endl<<"Nombre: "<<endl;
		cin.sync();
		cin.getline(n,50);
		cout<<endl<<"Edad: "<<endl;
		cin>>edad;
		cout<<endl<<"Cedula: "<<endl;
		cin>>cedula;
		cout<<endl<<"Enfermedad? "<<((r)? "Si":"No")<<endl;
		Ojo::cargar();
	}
	void Paciente::mostrar(){
		cout<<endl<<"-> "<<this->getG()<<endl;
		cout<<endl<<"-> "<<edad<<endl;
		cout<<endl<<"-> "<<cedula<<endl;
		Ojo::imprimir();
	}
	void Paciente::setG(char n[]){
		strcpy(this->n,n);
	}
	char *Paciente::getG(){
		return n;
	}
	

Paciente::~Paciente()
{
}
