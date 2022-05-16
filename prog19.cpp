/*Autor Oscar Eduardo FLetes Ixta, realizado: 28/02/2022
	Hacer un programa que tenga una funcion que imprima un mensaje de saludo
	encerrado en un marco de asteriscos para ejemplificar el usos de funciones void
	Programa en lenguaje c que muestra el uso del ciclo for, funciones y prototipos de funciones

	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int
		-Operaciones aritmeticas 		
		-Uso del ciclo for
		-Funciones
		-Prototipos de funciones
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras, como declararlas, usar el ciclo for, 
	usar funciones y prototipos de finciones, llmar a las funciones, 
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa tiene una funcion que imprima un mensaje de saludo encerrado en un 
	marco de asteriscos para ejemplificar el usos de funciones void
*/

#include<stdio.h>//Cuerpo para lenguaje c
//Prototipos de funciones
void saludar();
//Ptograma principal
int main(){
	//Variables
	//llamar la funcion void
	//Entrada
	printf("Inicio el main...\n");//imrpime mensaje
	saludar();//llama a la funcion
	printf("Termino el main.\n"); //imrpime mensaje
	//Proceso
	//ciclo for
	for(int i=0;i<10;i++){//hacer que la funcion se imprima 10 vaces
		saludar();//funcion
	}
	return 0;
}

//funcion que imprime un saludo en un marco de asteriscos 
//void se usa cuando no queramos que regrese un valor
void saludar(){
	//Salida
	printf("*******************************\n");//imrpime mensaje
	printf("*   H O L A   M U N D O !!!   *\n");//imrpime mensaje
	printf("*******************************\n");//imrpime mensaje
}
