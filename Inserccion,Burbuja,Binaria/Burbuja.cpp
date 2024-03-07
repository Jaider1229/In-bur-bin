#include<iostream>

using namespace std;

int main(){
	
	int numeros[5];
	int i, j, aux;
	
	for(i=0; i<5; i++){
		cout<<"Digite sus numeros:  ";
		cin>>numeros[i];
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(numeros[j]>numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
	}
}
	cout<<"Numeros Ordenados"<<endl;
	
	for(i=0; i<5; i++){
	cout<< numeros[i] << " ";
	}
	
	return 0;
	}
	
