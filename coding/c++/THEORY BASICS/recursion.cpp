#include <iostream>
using namespace std;
/*int sum =0;
int ci(int n){
    
    sum+=n;
    if (n==0){
        cout<<sum;
        return 0;
    }
    ci(n-1);

}

int main(){
    int n=4;
    ci(n);
}*/
/*int ans=1;
int powerof(int n , int p){
    ans*=n;
    if (p==1){
        cout<<ans;
        return 0;
    }
    powerof(n,p-1);

    
}
int main(){
    int n =5;
    int p=3;
    
    powerof(n,p);
}*/
/*int factorial(int n){
    if (n==0||n==1){
        return 1;

    }
    int prevfact= factorial(n-1);
    return  n*prevfact;

}
int main(){
    int n ;
    cin>>n;
    cout <<factorial(n);
}*/

/*int fibonacci(int n ){
    if (n==0||n==1){
        return n;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}
 int main(){
    int n =7;
    cout<<fibonacci (n);
 }*/

/* bool cis(int arr[],int n){
    if (n==1){
        return true;
    }
    bool subarray = cis(arr+1,n-1);
    return (arr[0]<arr[1] && subarray);
 }
int main(){
    int arr[5];
     for(int i=0; i<5;i++){
        cin>>arr[i];
     }
     cout<<cis(arr,5);
}*/


