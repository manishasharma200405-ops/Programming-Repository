

#include <iostream>
#include <string> 
#include <algorithm>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
int n;cin>>n;
string s;cin>>s;
int c=count(s.begin(),s.end(),'1');
if(c<=2){
    cout<<c-1<<"\n";
    continue;
}
int l=s.find('1'),r=s.rfind('1');
cout<<r-l<<'\n';
 
    
}

    
    
}