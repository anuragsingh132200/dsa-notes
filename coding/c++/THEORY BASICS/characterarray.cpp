#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    cin.ignore();
    char arr[n+1];
    
    //cin>>arr;
    
    cin.getline(arr,n);
    cin.ignore();


    cout<< arr<<endl;
    int maxlength=0;
    int currentlength=0;
    for (int i =0;i<n;i++){
      
    if (arr[i]==' '||arr[i]== '\0'){
        if (maxlength<currentlength){
            maxlength = currentlength;
        }
    }
     if(arr[i]==' '){
            currentlength=0;
        }
        if(arr[i]!=' '){
            currentlength++;
        }
    }
    cout<< maxlength;

}