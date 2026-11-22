

#include <iostream>
#include <string> 
#include <algorithm>
#include <cctype>
using namespace std;
//Atplayer
int main(){
 
    
string s;cin>>s;
string ans ="";
for(char c:s){

c=tolower(c);
if(c=='a'  || c=='o' ||c=='y' || c=='e' || c=='i' || c=='u'){
    continue;
}else{ans+='.';
ans+=c;}




}
cout<<ans<<"\n";




 

    


    
    
}