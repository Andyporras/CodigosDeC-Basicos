/* Realice un programa que lea de la entrada est�ndar los siguientes datos
de una persona:

		Edad: dato tipo entero.
		Sexo: dato tipo car�cter.
		Altura en metros: dato tipo real.
		
Tras leer lso datos, el programa debe mostrarlos en la salida est�ndar 
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\n Edad: "<<edad<<"\n";
	cout<<"Sexo: "<<sexo<<"\n";
	cout<<"Altura: "<<altura<<"\n";
	
	
	
	
	
	
	return 0;
}
