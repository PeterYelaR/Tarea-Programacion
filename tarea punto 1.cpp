//1) Escribe un programa que solicite al usuario ingresar las calificaciones de 20 estudiantes 
//en un vector. Usa un bucle para determinar cu�ntos estudiantes obtuvieron una 
//calificaci�n de 0 a 5, de 6 a 8, y de 9 a 10. Al final, muestra el total de estudiantes en 
//cada rango.
#include<iostream>
using namespace std;

int main(){
	float calificacion[20];
	int rango1 = 0, rango2 = 0, rango3 = 0;
	for (int i = 0; i < 20; i++){
		cout << "Ingrese la calificacion del estudiante numero " << i + 1 << ": ";
		cin >> calificacion[i];
		if(calificacion[i] <= 5){
			rango1++;
		} else if(calificacion[i] <= 8){
			rango2++;
		} else   rango3++;
	}
	
	cout << "Estudiantes en el rango de calificaciones de 0 a 5: " << rango1 << endl;
	cout << "Estudiantes en el rango de calificaciones de 6 a 8: " << rango2 << endl;
	cout << "Estudiantes en el rango de calificaciones de 9 a 10: " << rango3 << endl;
	
	system("pause");
	return 0;
}
