#include<iostream>
using namespace std;
void count0sand1s(int arr[],int size){
    int zero=0, one=0;
    for(int i=0;i<size;i++){
        int currEl=arr[i];
        if(currEl==0){
            zero++;
        }
        if(currEl==1){
            one++;
        }
    }
    cout<<"Ones are "<< one<< " and zeros are "<<zero<<endl;

}
int main(){
    int arr[10]={12,98,21,0,1,13,0,1,4,1};
    int size=10;
    count0sand1s(arr,size);
    return 0;
}