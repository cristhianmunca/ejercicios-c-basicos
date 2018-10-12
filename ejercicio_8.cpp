#include <iostream>
using namespace std;
int main (){
	
	int arreglo1[]={1,2,3,4,5,6,7,8,9};
	int indice;

	for(indice=0; indice<8; indice++){
		if (indice==3){
			indice++;
		}
		cout << arreglo1[indice]<< "  ";
	}
	
	
	system ("pause");
	return 0;
}
