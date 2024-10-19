#include<iostream>
#include<algorithm>
using namespace std;
void printing(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reversing1(int arr[], int n){
    //METHOD1; 2 pointer approach
    int l=0, r=n-1;
   /*while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    */ 
    while(l<r) //pro bro
        swap(arr[l++],arr[r--]);
}
int main(){
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int a;
    cout<<"Enter choice: "<<endl;
    cin>>a;
    switch(a){
        case 1:
        reversing1(arr,n);
        printing(arr,n);
        break;

        //METHOD 2: STL 
        case 2:
        cout<<"STL in C++:"<<endl;
        reverse(arr,arr+n);
        printing(arr,n);
        break;

        default:
        cout<<"Exiting"<<endl;

    }
    return 0;
}