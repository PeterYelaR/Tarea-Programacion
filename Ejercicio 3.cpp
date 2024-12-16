//3) Crea un programa que solicite al usuario ingresar 10 números enteros en un vector. 
//Calcula la media de los valores y luego, usando un bucle, calcula la desviación 
//estándar de los valores. Muestra la media y la desviación estándar.
#include <iostream>
#include <cmath>
using namespace std;

float CalcularMedia(int numero[10]){
	int suma = 0;
	float division = 0;
	for(int i = 0; i < 10; i++){
		suma += numero[i]; // Suma los valores del vector
	}
	 return division = static_cast <float> (suma) / 10; // Calcula la media dividiendo la suma por 10
}

float CalcularDesviacion(int numero[10], float media){
	float sumadesviacion = 0;
	for(int i = 0; i < 10; i++){
		sumadesviacion += pow(numero[i] - media, 2);  // Calcula la suma de las desviaciones cuadráticas
	}
	return sqrt(sumadesviacion / 10); // Calcula la raíz cuadrada del promedio de las desviaciones
}

int main(){
	
	int numero[10];
	cout << "Ingrese diez numeros enteros: ";
	for(int i = 0; i < 10; i++){
		cin >> numero[i];
		
	}
	
	float media = CalcularMedia(numero); // Llama a la funcion para calcular la media de los valores
	cout << "la media de los valores es: " << media << endl;
	
	float desviacion = CalcularDesviacion(numero, media); // Llama a la funcion para calcular la desviación estándar de los valores
	cout << "la desviacion estandar de los valores es: " << desviacion << endl;
	
	system("pause");
	return 0;
}

