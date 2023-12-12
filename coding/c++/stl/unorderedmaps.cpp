#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    
    for(auto &val: m){
        cout<<val.first<<" "<<val.second<<endl;
    }

}
//inbuilt implementation(no pair , set multiset in key)
//all function same
//time complexitiy less as no sorting in insertion ,etc
//valid keys datatype
int main(){
   unordered_map <int,string> m;
    m[1]="abdb";
    m[3]="yvjnk";
    m[2]="bhy";
    print(m);
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


    
}