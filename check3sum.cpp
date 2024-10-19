#include<iostream>
using namespace std;
void check3sum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==target){
                        cout<<"("<< arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                    }
                }
            }
        }   
}
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=6;
    int target=0;
    check3sum(arr,size,target);
    return 0;
}