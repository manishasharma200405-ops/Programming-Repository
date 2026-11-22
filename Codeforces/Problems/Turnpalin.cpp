#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;
//Atplayer
int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;char c;cin>>c;
    string s;cin>>s;
    int r=0;
    for(int i=0;i<n/2;i++){
        char l=s[i];
        char rt=s[n-i-1];
        if(l==rt){
            continue;
        }else if(l==c || rt==c){
            r+=1;
        }
        else{
            r+=2;
                }

    }
    cout<<r<<"\n";
    }
}