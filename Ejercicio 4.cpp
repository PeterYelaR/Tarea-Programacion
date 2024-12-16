//4) Escribe un programa que solicite al usuario ingresar 10 números enteros y los almacene 
//en un vector. Usa un bucle for y una estructura de decisión para revisar cada número 
//y, si es negativo, reemplazarlo con un 0. Al final, muestra el vector modificado.
#include <iostream>
using namespace std;

void calcularNegativo(int numero[10]){
	for(int i = 0; i < 10; i++){
		if(numero[i] < 0){  // Verifica si el número es negativo
			numero[i] = 0;   // Reemplaza el número negativo por 0
		}
	}
	cout << "Array actualizado: ";
	for(int i = 0; i < 10; i++){
		
		cout  <<numero[i] << " " ; // Muestra el array modificado
	}
}

int main(){
	int numero[10];
	cout << "Ingrese diez numeros enteros: ";
	for(int i = 0; i < 10; i++){
		cin >> numero[i];
		
	}
	
	calcularNegativo(numero); // Llama a la función para procesar los números
	
	system("pause");
	return 0;
}

