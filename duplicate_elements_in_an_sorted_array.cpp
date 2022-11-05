#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,l,dup=0;
    cout<<"enter the range of array ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    // cout<<"duplicate elements are \n";
    // for(i=0;i<n-1;i++){
    //     // if(a[i]==a[i+1]&&dup!=a[i]){
    //     //     cout<<a[i]<<" ";
    //     //     dup=a[i];
    //     // }
    //     if(a[i]==a[i+1]){
    //         j=i;
    //         while(a[j]==a[j+1]){
    //             j++;
    //         }
    //         cout<<a[i]<<" is "<<j-i<<" "<<endl;
    //         i=j;
    //     }
    map<int,int>mp;
    for(i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto itr:mp){
        //if(itr.second>1){
            cout<<itr.first<<" is "<<itr.second<<endl;
        //}
    }
    return 0;
}
