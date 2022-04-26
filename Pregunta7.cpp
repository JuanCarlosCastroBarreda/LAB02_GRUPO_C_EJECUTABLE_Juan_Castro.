#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a, b, c,d;

    cout << "Primera nota "<<endl;
    cin >> a;
    cout << "Segunda nota "<<endl;
    cin >> b;
    cout << "Tercera nota "<<endl;
    cin >> c;

    d=(a+b+c)/3;

    cout <<"El promedio es: "<<d;
    return 0;
}