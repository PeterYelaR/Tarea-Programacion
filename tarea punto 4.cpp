//4) Escribe un programa que solicite al usuario ingresar 10 n�meros enteros y los almacene 
//en un vector. Usa un bucle for y una estructura de decisi�n para revisar cada n�mero 
//y, si es negativo, reemplazarlo con un 0. Al final, muestra el vector modificado.
#include <iostream>
using namespace std;

void calcularNegativo(int numero[10]){
	for(int i = 0; i < 10; i++){
		if(numero[i] < 0){
			numero[i] = 0;
		}
	}
	cout << "Array actualizado: ";
	for(int i = 0; i < 10; i++){
		
		cout  <<numero[i] << " " ;
	}
}

int main(){
	int numero[10];
	cout << "Ingrese diez numeros enteros: ";
	for(int i = 0; i < 10; i++){
		cin >> numero[i];
		
	}
	
	calcularNegativo(numero);
	
	system("pause");
	return 0;
}

