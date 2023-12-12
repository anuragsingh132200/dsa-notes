#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
    int xorsum=0;
    for (int i =0;i<5;i++){
    xorsum = (xorsum^arr[i]);

    }
    cout << xorsum;
    

    
}