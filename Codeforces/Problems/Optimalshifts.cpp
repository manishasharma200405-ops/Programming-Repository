#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;
//Atplayer
int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    string s;
    cin>>s;
string dub=s+s;
int mx=0;
int cur=0;
for(char c:dub){
    if(c=='0'){
        cur++;
        mx=max(mx,cur);

    }else{
        cur=0;
    }

}
cout<<mx<<"\n";

    
    }
}