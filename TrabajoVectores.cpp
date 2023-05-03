#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int fillVector(int n, int v[]);
int viewVector(int n, int v[]);
int main() {
    srand(time(NULL));
    int vectorA[10];
    int vectorB[10];
    int n = 10; // Asignar un valor a n, para que la variable no tome cualquier otro numero
    fillVector(n, vectorA);
    fillVector(n, vectorB);
    viewVector(n, vectorA);
    viewVector(n, vectorB);
}

int fillVector(int n, int v[]) {
	//llenado del vector
    int i;
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100; //0..99
    }
    return 0;
}

int viewVector(int n,int v[]){
	//nos muestra el vector por pantalla
    int i; 
     for(i=0;i<n;i++)
        cout<<v[i]<<endl;
}

