#include<iostream>
using namespace std;
void diagonalprint(int arr[][3], int m){
    
        for(int j=0; j<m; j++){
                cout<<arr[j][j]<<" ";
            }
}

void colwisePrint(int arr[][3], int m){
    for(int j=0; j<m; j++){
        for(int i=0; i<m; i++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rowwisePrint(int arr[][3], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int m=3;
    int choice;
    cout<< "Enter the choice: "<<endl;
    cin>> choice;
    switch(choice){
        case 1:
        cout<<"Row wise traversal: "<<endl;
        rowwisePrint(arr,m);
        break;
        case 2:
        cout<<"Column wise traversal: "<<endl;
        colwisePrint(arr,m);
        break;
        case 3:
        cout<<"Diagponal wise traversal: "<<endl;
        diagonalprint(arr,m);
        break;
        default:
        cout<<"Exiting";
        break;
    }
    return 0;
}