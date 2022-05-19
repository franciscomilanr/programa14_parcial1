/*
Autor: Franciscomilan
Realizado: 21/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 14 en C que pide cualquier cantidad de numeros, los suma,  el programa 
terminara de leer numeros cuando se introduzca un cero usando el ciclo do-while para la materia
programacion estrcuturada  
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Variables
	float numero=1, suma=0;
	int i=1;
	//Ciclo whie
	while(numero!=0) {
		printf("Introduce el valor numero %d: ",i);
		scanf("%f",&numero);
		suma=suma+numero;
		//Contador
		i++;
	} while(numero!=0);
	//Salida
	printf("La suma es %.2f", suma);
	return 0;
}

