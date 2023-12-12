#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=4;
    //cin>>m>>n;
    int g=0;
    int arr[n][n];
    for (int i=0; i<n;i++){
        for (int j =0;j<n;j++){
            arr[i][j]=g;
            g++;
        }
    }
    
   //output as matrix
   for (int i=0; i<n;i++){
        for (int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose
    for (int i=0; i<n;i++){
        for (int j =0;j<n;j++){
            if(i>j){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
            }

        }
        }
        for (int i=0; i<n;i++){
        for (int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    }