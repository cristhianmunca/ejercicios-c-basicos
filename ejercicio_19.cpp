#include <iostream>
using namespace std;
int main (){
	
	int arreglo[]={4,3,5,1,6,9,8,7,2};
	int indice=0;
	int temporal;
	int indi=0;
	
	for (indi=0; indi<9; indi++){

	    for (indice=0; indice<9; indice++){
		    if (arreglo[indice]>arreglo[indice+1]){
		        temporal=arreglo[indice];	
		        arreglo[indice]=arreglo[indice+1];	
		        arreglo[indice+1]=temporal;
			
		}
	}
	
	} 
	for (indice=0; indice<9; indice++){
		cout << arreglo[indice] << "  ";
	    }
		
	system ("pause");
	return 0;
}
