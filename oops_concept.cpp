#include<iostream>
using namespace std;
class car{
    public:
    string s1,s2;
    void set (string S1,string S2);
    // {
    //     s3=S1;
    //     s4=S2;
    //     cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" ";
    // }
    private:
    string s3,s4;
    //  void set (string S1,string S2){
    //     s3=S1;
    //     s4=S2;
    //     cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" ";
    // }
};
void car::set(string S1,string S2){
    s3=S1;
    s4=S2;
    cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4;
}
int main(){
    car c;
    c.s1="verna";
    c.s2="hyundai";
    c.set("mileage","gear");
return 0;
}