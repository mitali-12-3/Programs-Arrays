#include<iostream>
using namespace std;
void findfirstocc(int arr[],int n,int target,int &ansIndex){
    int s=0,e=n-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==target){
            //ans found--> may or may'nt be the first occurrence 
            //store & compute
            ansIndex=mid;
            //go to left because pehela toh left most he hoga na
            e=mid-1;
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
    int arr[]={2,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    //-1 means target not found

    int ansIndex=-1;
    findfirstocc(arr,n,target,ansIndex);
    cout<<"First occ index: "<<ansIndex<<endl;
    return 0;
}