	#include <stdlib.h>
	#include <time.h>

	#include <iostream>

	using namespace std;
	void playGame(int n);
	void winnerPlayerOrCpu(int n, int v);
	int main(){

	int dadoCPU, dadoPerson, value, play, i, winnerCpu, winnerPerson;
	//se llama el radomize para empezar a trabajar con numeros random	
	srand(time(NULL)); 
	cout<< "Ingrese la cantidad de jugadas \n ";
	cin>>play;
	for(i=1;i<=play;i++){
		playGame(int play);
	}


	}
	void playGame(int n){
		value=1+rand()%6;
		dadoCPU=1+rand()%6;
		cout<<"Ingrese el valor adivinar del dado \n";
		cin>>dadoPerson;
		while(dadoPerson>6 || dadoPerson<1){

			//Se toma desde esta funcion que el numero no seas mayor a 6 y menos a 0
			cout<<"Los numeros deben ser menores a 6 y mayores a 0: ";
			cin>>dadoPerson;
		}
		// Aqui verifica el resultado

		cout<<"El numero elegido por la maquina es el: " <<dadoCPU<<"\n";
		cout<<"El numero elegido por el jugador es el: "<< dadoPerson<<"\n";
		cout<<"El valor elegido es el: "<<value<<" ";
		
		if(value==dadoCPU && value==dadoPerson){
			cout<<"Es un empate\n";
		}
		if(value==dadoCPU && value!=dadoPerson){
			cout<<"Gana la CPU\n";
			winnerCpu == winnerCpu+1;
		}
		if(value==dadoPerson && value!=dadoCPU){
			cout<<"Gana el jugador\n";
			winnerPerson==winnerPerson +1;
		}
			if(value!=dadoPerson && value!=dadoCPU){
			cout<<"No hay ganador\n";
		}
		winnerPlayerOrCpu(winnerCpu, winnerPerson);

}
	void winnerPlayerOrCpu(int n, int v){

		//luego de la verificacion de datos nos dara un ganador segun los resultados dados
	if(n>v){
		cout<<"El ganador es el CPU";
	}else{
		cout<<"El ganador es el jugador";
	}
}
