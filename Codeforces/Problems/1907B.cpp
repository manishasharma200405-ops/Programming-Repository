

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
 string s;cin>>s;
 int n=s.size();
 vector<int> l,u;
 for(int i=0;i<n;i++){
  if(s[i]=='b'){
    if(!l.empty()){
      l.pop_back();
    }}
    else if(s[i]=='B'){
      if(!u.empty()){
        u.pop_back();
      } }
  else if(islower(s[i])){
    l.push_back(i);
  }
  else{
    u.push_back(i);
  }
 }
 vector<bool> k(n,false);
 for(auto &id:l)k[id]=true;
 for(auto &id:u) k[id]=true;
 string str="";
 for(int i=0;i<n;i++){
  if (k[i]){
  str+=s[i];
  }
 }
 cout<<str<<"\n";
    
}

    
    
}