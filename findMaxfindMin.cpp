#include<iostream>
#include<climits>
using namespace std;
int maxFind(int arr[], int n){
    int ans=INT_MIN; //-2^31
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;

}
int minFind(int arr[], int n){
    int ans=INT_MAX; //2^31-1
    for(int i=0;i<n;i++){
        //second way using min and max inbuilt functions
        ans= min(arr[i],ans);
    }
    return ans;

}
int main(){
    int arr[5]={11,41,21,76,5};
    int size=5, res;
    res= maxFind(arr,size);
    cout<<res<<" is the max element"<<endl;
    res= minFind(arr,size);
    cout<<res<<" is the min element"<<endl;
    return 0;
}