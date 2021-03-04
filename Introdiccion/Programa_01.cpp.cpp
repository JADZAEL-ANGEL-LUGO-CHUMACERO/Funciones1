//la bibliteca principal 
#include<iostream>

using namespace std;

//Cuerpos del programa 
void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);

//Funcion principal 
int main(){
	int a,b;
    	cout << "Introduzca un numero: ";
    	cin >> a;
	    cout << "Introduzca un numero: ";
    	cin>>b;
    	suma(a,b);
    	resta(a,b);
        multiplicacion(a,b);
        division(a,b);
        return 0;
    
}

void suma(int a, int b){
	int c = a + b;
	cout << "El resultado de " << a << " + " << b << " es: " << c << endl;
}

void resta(int a, int b){
	int c = a - b;
	cout << "El resultado de " << a << " - " << b << " es: " << c << endl;
}

void multiplicacion(int a, int b){
	int c = a * b;
	cout << "El resultado de " << a << " * " << b << " es: " << c << endl;
}

void division(int a, int b){
	float c = (float)a / b;
	cout << "El resultado de " << a << " / " << b << " es: " << c << endl;
}

	


