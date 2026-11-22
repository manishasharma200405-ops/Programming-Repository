#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;
//Atplayer
int main(){
    int t;cin>>t;
    while(t--){
    long long  n,k;cin>>n>>k;
    string s;cin>>s;
    int  c0 =0,c1=0;

    for(char c:s){
        if(c=='0') c0++;
        else c1++;
    }
    long long mx=max(c0,c1);
    long long mn=min(c0,c1);
    long long t=min(k,mn);
    mx+=t;
    mn-=t;

    long long ans=1+(mx*(mx+1))/2 +(mn*(mn+1))/2 ;
    
    cout<<ans<<"\n";
    }
}