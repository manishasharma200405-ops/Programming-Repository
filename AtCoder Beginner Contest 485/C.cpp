#include <iostream>
#include <vector>
#include <string>
using namespace std;
//AtPlayer
int main(){
     int n;cin>>n;
     vector<int> a(n);
     for(auto &x:a)cin>>x;
     //min dist .

    const int inf=1e9;
    vector<int> d(n,inf);
    int l=-1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) l =i-1;
        if(l!=-1) d[i]=i-l;
    }
    l=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]!=a[i+1]) l=i+1;
        if(l!=-1) d[i]=min(d[i],l-i);
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<" \n"[i==n-1];
    }
    
    
    }