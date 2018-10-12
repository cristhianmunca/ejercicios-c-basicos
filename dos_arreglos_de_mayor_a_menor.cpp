#include <iostream>
using namespace std;
int main (){
	
	int uno[]={8,10,5,3,2};
	int dos[5];
	int indice;
	int columna=0;
	
	for (indice=4; indice>=0; indice--){
		dos[columna]=uno[indice];
		columna++;
		
	}
	for (indice=0; indice<5; indice++){
		cout << dos[indice]<<"  ";
		
	}
	
	system("pause");
	return 0;
	
}
