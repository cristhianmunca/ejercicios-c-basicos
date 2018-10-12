#include <iostream>
using namespace std;
int main (){
	
	int vector1[]={1,8,7,6,5,9,4,3,2};
	int mayor=0;
	int posicion=0;
	int indice;
	
	for (indice=0; indice<10; indice++){
		if(vector1[indice]>mayor){
			mayor=vector1[indice];
			posicion=indice;
		}
		
	}
	cout << "el numero mayor es"" " << mayor <<" " "y su posicion es"" " << posicion <<endl;
		
	system ("pause");
	return 0;
}
