#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for (auto it: s){
        cout<<it;
    }
    
}
int main(){
    //map mein se value hata do collection of keys
    set<string>s;
    s.insert("tf");//with sorting O(logn)
    s.insert("gh");
print (s);
    auto it=s.find("gh");//give address
    if (it != s.end()){
        cout<<*(it);
        s.erase("gh");//or s.erase(it);
    }
    print (s);
    //IF ORDER does not matter use unordered set
    
}