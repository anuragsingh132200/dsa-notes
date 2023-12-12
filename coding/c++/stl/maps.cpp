#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    
    for(auto &val: m){
        cout<<val.first<<" "<<val.second<<endl;
    }

}
int main(){
   // map <int,string> m;
   // m[1]="abdb";
   // m[3]="yvjnk";
    //m[2]="bhy";
   // print(m);
    //key insserted in sorted order
    // keys are unique
    //if we write m[3]="mrv" it changes the value

    //auto it=m.find(7);//O(log n)
    // if (it!=m.end()){
     //   cout<< (*it).first<<(*it).second;

     //}
     //else{
       // cout<<"no value";
        //}
    //if (it!=m.end()){
        
   //     m.erase(it);//or m.erase(3)
   // }
    //print (m);


    // given n strings print them in (if no order use u map)lexographic order with freq
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    for( auto &it:m){
        cout<<(it).first<<" "<<(it).second<< endl;
    }
}