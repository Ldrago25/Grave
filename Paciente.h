#ifndef PACIENTE_H
#define PACIENTE_H

#include "Ojo.h"

class Paciente : public Ojo
{
	char n[50];
	public:
		int edad;
		int cedula;
		bool r;
		Paciente(char n[],int edad, int cedula, bool r,char nombre[],char medica[],int costo,int mg);
		Paciente();
		~Paciente();
		void pedir();
		void mostrar();
		void setG(char n[]);
		char *getG();
	protected:
};

#endif
