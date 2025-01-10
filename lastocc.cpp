#include<iostream>
using namespace std;
void lastoccurence(int arr[], int n, int target, int &ansIndx){
    int s=0, e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ansIndx=mid;//store and compute
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}
int main(){
    int arr[]={2,5,5,21,22,39,40,50,60,60,70};
    int n=11;
    int target=60;
    int ansIndx=-1;
    lastoccurence(arr,n,target,ansIndx);
    cout<<"Last occurence: "<< ansIndx<<endl;
    return 0;
}