#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
