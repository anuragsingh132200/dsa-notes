#include<bits/stdc++.h>
using namespace std;

int main(){
   /* string str1(5,'n');
    cout<<str1;
    
    string str2;
    str2="apni";
cout<<str2;

//for including spaces

string str;
getline(cin,str);

cout<<str;*/
    //functions of strings
    
    /*string s1="fam";
    string s2="ily";
    
    cout<<s1+s2;
    
    s1.append(s2);
    
    cout <<s1;
    cout <<s1[1];

//deletes all characters
    string abc="gdceyvhagyuvejhfgfg";
    abc.clear();
    cout<<abc;*/

//checks if same
    /*string s1="abc";
    string s2="xyz";
    cout <<s1.compare(s2);*/

//checks if empty
/*string s3="n";
if (!s3.empty()){
    cout <<"i love u";
    }*/

string s1 ="nincompoop";

//erasing 
/*s1.erase(3,3);
//(starting index, no. of characters to be deleted)
cout <<s1;*/

// finding
cout<<s1.find("");

//insertion
/*s1.insert(2,"lol");
cout << s1;*/
 
//length
/*cout<<s1.size();
cout<<s1.length();*/
//helps in iteratying for loop while printing with endl

//substr printer by index
//string s=s1.substr(6,4);//same as ABOVE (,)

//string to int  
//string str="456";
//int x=stoi(str);
//cout<<x+2;

//int to string
//int c= 756;
//cout <<to_string(c)+ "2";

//sorting char string
//sort(s1.begin(),s1.end());
//cout<<s1;

//case change char string
//transform(s1.begin(),s1.end(),s1.begin(),::toupper);
//or another way to solve by considering a b c as integer
/*int a='a'-'A';//32
cout << a;
for (int i=0;i<s1.length();i++){
s1[i]-=a;
}
cout << s1;*/

//adding an element at the end
//s1.push_back('a');adds a at the end
//cout<<s1;

//sorting numeric string
//string s2= "3535328584";
//sort(s2.begin(),s2.end(),greater<int>());
//cout <<s2;
// functiont to reverse a string
//reverse(s1.begin(),s1.end());
//

 
 cout <<s1;
}