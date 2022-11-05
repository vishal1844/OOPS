// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// // // namespace vishal {
// // //     int val=50;
// // //     int getval(){
// // //         return val*10;
// // //     }
// // //     }
// // // //int val=300;
// // // int main(){
// // //     //int val=100;
// // //     //double val=23.4;
// // //     cout<<vishal::getval()<<endl;
// // //     return 0;
// // // }
// // int a[10];
// // int main(){
// //     //int a[10];
// //     for(int i=0;i<10;i++){
// //         cout<<a[i]<<endl;
// //     }
// //     retur
// // int main(){
// //     int n;
// //     //cout<<"enter the length of an array ";
// //     //cin>>n;
// //     string s;
// //     int i,j;
// //     //for(i=0;i<n;i++){
// //         //cin.ignore();
// //         getline(cin,s);
// //     //}
// //     //s.clear();
// //     for(auto itr:s){
// //         cout<<itr<<" ";
// //     }
// //     s.clear();
// //     cout<<endl<<s.size();
// //     return 0;
// // }
// int main(){
//     // vector<int>v;
//     // v.push_back(1);
//     // v.push_back(3);
//     // v.push_back(1);
//     // v.push_back(5);
//     // v.push_back(7);
//     // v.push_back(8);
//     // v.emplace_back(10);
//     // for(auto itr:v){
//     //     cout<<itr<<" ";
//     // }
//     // cout<<endl;
//     // vector<int>v1(v.begin(),v.begin()+4);
//     // for(auto itr:v1){
//     //     cout<<itr<<" ";
//     // }
//     // cout<<endl;
//     // vector<int>v2(v1);
//     // for(auto itr:v2){
//     //     cout<<itr<<" ";
//     // }
//     // // 2D vector
//     // vector<vector<int>>v;
//     // vector<int>v1;
//     // vector<int>v2;
//     // vector<int>v3;
//     // v1.push_back(3);
//     // v1.push_back(5);
//     // v1.push_back(7);
//     // v2.push_back(3);
//     // v2.push_back(31);
//     // v2.push_back(38);
//     // v3.push_back(9);
//     // v3.push_back(7);
//     // v3.push_back(2);
//     // v1.push_back(3);
//     // v.push_back(v1);
//     // v.push_back(v2);
//     // v.push_back(v3);
//     // for(auto vctr:v){
//     //     for(auto itr:vctr){
//     //         cout<<itr<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // for(int i=0;i<v.size();i++){
//     //     for(int j=0;j<v[i].size();j++){
//     //         cout<<v[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // return 0;
//     //10*20;
//     vector<vector<int>>v(5,vector<int>(10,0));
//     v.push_back(vector<int>(5,9));
//     for(auto vctr:v){
//         for(auto itr:vctr){
//             cout<<itr<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void solve(){
//     string s;
//     //getline(cin,s);
//     cin>>s;
//    // cout<<s.size();
//     int i,j,k=0,c=0,l;
//     for(i=0;i<s.size();i++){
//         if(s[i]=='a'){
//             c++;
//         }
//         else{
//             k++;
//         }
//     }
//     if(c<k){
//         cout<<c<<endl;
//         //return ;
//     }
//     else if(c==k){
//         cout<<0<<endl;
//     }
//     else{
//         cout<<k<<endl;
//     }
// }
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    solve();
// 	}
// 	return 0;
// }
#include <iostream>
using namespace std;
void solve(){
    int n,i,j,k=0,m=0,c=0,t=0;
    string s,r;
    cin>>s>>r;
    if(s.size()!=r.size()){
        cout<<"no"<<endl;
    }
    else{
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                c++;
            }
            else
            k++;
        }
        cout<<c<<"   "<<k<<"  ";
        for(i=0;i<r.size();i++){
            if(r[i]=='1'){
                m++;
            }
            else
            t++;
        }
        cout<<m<<"    "<<t;
        if(c==m&&k==t){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
