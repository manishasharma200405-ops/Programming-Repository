

#include <iostream>
#include <string> 
#include <algorithm>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
string s;cin>>s;

 //t!=s
 int cnt=0,cnt1=0;
 for(char c:s){
    if(c=='0'){
        cnt++;
    }else{
        cnt1++;}
 }
 int res=0;
 for(int i=0;i<s.size();i++){
if(s[i]=='0') {
    if(cnt1>0){
    cnt1--;
    }else{
        res=s.size()-i;
    
    break;}
      
    
}
else{
    if(cnt>0){
        cnt--;
    }else{
        res=s.size()-i;
break; 
   }
}
 }
 cout<<res<<"\n";




 

    
}

    
    
}