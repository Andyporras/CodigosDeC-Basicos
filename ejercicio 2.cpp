//ejercicio 2 

#include<iostream>

using namespace std;

int main(){
	double precio,iva,result=0;
	
	cout<<"Digite el precio del producto: "; cin>>precio;
	
	iva = precio*0.10;
	result=precio+iva;
	
	cout<<"\n El precio a pagar es: "<<result<<"\n";
	
	return 0;
}
