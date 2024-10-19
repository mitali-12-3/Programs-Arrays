//  Cyclically rotate array by n
#include<iostream>
using namespace std;
void shiftArray(int arr[], int n, int shift){
    int finalShift= shift%n;
    
    if(finalShift==0){
        //don't do anything kyuki use modulus logic
        return;
    }
    //Step1: copy last elements into temp array
    int temp[1000];
    int index=0; //temp's index
    for(int i= n-finalShift;i<n;i++){ //6-2=4, next is 5 
        temp[index]=arr[i]; //temp[0]= arr[4] and temp[1]=arr[5]
        index++;
    }

    //Step2: shift array elements by finalShift places
    for(int i=n-1;i>=0;i--) // i=5 se 0
    { 
        if(i-finalShift>=0){ 
        arr[i]=arr[i-finalShift]; 
        }
    }
    //arr[5]= arr[5-2] which is arr[3]
    //arr[4]=arr[4-2] which is arr[2]
    //arr[3]= arr[3-2] which is arr[1]
    //arr[2]=arr[2-2] which is arr[0]
    //arr[1]=arr[1-2] which is arr[-1] and this is in temp  
    //arr[0]=arr[0-2] which is arr[-2] and this is in temp
    //actually above two lines indicate invalid index because indices should'nt be negative 

    //Step3: Copy temp elemnts into original array
    for(int i=0; i<finalShift;i++){
        arr[i]=temp[i];
    }

}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    cout<<"Before: ";
    printArray(arr,n);
    int shift;
    cout<<"Shift by: "<<endl;
    cin>>shift;
    shiftArray(arr,n,shift);
    cout<<"After: ";
    printArray(arr,n);
    return 0;
}