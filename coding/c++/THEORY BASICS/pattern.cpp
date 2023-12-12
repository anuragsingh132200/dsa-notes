#include<bits/stdc++.h>
using namespace std;
void p1(int a,int b){
    for (int i=0;i<a;i++){
        for(int j=0; j<b;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return;
}
void p2(int a){
    for (int i=0;i<a;i++){
        for(int j=0; j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return;
}
void p3(int a){
    for(int i =0;i<a;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for (int k=a-i;k>0;k-- ){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p4(int a){
    for(int i =1;i<a;i++){
        for(int j=a-i+1;j>0;j--){
            cout<<" ";
        }
        
        for (int k= 2*i-1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
//fuction to print inverse pyramid
void p5(int a){
    for(int i =0;i<a;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for (int k=a-i;k>0;k-- ){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =1;i<a;i++){
        for(int j=a-i+1;j>0;j--){
            cout<<" ";
        }
        
        for (int k= 2*i-1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    
    cin>>a;
    p1(a,a);
}