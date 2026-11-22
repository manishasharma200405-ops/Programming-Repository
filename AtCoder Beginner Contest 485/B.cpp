#include <iostream>
#include <vector>
#include <string>
using namespace std;
//AtPlayer
int main(){
    int a,b;cin>>a>>b;
     vector<string> s(a);
     for(int i=0;i<a;i++){
        cin>>s[i];
     }
    for(int i=0;i<a;i++){
        int cnt=0;
        for(int j=0;j<b;j++){
            if(s[i][j]=='x')cnt++;
        }
        if(cnt==b){
            cout<<"Faucet "<<i+1<<"\n";
            return 0;
        }
    }
    for(int i=0;i<b;i++){
        int cnt=0;
        for(int j=0;j<a;j++){
            if(s[j][i]=='x')cnt++;
        }
        if(cnt==a){
            cout<<"Drain "<<i+1<<"\n";
            return 0;
        }
    }
    
    
    }