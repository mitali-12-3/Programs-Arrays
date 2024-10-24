#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printing(vector<vector<int>> arr, int rowSize, int colSize) {
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool linearSearch(vector<vector<int>> arr, int rowSize, int colSize, int search) {
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            if(arr[i][j] == search)
                return true;
        }
    }
    return false;
}

int min2D(vector<vector<int>> arr, int rowSize, int colSize) {
    int minimum = INT_MAX;
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            minimum = min(arr[i][j], minimum);
        }
    }
    return minimum;
}

int max2D(vector<vector<int>> arr, int rowSize, int colSize) {
    int maximum = INT_MIN;
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            maximum = max(arr[i][j], maximum);
        }
    }
    return maximum;
}

int main() {
    vector<vector<int>> arr(2, vector<int>(3, 0));
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    // Input elements into the 2D array
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            cout << "Enter for (" << i << "," << j << ") ";
            cin >> arr[i][j];
        }
    }

    int choice;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Print array\n";
        cout << "2. Linear search\n";
        cout << "3. Find maximum element\n";
        cout << "4. Find minimum element\n";
        cout << "-1. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                printing(arr, rowSize, colSize);
                break;
            }
            case 2: {
                cout << "LINEAR SEARCH\n";
                int search;
                cout << "Enter number you want to search: ";
                cin >> search;
                bool res = linearSearch(arr, rowSize, colSize, search);
                if(res) {
                    cout << "PRESENT\n";
                }
                else {
                    cout << "Not present\n";
                }
                break;
            }
            case 3: {
                cout << "Finding minimum:\n";
                int r = min2D(arr, rowSize, colSize);
                cout << "Minimum element is: " << r << endl;
                break;
            }
            case 4: {
                cout << "Finding maximum:\n";
                int r = max2D(arr, rowSize, colSize);
                cout << "Maximum element is: " << r << endl;
                break;
            }
            case -1:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }

    } while(choice != -1);

    return 0;
}
