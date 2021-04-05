// CESAR LENGUA MÁLAGA

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void Escalera(int escalones, int n){
  	if (n>=-escalones){ // Condicional si n es mayor o igual a -escalones
    	string p1= "|___", p2="___|\n", p3= "|___|\n", p4="|_P_", p5="_P_|\n";
    if (n==0) 
		p3="|_P_|\n";
    int espacio=4;
    for (int i=escalones; i>0; i--) {
      	if (i == -n) 
			cout << p4;
		else 
			cout << p1;
      	for (int j= 8*i-3; j>0; j--)
			cout << " ";
      	if (i == n) 
			cout << p5; 
		else 
			cout << p2;
      	for (int x=0; x<espacio; x++) 
		  	cout << " ";
    espacio+=4;  
    }
    cout<<p3;
    Sleep(100); // Tiempo para ver la animación 
    system("cls");  
  }

}

void escaleraDoble(int n){
  int escalones;
  if (n>0){ 
    for (int i=n; i>=n; i--) Escalera(escalones, i); // For para que ascienda y descienda, genera animación
    for (int i=1-n; i<=n; i++) Escalera(escalones, i); 
  }
  else {
    for (int i=n; i<=-n; i++) Escalera(escalones, i); // For para que ascienda y descienda, genera animación 
    for (int i=-n-1; i>=n; i--) Escalera(escalones, i);  
  }
}

int main(){
  int n; int escalones;
  cout<<"Numero de escalones: "; cin>>escalones;
  //cout<<"Digite posición de N: "; cin>>n;  "En caso quiera digitarlo el usuario"
  escaleraDoble(-3);
  escaleraDoble(-2);
  return 0;
}
