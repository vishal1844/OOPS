#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int a[n];
    int i,j,k,l,m;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int diff=a[0]-0;
    cout<<"missing element is ";
    for(i=0;i<n;i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){
                cout<<diff+i<<" ";
                diff++;
            }
        }
    }
    return 0;
}