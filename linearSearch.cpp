#include<iostream>
#include<stdbool.h>
using namespace std;

void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void solve1(int arr[], int size){
    for(int i=0; i<size;i++)
        arr[i]=arr[i]+10; // 20,10,10,10,10
}

void solve2(int arr[]){
    arr[1]=30; // 10,30,0,0,0
}

void solve3(int brr[]){
    fill(brr,brr+5,59);
}
bool linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        int currEl= arr[i];
        if(currEl==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={10}; // 10,0,0,0,0
    int brr[5];
    int n=5;
    int a;
    cout<<"Enter your choice: ";
    cin>>a;
    switch(a){
        case 1:
        cout<<"Pass by Reference concept 1: "<<endl;
        solve1(arr,n);
        print(arr,n);
        break;

        case 2:
        cout<<"Pass by Reference concept 2: "<<endl;
        solve2(arr);
        print(arr,n);
        break;

        case 3:
        cout<<"Fill(start addr, last addr, value), others are zero and all"<<endl;
        solve3(brr);
        print(brr,n);
        break;

        case 4:
        {
        cout<<"Linear Search: "<<endl;
        int target;
        cout<<"Enter target to be searched: "<<endl;
        cin>>target;
        bool m= linearSearch(arr,n,target);
        cout<<m<<endl;
        }
        break;

        default:
        cout<<"Exiting"<<endl;
    }
    return 0;
}

