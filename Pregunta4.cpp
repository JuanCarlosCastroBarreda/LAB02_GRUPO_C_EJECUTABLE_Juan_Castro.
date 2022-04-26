#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
    int x, y,cont,suma,i;
    cout<<"ingrese 2 valores: "<<endl;
    cin >>x;
    cin >>y;
    if(x<y){
        while(x<=y){
        cont=0;
        i=1;
        while(i<=x){
            if(x%i==0){
                cont++;
            }
            i++;}

            if(cont==2){
                suma++;
                cout<<x<<endl;
                }
            x++; 
        }
    }
    if(x>y||x==y){
        cout<<"Vuelva a ingresar los valores "<<endl;
        return main();
    }
}