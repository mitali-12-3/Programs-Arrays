#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    //USING INBUILT FUNCTIONS
    int a=5, b=6;
    cout<<"Before swap: "<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap: "<<endl;
    cout<<a<<" "<<b<<endl;

    //USING TEMP VARIABLE
    int a2=3, b2=6;
    cout<<"Before swap: "<<endl;
    cout<<a2<<" "<<b2<<endl;
    int temp=a2;
    a2=b2;
    b2=temp;
    cout<<"After swap: "<<endl;
    cout<<a2<<" "<<b2<<endl;

    //USING ARITHMETIC OR EXTRA VARIABLE METHOD
    int p=2, q=3;
    cout<<"Before swap: "<<endl;
    cout<<p<<" "<<q<<endl;
    p=p+q;
    q=p-q;
    p=p-q;
    cout<<"After swap: "<<endl;
    cout<<p<<" "<<q<<endl;

    //XOR BITWISE METHOD
    int s=5, t= 6;
    //5= 101, 6=110 in binary
    cout<<"Before swap: "<<endl;
    cout<<s<<" "<<t<<endl;
    s=s^t;
    t=t^s;
    s=s^t;
    cout<<"After swap: "<<endl;
    cout<<s<<" "<<t<<endl;

    return 0;
}