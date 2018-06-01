#ifndef OJO_H
#define OJO_H
#include <iostream>
#include <string.h>
using namespace std;
class Ojo
{
	char nombre[50];
	char medica[50];
	public:
		int costo;
		int mg;
		Ojo(char nombre[],char medica[],int costo,int mg);
		Ojo();
		~Ojo();
		void cargar();
		void imprimir();
		void setN(char nombre[]);
		void setM(char medica[]);
		char *getN();
		char *getM();
	protected:
};

#endif

