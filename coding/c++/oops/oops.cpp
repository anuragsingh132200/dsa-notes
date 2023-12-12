#include <bits/stdc++.h>
using namespace std;
 class student{
   string name;
   public:
   
   int age;
   int sex;
    student(){

    }//default contructor 

    student(string s){
      name =s;
    }//parameterised constructor

    student (student &a){
      age =a.age;
      name =a.name ;
      sex=a.sex;
    }//copy constructor 

   void printinfo(){
      cout <<name<<ends<<" ";
      // cout<<age<<endl;
      // cout<<sex<<endl;
   }
   
   void setname(string s){
      name =s;
   }
   ~student(){
    cout <<"destructor called";
   }//default destructor
    bool operator == (student c){
      if(name==c.name){
        return 1;
      }else return 0;
    }//operator overloading

 };
int main (){
  
student *c;
(*c).setname("indigo");
(*c).printinfo();
//  student a("urvi");
//  string s="urvi";
//  a.setname(s);
//  a.age=12;
//  a.sex=0;
//  a.printinfo();
//  student c=a;
//  c.printinfo();
// if (c==a){
//   cout <<"yes";
// }
 
}