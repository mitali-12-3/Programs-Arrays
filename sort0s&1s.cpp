#include<iostream>
#include<algorithm>
using namespace std;
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<"-->"<< arr[i]<<" "<<endl;
    }

}
void sort1and0M1(int arr[],int n){

    //Counting process
    int zeroCount=0, oneCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zeroCount++;
        if(arr[i]==1)
            oneCount++;
    }
    //Insertion process--> for loop
    int i=0;
    for(; i<zeroCount;i++){
        arr[i]=0;
    }
    for(; i<n;i++){
        arr[i]=1;
    }
}

void sort1and0M2(int arr[],int n){
    //Counting process
    int zeroCount=0, oneCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zeroCount++;
        if(arr[i]==1)
            oneCount++;
    }
    //Insertion process--> METHOD2 no loop, fill() function
    fill(arr,arr+zeroCount,0);
    fill(arr+zeroCount,arr+n,1);
}

int main(){
    int arr[]={1,0,1,0,1,0,};
    int n=6;
    int choice;
    cout<<"Enter choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        sort1and0M1(arr,n);
        printing(arr,n);
        break;

        case 2:
        cout<<"Fill() method for insertion"<<endl;
        sort1and0M2(arr,n);
        printing(arr,n);
        break;

        case 3:
        cout<<"In-built STL"<<endl;
        sort(arr,arr+n);
        printing(arr,n);
        break;

        default:
        cout<<"Exiting"<<endl;
        break;
    }
    return 0;
}