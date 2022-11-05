#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class diagonal{
    int n;
    int a[4];
    public:
    diagonal(){
        n=2;
        //a=new int[2];
    }
    diagonal(int n){
        this->n=n;
        //a=new int[n];
    }
    ~diagonal(){
       // delete []a;
    }
    void getdata();
    void setdata(int,int,int);
    void display();

};
void diagonal::setdata(int i,int j,int x){
    if(i==j){
        a[i]=x;
    }
}
void diagonal::display(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<a[i]<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}
int main(){
    diagonal d(3);
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         int x;
    //         cin>>x;
    //         d.setdata(i,j,x);
    //     }
    // }
    d.setdata(0,0,4);
    d.setdata(1,1,5);
    // d.setdata(2,2,8);
    d.setdata(2,2,9);
    d.display();
    return 0;
}