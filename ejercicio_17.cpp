#include <iostream>
using namespace std;

int main(){
	int indice;
	int vector[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
	int modulo;
	int suma1=0;
	int suma2=0;
	
	for (indice=0; indice<21; indice++){
		modulo=vector[indice]%2;
		if (modulo==0){
			suma1=suma1+vector[indice];
		
		}else{
			suma2=suma2+vector[indice];			
		}
					
	}
	        cout <<" la suma de los numeros pares es"<< " / "<< suma1 << endl;
			cout <<" la suma de los numeros impares es"<< " / "<< suma2 << endl;
	
}
