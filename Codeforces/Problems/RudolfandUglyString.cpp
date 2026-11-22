

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
int n;cin>>n;
string s;cin>>s;
int del=0;
for(int i=0;i<n;){
    if(i+4< n && s.substr(i,5)== "mapie "){
        del++;
        i+=5;
    }
    else if (i+2< n&&  (s.substr(i,3)=="map" || s.substr(i,3)=="pie" )){
        del++;
        i+=3;
    }else{
    i++;
    }
}
cout<<del<<"\n";
 

    
}

    
    
}