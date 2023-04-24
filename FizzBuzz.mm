#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void funtionFizzBuzz(){
	//funcion FizzBuzz verifica si el numero comprendido es funcional FizzBuzz
		if (i%3==0 && i%5==0)
		{
			cout<<"Fizz Buzz";
		}
}
void funtionBuzz(){

	//funcion Buzz verifica si el numero comprendido es funcional en buzz
	 if(i%5==0)
		{
			cout<<"Buzz";
		}

}
void funtionFizz(){
//funcion fizz verifica si el numero comprendido es funcional en fizz

		if (i%3==0)
		{
			cout<<"Fizz";
		}
}

void funtionNumber(){

	cout<<i;
}
void messagePlace(){

	//Desde esta funcion se llaman todas las demas funciones
	//Dejando un codigo mas limpio en main y no ensuciar el main llamando todas las demas funciones.
funtionFizzBuzz();
funtionFizz();
funtionBuzz();
funtionNumber();
}
int main(){

//Creacion de un for para que pueda dar todos los numeros necesarios que se piden.
	int i, count;
	count==100;
	for (int i = 0; i < 100; ++i)
	{
		//Se llama solamente una funcion para poder dar el mensaje
		messagePlace();
	}
	

}