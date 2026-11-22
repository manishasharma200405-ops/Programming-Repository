

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
int n;cin>>n;
int inf=1e9;
for(int i=0;i<=200;i++){
    int m=i;int r=n;
    for(int k=i+1;k>=1;k--){
        if(r<=0)break;
        r-=k;
        m++;
    }
    if(r>0)m+=r;
    inf=min(inf,m);
    }
    cout<<inf<<"\n";



    
}

    
    
}