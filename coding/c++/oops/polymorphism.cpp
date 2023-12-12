#include <bits/stdc++.h>
using namespace std;
//this basically means to  have same name diff work
class A{
public: 
void func(){
cout<<43645;
}
 
void func(int a){
cout <<7686;
}//diff argument number function overloading
};
int main(){
A g;
g.func();
g.func(8);
}