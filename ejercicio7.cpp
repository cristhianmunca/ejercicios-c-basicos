#include <iostream>
using namespace std;
int main(){
	
	int indice;
	int vector[]={2,4,5,10,12,20,25,17,80,45,100};
	int modulo;
	
	for(indice=0;indice<12;indice++){
        modulo=vector[indice]%5;
        if(modulo==0){
        	cout << "multiplos de 5" << endl;
        	cout << vector[indice]<<endl;
		}
        
   }
   system ("pause");
   return 0;
}

