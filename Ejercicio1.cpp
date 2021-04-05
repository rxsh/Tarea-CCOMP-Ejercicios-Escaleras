// CESAR LENGUA MÁLAGA

#include <iostream>
#include <string>

using namespace std;

void escaleraDoble(int n){
    int escalones=3; // Para numeros de escalones - Aca se debe cambiar en caso

    string p1= "|___", p2="___|\n", p3= "|___|\n", p4="|_P_", p5="_P_|\n"; // Insertamos la función string con los escalones q emplearemos
    if (n==0)	// En caso n=0, P se encuentra en medio 
		p3="|_P_|\n"; 
    int espacio=4; // Creamos un entero para los espacios
    
  	for (int i=escalones; i>0; i--) {
		if (i== -n) // Para la posición negativa es la izquierda
			cout<<p4; 
		else 
			cout<<p1;
    	for (int j= 8*i-3 ; j>0; j--) // For para espacios de la derecha
			cout << " ";
    	if (i== n) // posición derecha
			cout<<p5; 
		else 
		  cout<<p2;
    	for (int x=0; x<espacio; x++) // For para los espacios en blanco izquierda
			cout<< " ";
    espacio+=4;  //Aumente los espacio izquierda - derecha
  }
  cout << p3;
}

int main(){
  int n; cout<<"Digite posición de P: "; cin>>n;
  escaleraDoble(n);
  return 0;
}
