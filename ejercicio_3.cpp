#include <iostream>
using namespace std;

int main(){
    int nota;
    cout << " digite la nota entre 1 y 20"  << endl;
         cin >> nota;
         if (nota >=19 and nota <=20){
         	cout << "la nota es " << "a" << endl;
		 }
		 else if(nota >=16 and nota <=18){
		 	cout << "la nota es " << "b" <<endl;
		 }
		 else if(nota >=13 and nota <=15){
		 	cout << "la nota es " << "c" << endl;
		 }
		 else if(nota >=10 and nota <=12){
		 	cout << "la nota es"<< "d" << endl;
		 }
		 else if(nota >=0 and nota <=9){
		 	cout << "la nota es" << "e" << endl;
		 }
		 else if(nota>20){
		 	cout << "su nota no es valida" << endl;
		 }
         
         
                                 
    
                                       
    system("PAUSE");
    return 0;
}
