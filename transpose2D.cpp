#include<iostream>
using namespace std;

void method1(int arr[][3], int rowSize, int colSize) {
    int ans[100][100];  
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            ans[j][i] = arr[i][j];
        }
    }

    // Printing the transposed matrix
    cout << "Transposed Matrix (new array):\n";
    for(int i = 0; i < colSize; i++) {
        for(int j = 0; j < rowSize; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// Transpose in-place (modifies the original array)
void method2(int arr[][3], int rowSize, int colSize) {
    for(int i = 0; i < rowSize; i++) {
        for(int j = i + 1; j < colSize; j++) {  // Start at `j = i + 1` to avoid re-swapping
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << "Transposed Matrix (in-place):\n";
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };  
    int rowSize=3, colSize=3;
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Transpose of a matrix: by making a new array\n";
        cout << "2. Transpose of a matrix: by NOT making a new array\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                method1(arr, rowSize, colSize);
                break;
            case 2:
                method2(arr, rowSize, colSize);
                break;
            case 3:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }

    } while(choice != 3);

    return 0;
}
