#include<bits/stdc++.h>
using namespace std;
int printvec(vector<int> &v){
v.push_back(5);
}
int main(){
    /*vector<int>a(10);
    int x;
    cin>>x;
    a.push_back(x);
    printvec(a);

   for(int i=0;i<a.size();i++){
   cout<<a[i];
   }
   a.pop_back();*/
   //vector of pair
  // vector<pair<int,int>>a={{1,2},{2,3}};
   //cout<<a[1].first;
   //array of vectors 
  // vector<int>v[10];
   //for (int i=0;i<10;i++){
   // int n;
    //cin >>n;
    //for (int j=0;j<n;j++){
    //    int x ;
   //     cin >>x;
     //   v[i].push_back(x);
    //}
  // }
  //vectors of vectors
   vector<vector<int>>v;
   for (int i=0;i<10;i++){
    int n ;
    cin>>n;
    vector<int>temp;
    for (int j=0;j<n;j++){
        int x ;
        cin >>x;
        temp.push_back(x);
    }
    v.push_back(temp);
  }
  cout<<v[0][0];

}
