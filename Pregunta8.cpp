#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	int numero;
	cout<<"Ingrese un numero: ";
    cin>>numero;
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
}