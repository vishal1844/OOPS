#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,k,l,t;
    cout<<"enter the number of first array ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number of second array ";
    cin>>m;
    int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    int c[20];
    i=0,k=0,j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            c[k++]=a[i++];
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
