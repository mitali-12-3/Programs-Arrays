#include<iostream>
using namespace std;
int main(){
    int arr[3][2]= {
        {7,8},
        {4,2},
        {5,0}
    };
    int rowSize=3;
    int colSize=2;
    for(int rowIndex=0; rowIndex< rowSize; rowIndex++ ){
        for(int colIndex=0; colIndex<colSize;colIndex++){
            cout<< arr[rowIndex][colIndex]<<" ";
        }
        cout<<endl;
    }
   // cout<< arr[1][1]<<endl;
    return 0;
}