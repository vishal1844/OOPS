#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={3,7,4,9,12,6,1,11,2,10};
    int l=1;
    int h=12;
    int i,j,k;
    map<int,int>mp;
    for(i=0;i<10;i++)
    {
        mp[a[i]]++;
    }
    for(i=l;i<=h;i++){
        if(mp.find(i)==mp.end()){
            cout<<i<<" ";
        }
    }
    return 0;
}