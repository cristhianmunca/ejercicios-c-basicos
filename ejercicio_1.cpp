#include <iostream>
using namespace std;
int main(){
	int suma;
	int acomulador=0;
	int indice;
	int vector[]={3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,50,39};
	for(indice=0; indice<27; indice++){
		
		if (vector[indice]%3 ==0){
			acomulador=acomulador + vector[indice];
			
		}
	}
	cout << "la suma es " << acomulador << endl;
	
}
