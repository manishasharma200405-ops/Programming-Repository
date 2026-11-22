#include <iostream>
#include <algorithm>
using namespace std;
//AtPlayer
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int p=-1,t=-1,c[3]{},h=0;
    for(int i=0;i<n&&p<0;i++){
        if(!c[s[i]-'A']++)h++;
        if(h==3) p=i+1;
    }
    fill(c,c+3,0);h=0;
    for(int i=n-1;i>=0 && t<0;i--){
        if(!c[s[i]-'A']++)h++;
        if(h==3)t=i;
    }
    if(p<0 ||t<0){cout<<0;return 0;}
    long long r=0;
    fill(c,c+3,0);h=0;
    int j=p;
    for(int i=p;i<=t;i++){
        while(j<=t && h<3) if(!c[s[j++]-'A']++)h++;
        if(h<3) break;
        r+=t-j+1;
        if(!--c[s[i]-'A'])h--;
    }
    cout<<r;

}