#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int maxsum =INT_MIN;
    int sum = 0;
    for (int i=0 ; i<n ; i++ ){
        sum+=arr[i];
        if (sum<0){
            sum =0;
        }
        maxsum= max(sum,maxsum);
    }
    cout<<maxsum;
}