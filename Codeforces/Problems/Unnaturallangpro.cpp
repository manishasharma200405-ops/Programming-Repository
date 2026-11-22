

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
string str="";
int i=n-1;
while(i>=0){
    int l=(s[i]=='a' || s[i] == 'e' )? 2: 3;
    for(int k=0;k<l;k++)
{
    str+=s[i-k];
}
i-=l;
if(i>=0){
    str+='.';
}
}
reverse(str.begin(),str.end());
cout<<str<<"\n";


 

    
}

    
    
}