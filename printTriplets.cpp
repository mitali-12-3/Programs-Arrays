#include<iostream>
using namespace std;
void printTrips(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<"("<< arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                count++;
            }
        }
    }
    cout<<endl;
    cout<<"Counts: "<<count;
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    printTrips(arr,n);
    return 0;
}