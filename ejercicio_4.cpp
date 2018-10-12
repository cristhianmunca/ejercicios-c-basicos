#include <iostream>
using namespace std;
int main(){
	int prestamo;
	float descuento1=0.10;
	float descuento2=0.20;
	int total;
	int valor;
	int valor1;
	int valor2;
	int descuento3;
	int descuento4;
	
	cout << " digite el valor de su compra \a" << endl;
	cin >> valor;
	
	if(valor>=100000 and valor<300000){
		descuento3=valor*descuento1;
		valor1=valor-descuento3;
		cout << " el total a pagar es $" << valor1 << endl;
	}
	  else if(valor>=300000){
	  	descuento4=valor*descuento2;
	  	valor2=valor-descuento4;
	  	cout << " el total a pagar es $" << valor2 << endl;
	  }
	  else if(valor<100000){
	  	cout << "no tiene ningun descuento" << endl;
	  }
	system("pause");
	return 0;
}
