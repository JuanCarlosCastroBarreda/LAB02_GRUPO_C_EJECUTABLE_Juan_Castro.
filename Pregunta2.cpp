#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int i=2,j,cont,suma;
    while(i<=50){
        cont=0;
        j=1;
        while(j<=i){
            if(i%j==0){
                cont++;
            }
            j++;}

            if(cont==2){
                suma++;
                cout<<i<<endl;
                }
            i++; 
        }
   return 0;
}