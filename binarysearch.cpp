#include<iostream>
using namespace std;
bool binarysearch(int arr[], int n, int target){
    int start=0,end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return false;

}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int target=70;
    if(binarysearch(arr,n,target)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}