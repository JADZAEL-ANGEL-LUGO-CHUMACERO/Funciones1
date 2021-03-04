//biblioteca principal 
#include<iostream>

using namespace std;

int Max(int a, int b);

//funcion principal
int main(){
	int a,b,c;
	cout << "introduzca el valor del primer numero: ";
	cin >> a;
	cout << "introduzca el valor del segundo numero: ";
	cin >> b;
	cout << "introduzca el valor del tercer numero: ";
	cin >> c;
	int max = Max(Max(a,b),c);
	cout << "EL numero mayor es: " << max <<endl;
	
	return 0;
}

int Max(int a,int b){
	int c;
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	
	return c;

}
