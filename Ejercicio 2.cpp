//2) Escribe un programa que solicite al usuario ingresar 10 números enteros entre 1 y 5 y los 
//almacene en un vector. Usa un bucle para contar cuántas veces aparece cada 
//número en el vector (del 1 al 5) y muestra el resultado.
#include <iostream>
using namespace std;
int main (){
	
	int numero[10];
	int contador [5] = {0, 0, 0, 0, 0};
	for(int i = 0; i < 10; i++){
		do{
			cout << "Ingrese un numero entre 1 y 5: " ;
			cin >> numero[i];
			if(numero[i] < 1 || numero[i] > 5){
				cout << "Por favor ingrese un numero valido entre 1 y 5" << endl;
			}
		} while (numero[i] < 1 || numero[i] > 5);
		
		contador[numero[i]-1]++;  // Incrementa el contador del número ingresado
	}
	
	cout << "\nFrecuencia de los numeros ingresados:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": " << contador[i] << " veces" << endl; // Muestra la frecuencia de cada número
    }
	
	system("pause");
	return 0;
}
