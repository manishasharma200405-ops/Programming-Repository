

#include <iostream>
#include <string> 
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
    string s;
    cin>>s;

    int n=s.size(); 
    string  a="";
    for(int i=0;i<n;i++){
a+="()";
    }
    string str=string(n,'(')+string (n,')');

    if(a.find(s)==string::npos){
      cout<<"Yes\n"<<a<<"\n";
    }else if(str.find(s)==string::npos){
        cout<<"Yes\n"<<str<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
}

    
    
}