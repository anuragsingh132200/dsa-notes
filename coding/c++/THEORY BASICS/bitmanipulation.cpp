#include<bits/stdc++.h>
using namespace std;

int getbit(int a ,int b){
if (int m =( a & (1<<b) ) != 0){
return 1;
}
else{
    return 0;
}
}

int setbit(int a ,int b){
    int c= ( a|(1<<b) );
    return c ;
}

int clearbit(int a ,int b){
    int c=( a&(~(1<<b)) );
    return c;
}


int main(){
    int m;
    int n;
    cin>>m>>n;
    //cout<< getbit(m,n);
    //cout << setbit(m,n);
    //cout<<clearbit(m,n);

    
/*int n;
    cin>>n ;
    if ((n&(n-1))==0){
        cout << "yes";

    }
    else{
        cout<<"no";
    }*/
    /*int n =19;
    int c=0;
    
    while (n!=0){
        n = n & (n-1);
       c++;
    }
    cout<<c;*/
    
}