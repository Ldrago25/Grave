#include "Ojo.h"

Ojo::Ojo()
{
	strcpy(nombre,"Herpes");
	strcpy(medica,"Aciclovir");
	costo=8000;
	mg=800;
}
	Ojo::Ojo(char nombre[],char medica[],int costo,int mg){
		
		strcpy(this->nombre,nombre);
		strcpy(this->medica,medica);
		this->costo=costo;
		this->mg=mg;
		
	}
	
	 void Ojo::cargar(){
	 	
	 	cout<<endl<<"Nombre de la enfermedad"<<endl;
	 	cin.sync();
	 	cin.getline(nombre,50);
	 	cout<<endl<<"Nombre del medicamento: "<<endl;
	 	cin.sync();
	 	cin.getline(medica,50);
	 	cout<<endl<<"Costo: "<<endl;
	 	cin>>costo;
	 	cout<<endl<<"Mg "<<endl;
	 	cin>>mg;
	 	
	 }
	 
	 void Ojo::imprimir(){
	 	cout<<endl<<"-> "<<this->getN()<<endl;
	 	cout<<endl<<"-> "<<this->getM()<<endl;
	 	cout<<endl<<"-> "<<costo<<endl;
	 	cout<<endl<<"-> "<<mg<<endl;
	 	
	 }
	 
	 void Ojo::setN(char nombre[]){
	 	strcpy(this->nombre,nombre);
	 }
	 
	 char *Ojo::getN(){
	 	return nombre;
	 }
	
	void Ojo::setM(char medica[]){
		strcpy(this->medica,medica);
	}
	
	char *Ojo::getM(){
		return medica;
	}
Ojo::~Ojo()
{
}
