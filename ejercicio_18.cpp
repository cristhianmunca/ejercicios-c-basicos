#include <iostream>
using namespace std;

int main(){
	int indice;
	int suma=0;
	int vector[]={1,2,3,4,5,6,7,8,9,10};
	
	for(indice=0; indice<10; indice++){
		suma=suma+vector[indice];
	}
	cout <<"la suma es"<<" / " << suma << endl;
	
	system ("pause");
	return 0;
}
