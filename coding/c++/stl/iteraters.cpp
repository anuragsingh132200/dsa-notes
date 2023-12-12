#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v={1,2,3,4,5};
   // for (int i=0;i<5;i++){
   //     cout << v[i];
   // } 
    cout << endl;
    //like a pointer catches address of the element
    //vector <int>::iterator it =v.begin();//syntax  for declaration
   // or use to write auto keyword before it in for loop initialisation 
   // cout<<*(it+1);
   // for(it=v.begin();it!=v.end();it++){
   //     cout<<*(it);
   // }

//(*it).first<=>(it->first)
// iterators code in short
//range based loop
for(int value: v){//or auto &value if you want not to make copy
        cout<<value;
    }
//auto keyword ; decides datatype based on value
auto a=1;
cout << a;
}
