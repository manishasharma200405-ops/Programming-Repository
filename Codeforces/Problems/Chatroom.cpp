

#include <iostream>
#include <string> 
#include <algorithm>
#include <cctype>
using namespace std;
//Atplayer
int main(){
 
    
string s ;cin>>s;
int j=0;
string t="hello";
for(int i=0;i<s.size();i++){
    if(s[i]==t[j]){
        j++;
    }if(j==5){
        break;
    }
}
if(j==5){
cout<<"YES\n";
}else{
    cout<<"NO\n";
}




 

    


    
    
}