#include <iostream>
using namespace std;
int main(){
	int indice;
	int vector[]={1,2,3,4,5,6,7,8,9};
	int vectora[9];
	int indice1=0;
	
	for(indice=8; indice>=0; indice--){
		vectora[indice1]=vector[indice];
		indice1++;
	}
	for(indice1=0; indice1<=8; indice1++){
		cout << vectora[indice1] <<" \a ";
	}
	
	
system("pause");
return 0;	
	
}
