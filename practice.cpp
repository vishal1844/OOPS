// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int i,j,k,l,a[m][n];
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
// }
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i,j,k=INT_MIN,s,a[n];
//   for(i=0;i<n;i++){
//     cin>>a[i];
//   }
// for(i=0;i<n-1;i++){
//   //s=0;
//   for(j=i+1;j<n;j++){
//     if((a[i]%2==0&&a[j]%2==1)||(a[i]%2==1&&a[j]%2==0)){
//       break;}
//     s=a[i]+a[j];
//     if((k<s)&&s%2==0){
//       	k=s;
//     }
//   }
// }
//  cout<<k<<endl;
//   return 0;
// }
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
  cin>>n;
  int a[n],i,j,mx=-1;
  vector<int>even,odd;
  for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]&1==1){
      odd.push_back(a[i]);
    }
    else{
      even.push_back(a[i]);
    }
  }
  sort(odd.rbegin(),odd.rend());
  sort(even.rbegin(),even.rend());
  if(odd.size()>=2)mx=max(mx,(odd[0]+odd[1]));
  if(even.size()>=2){
    mx=max(mx,even[0]+even[1]);
  }
  cout<<mx<<endl;
  for(auto itr:odd){
    cout<<itr<<" ";
  }
  return 0;
}
    