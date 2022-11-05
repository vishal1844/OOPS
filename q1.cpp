#include<bits/stdc++.h>
using namespace std; 
void solve()
{
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  int i=0;
  while(i<n){ 
    int count=0;
    if(s[i]=='1'){
        i++;
     while(count<=k && i<n){
        s[i]='1';
        count++;
        i++;
     } 
     continue;
    }
    else if(s[i]=='?'){
        s[i]='0';
    }
    i++;
  }
  cout<<s<<endl;
  return ;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}