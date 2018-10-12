#include <iostream>
using namespace std;
int main (){
	
	int arreglo1[]={4,6,8,2,6,9,6,1};
	int indice;
	int columna=0;
	int arreglo2[3];
	
	for (indice=0; indice<8; indice++){
		if (arreglo1[indice]==6){
			arreglo2[columna]=indice;
			columna++;
		}
		
	}
	for (indice=0; indice<3; indice++){
		cout << arreglo2[indice]<<"  ";
	}
	
	system ("pause");
	return 0;
}
