#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int target=77;
    bool ans=binary_search(arr,arr+n,target);
    //base address=arr
    //end address=arr+n
    cout<<ans<<endl;
    return 0;
    }