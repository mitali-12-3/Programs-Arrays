#include<iostream>
using namespace std;
void extremePrint(int arr[], int size){
    int left=0, end= size-1;
    while(left<=end){
        if(left==end){
            cout<< arr[left]<<" ";
            left++;
        }
        else{
        cout<< arr[left]<< " ";
        left++;
        cout<< arr[end]<< " ";
        end--;
        }
    }
}
int main(){
    int arr[7]={10, 20, 30, 40, 50, 60, 70};
    int size=7;
    extremePrint(arr,size);
    return 0;
}