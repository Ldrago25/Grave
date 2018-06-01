#include <iostream>
#include "Ojo.h"
#include "Paciente.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Paciente **o=new Paciente *[1];
	
	for(int i=0; i<1; i++){
		
		o[i]=new Paciente();
		o[i]->pedir();
		o[i]->mostrar();
	}
	
	
	return 0;
}
