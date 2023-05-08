#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void messagePlace(int n);
void funtionFizzBuzz(int n);
void funtionNumber(int n);
int main(){

//Creacion de un for para que pueda dar todos los numeros necesarios que se piden.
	int i, count;
	count==100;
	for (int i = 0; i < 100; ++i)
	{
		//Se llama solamente una funcion para poder dar el mensaje
		messagePlace(i);
	}
	

}

void messagePlace(int n){

	//Desde esta funcion se llaman todas las demas funciones
	//Dejando un codigo mas limpio en main y no ensuciar el main llamando todas las demas funciones.
funtionFizzBuzz(n);
funtionNumber(n);
}

void funtionFizzBuzz(int n){
	//funcion FizzBuzz verifica si el numero comprendido es funcional FizzBuzz
	int i;
		if (i%3==0 && i%5==0)
		{
		    std::cout << "FizzBuzz" << std::endl;
		}

	//funcion Buzz verifica si el numero comprendido es funcional en buzz
	 if(i%5==0)
		{
		  std::cout << "Buzz" << std::endl;
		}
//funcion fizz verifica si el numero comprendido es funcional en fizz

		if (i%3==0)
		{
			std::cout << "Fizz" << std::endl;
		}
}

void funtionNumber(int n){

	cout<<n<<std::endl;
}