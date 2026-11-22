

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
int n,k;cin>>n>>k;
vector<int> a(n),r(n,1);
for(auto &x:a) cin>>x;
for(int i=1;i<n;i++) if(a[i]==a[i-1]) r[i]=r[i-1]+1;
int w=n-k+1,p=0;
for(int i=0;i<k;i++){
    if(r[i+n-k]>=w)p++;

}
cout<<p<<"\n";

    
}

    
    
}