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
		suma += numero[i];
	}
	 return division = static_cast <float> (suma) / 10;
}

float CalcularDesviacion(int numero[10], float media){
	float sumadesviacion = 0;
	for(int i = 0; i < 10; i++){
		sumadesviacion += pow(numero[i] - media, 2);
	}
	return sqrt(sumadesviacion / 10);
}

int main(){
	
	int numero[10];
	cout << "Ingrese diez numeros enteros: ";
	for(int i = 0; i < 10; i++){
		cin >> numero[i];
		
	}
	
	float media = CalcularMedia(numero);
	cout << "la media de los valores es: " << media << endl;
	
	float desviacion = CalcularDesviacion(numero, media);
	cout << "la desviacion estandar de los valores es: " << desviacion << endl;
	
	system("pause");
	return 0;
}

