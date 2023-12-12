#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    int i;
    for( i =2;i<number;i++){
        if(number%i==0 && number!=2){
            cout<<"its not a prime";
            break;
        }
    }
    if(i==number){
        cout<<"its a prime";
    }
}