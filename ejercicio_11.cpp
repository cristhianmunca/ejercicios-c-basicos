#include <iostream>
using namespace std;
int main(){
	int indice;
	int vector[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int vectora[10];
	int modulo;
	int indice1=0;
	
	for(indice=0; indice<19; indice++){
		if(vector[indice] % 2==0){
			vectora[indice1]=indice;
			indice1++;
		}    
	}
		for(indice=0; indice<10; indice++){
			cout << vectora[indice] << endl;
	}
	system("pause");
	return 0;
}
