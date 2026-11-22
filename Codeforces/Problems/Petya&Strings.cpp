

#include <iostream>
#include <string> 

#include <cctype>
using namespace std;
//Atplayer
int main(){
   string str;
string s;
cin>>str>>s;

 for(int i=0;i<str.size();i++){
   str[i]=tolower(str[i]);
 s[i]=tolower(s[i]);
 }
 if(str<s){
   cout<<-1<<"\n";

 }
 else if(str>s){
   cout<<1<<"\n";

 }else{
   cout<<0<<"\n";
 }
 
return 0;


    
    
}