

#include <iostream>
#include <string> 

#include <cctype>
using namespace std;
//Atplayer
int main(){
 string s;
 cin>>s;
  if(s.find("1111111") !=string::npos || s.find("0000000")!= string::npos){
    cout<<"YES"<<"\n";
  }else{
    cout<<"NO"<<"\n";
  }
  

    
    
}