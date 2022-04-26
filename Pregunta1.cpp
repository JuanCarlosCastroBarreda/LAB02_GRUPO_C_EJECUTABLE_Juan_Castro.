#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i;
    int sum=0;
    for(i=0;i<=100;i=i+2){
        cout << " "<<i<<endl;
        sum = sum +i;
    }
    cout<<" La suma es: "<<sum;
   return 0;
}