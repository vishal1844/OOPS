#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the first array ";
    cin>>n;
    int  a[n],i,j,k,l,m,t,s;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the second array ";
    cin>>m;
    int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }

    int c[20];
    i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else{
            c[k++]=a[i++];
            j++;
        }
    }
    for(;i<n;i++){
        c[k++]=a[i];
    }
    for(;j<m;j++){
        c[k++]=b[j];
    }
    c[k];
    for(i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;

}