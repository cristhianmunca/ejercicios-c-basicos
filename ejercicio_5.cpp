#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout << "digite numero" << endl;    //a=b a=c b=c
	cin >> a;
	cout << "digite el segundo numero" << endl;
	cin >> b;
	cout << "digite el tercer numero" << endl;
	cin >> c;
	
	
	if (a>b and a>c){
		cout << "el numero mayor es" << a << endl;
	}
	    else if (b>a and b>c){
	    	cout << "el numero mayor es" << b << endl;
		}
		else{
			cout << "el numero mayor es"<< c << endl;
		}
		
system ("pause");
return 0;	
}
