#include <iostream>
using namespace std;
int main(){
	int indice;
	int modulo;
	int vector[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int vectora[19];
	
	for (indice=0; indice<19; indice++){
		if(vector[indice] % 3 ==0){
			vectora[19]=vector[indice];
			cout << vectora[19] << endl;
		}
	}
	system("pause");
	return 0;
}
