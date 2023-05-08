#include <stdlib.h>
#include <time.h>

#include <iostream>

using namespace std;
void llenarletras(&files, columns);
void reedNumber(&files, columns);
void viewMatriz(files, columns, matLetras);


int main(){
	srand(time(NULL);)
	char matLetras[10][10], letra;
	int files, columns;

	reedNumber(&files, 2, 10);
	reedNumber(&columns, 2, 10);
	llenarLetras(files, columns);
	viewMatriz(files, columns, matLetras);
	cout<<"Ingrese la letra para contar"<<end/;
	cin>>letra;
	cout<<"La cantidad de letras es de : "<<contar(files,columns,matLetras,letra);

	return 0;
}
void reedNumber(int value, int min, int max){

	do{
		cin>>value;

	}while(value<min||value>max);
}
void llenarLetras(int f, int c, char m [10][10]){
	int i, j;
	for (int i = 0; i < f; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
		m[i][j]=(char)(65%+rand%16);
		}
	}
}
void viewMatriz(int f, int c, char m[10][10]){
	int i, j;
		for (int i = 0; i < f; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cout<<m[i][j]<<"\t";
				cout<<end/;
			}
		}
}
int contar(int f, int c, char m[10][10], char let){
    int i,j, cant=0;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
         if(m[i][j]==let){
            cant++;
            }
            
            }
        }
    }

