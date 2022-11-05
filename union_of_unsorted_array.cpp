#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,k,t;
    cout<<"enter the array range ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the second array range ";
    cin>>m;
    int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    int c[40];
    for(k=0,i=0;i<n;i++,k++){
        c[k]=a[i];
    }
    for(i=0;i<m;i++){
        t=-1;
        for(j=0;j<n;j++){
            if(b[i]==a[j])
            {
                t=1;
                //cout<<b[i]<<" ";
                break;
            }
        }
        if(t==-1){
            c[k++]=b[i];
        }
    }
    for(i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}