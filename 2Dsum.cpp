#include<vector>
#include<iostream>
using namespace std;
void rowSum(vector<vector<int>>arr, int rowSize, int colSize){
    for(int i=0;i<rowSize;i++){
        int sum=0;
        for(int j=0;j<colSize;j++){
            sum+=arr[i][j];
        }
        cout<<"Row "<<i<<": ";
        cout<<sum<<endl;
    }
}

void colSum(vector<vector<int>>arr, int rowSize, int colSize){
    for(int j=0;j<colSize;j++){
        int sum=0;
        for(int i=0;i<rowSize;i++){
            sum+=arr[i][j];
        }
        cout<<"Col "<<j<<": ";
        cout<<sum<<endl;
    }
}

int main(){
    vector<vector<int>>arr(3,vector<int>(4,0));
    cout<<"Inserting elements:"<<endl;
    int rowSize=arr.size();
    int colSize=arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cin>>arr[i][j];
        }
    }
    int choice;
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Row wise sum"<<endl;
        cout<<"2. Column wise sum"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            {
                cout<<"Row wise sum"<<endl;
                rowSum(arr,rowSize,colSize);
                break;
            }
            case 2:
            {
                cout<<"Column wise sum"<<endl;
                colSum(arr,rowSize,colSize);
                break;
            }
            case 3:
            {
                cout<<"Exiting now";
                break;
            }
            default:
                cout<<"Invalid";
                break;
        }
    }while(choice!=3);
    return 0;
}