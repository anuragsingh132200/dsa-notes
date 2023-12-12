#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;
    p={2,"abchbfjb"};
   // p= make_pair(2,"dbcbdb");
    cout<<p.first;
    cout <<p.second;
    //nested pair
    pair<int,pair<int,int>>p1;
    p1={1,{2,3}};
    cout<<p1.first<<p1.second.first;
    pair<int,int>arr[3];
    arr[0]={1,2};
    arr[1]={2,3};
    arr[2]={3,4};
    cout <<arr[0].first;
    
}