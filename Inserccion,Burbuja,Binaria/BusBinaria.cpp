#include<iostream>

using namespace std;

int main(){
	
	int numeros[]={1,2,3,4,5};
	int i,inf,sup,mitad, dato;
	char band = 'F';
	
	cout<<"Digite el numero a buscar:  ";
	cin>>dato;
	
	inf = 0;
	sup = 5;
	
	while(inf <= sup){
		mitad = (inf+sup)/2;
		
		if(numeros[mitad] == dato){
			band = 'V';
			break;
		}
		if(numeros[mitad]>dato){
		sup = mitad;
		mitad = (inf+sup)/2;	
		}
		if(numeros[mitad]<dato){
			inf=mitad;
			mitad = (inf + sup)/2;
		}
	}
	
	if(band == 'V'){
		cout<<"El numero " << dato << " se encontro en la posicion:  "<< mitad <<endl;
	}
	else{
		cout<<"El numero NO ha sido encontrado"<<endl;
	}
	return 0;
}
