#include <bits/stdc++.h>
using namespace std;

class a{
    public:
    void func (){
        cout<<"yoo";
    }
};
class c{
    public :
    void funci(){
        cout <<564765;
    }
};
class b:public a{

};//single
class d:public a,public c{

};//multiple
//similarily multiple level,hybrid=multi level+multiple,heirarchical
int main(){
    b c;
    c.func();
    d p;
    p.funci();
    p.func();
}