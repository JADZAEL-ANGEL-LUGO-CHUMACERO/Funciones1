//biblioteca principal
#include<iostream>

using namespace std;

//cuerpos del programa
int factorial(int a);

//funcion principal
int main(){
	int a;
	cout << "Introduzca el valor del numero: ";
	cin >> a;
	int fact = factorial(a);
	cout << " EL " << a << "! es: " << fact<< endl;
	
	return 0;
}

int factorial(int a){
	int i;
	int resultado = 1;
	for(i=1;i<=a;i++){
	resultado *= i;
	}
	return resultado;	
	
}


