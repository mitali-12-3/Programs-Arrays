#include<iostream>
#include<algorithm>
using namespace std;
bool checkTwoSum(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
             }
        }
    }
    return false;

}
pair<int,int> twoSum(int arr[],int n, int target){
    pair<int,int>ans= make_pair(-1,-1); //can take INT_MIN, INT_MIN as well
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
            }
        }
    }
    return ans;
}

void allpairs(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}

void indicesOfallpairs(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }
}
int main(){
    int arr[]={10,5,20,15,30};
    int n=5, target=35;
    int choice;
    cout<<"Enter the choice "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        {
            cout<<"To check if twosum exists: "<<endl;
            bool res= checkTwoSum(arr,n,target);
            if(res)
            cout<<"Pair found";
            else
            cout<<"Pair not found";
        }
        break;

        case 2:
        {
        cout<<"To return the FIRST two sum pair: "<<endl;
        pair<int,int>ans= twoSum(arr,n,target);
        if(ans.first==-1 && ans.second==-1)
            cout<<"Not found";
        else
            cout<<"("<<ans.first<<","<<ans.second<<")";
        }
        break;

        case 3:
        {
        cout<<"To return all the two sum pairs: "<<endl; // no duplicate pair this way
        allpairs(arr,n,target);
        }
        break;

        case 4:
        {
        cout<<"To return all the two sum pairs: "<<endl;
        indicesOfallpairs(arr,n,target);
        }
        break;

        default:
        cout<<"Exiting"<<endl;
        break;
    }
    return 0;
}