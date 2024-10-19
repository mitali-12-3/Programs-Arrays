#include<iostream>
using namespace std;
void printPairs(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}
void pairs2(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs3(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs4(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs5(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs6(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs7(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

void pairs8(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<< arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int choice;
    cout<<"Enter choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
        printPairs(arr,n);
        break;

        case 2:
        pairs2(arr,n);
        break;

        case 3:
        pairs3(arr,n);
        break;

        case 4:
        pairs4(arr,n);
        break;

        case 5:
        pairs5(arr,n);
        break;

        case 6:
        pairs6(arr,n);
        break;

        case 7:
        pairs7(arr,n);
        break;

        case 8:
        pairs8(arr,n);
        break;

        default:
        cout<<"Exiting";
        break;
    }
    return 0;
}