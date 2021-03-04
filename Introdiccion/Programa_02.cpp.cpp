//biblioteca principal
#include<iostream>

using namespace std;

void Max(int a, int b);

//funcion principal
int main(){
	int a,b;
       cout << "Introduzca el primer numero: ";
	   cin >> a;
	   cout << "Introduzca el segundo numero: ";
	   cin >> b;
	   Max(a,b);
	   return 0;
}

void Max(int a, int b){
	if(a > b){
		cout << a << " es mayor " << endl;
	}
	else if(b > a){
		cout << b << " es mayor " << endl;
	}
	else{
		cout << "Error" << endl;
	}
}

