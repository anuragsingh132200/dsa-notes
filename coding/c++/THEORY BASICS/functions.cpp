#include<bits/stdc++.h>
using namespace std;
void print(int a){
    cout<<a;
    return;
}
int factorial(int a){
         for(int i =a-1;i>0;i--){
            a*=i;
         }
         return a;

}
int sumtilln(int a){
    int sum = a*(a+1)/2;
    return sum;

}

void fibonacci(int a){
     int t1=1;
     int t2=1;
     for (int i=1;i<a;i++){
         cout<<" "<<t1;
         int t=t1;
         t1=t2;
         t2+=t;
     }
     cout<<" "<<t1<<" "<<t2;
     return;
}

int main(){
    int a ;
    cin>>a;
    (a);
    
    
}