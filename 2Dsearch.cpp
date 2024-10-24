//LINEAR SEARCH
#include<iostream>
using namespace std;
bool array2Dsearch(int arr[][3], int r, int c, int t){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==t){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[2][3]={
       {10, 20, 30},
       {40, 50, 60}
    };
    int rowSize=2;
    int colSize=3;
    int target=30;
    bool res= array2Dsearch(arr,rowSize,colSize,target);
    if(res){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
    return 0;
}