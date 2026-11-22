

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
using namespace std;
//Atplayer
int main(){
  int t;cin>>t;
  while(t--){
   int n;cin>>n;vector<int> a(n);
   for(auto &x:a) cin>>x;
   int cnt[26]={0};
 string s ="";
for(int i=0;i<n;i++){
    for(int j=0;j<26;j++){
        if(cnt[j]==a[i]){
          
            s+=char('a'+j);
            cnt[j]++;
            break;
        }

    }
}
cout<<s<<"\n";
    
}

    
    
}