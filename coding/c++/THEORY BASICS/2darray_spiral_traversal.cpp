#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=5;
    int n=4;
    //cin>>m>>n;
    int g=0;
    int arr[n][m];
    for (int i=0; i<n;i++){
        for (int j =0;j<m;j++){
            arr[i][j]=g;
            g++;
        }
    }
    
   //output as matrix
   for (int i=0; i<n;i++){
        for (int j =0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //spiral order print
    int a=0;
    int b=0;
    int c=n-1;
    int d=m-1;
    while (c-a>0||d-b>0){
        //for top row
        for (int i = a ;i<=c;i++){
            cout<<arr[i][b]<<" ";
        }
        b++;
        
        //for right column
        for(int i=b;i<=d;i++){
            cout<<arr[c][i]<<" ";
        }
        c--;

        
        //for bottom row
        for(int i=c;i>=a;i--){
            cout<<arr[i][d]<<" ";
        }
        d--;
        
        //for left row
        for (int i =d;i>=b;i--){
            cout<<arr[a][i]<<" ";
        }
        a++;
        }
    }

