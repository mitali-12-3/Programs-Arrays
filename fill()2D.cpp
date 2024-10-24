#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<vector<int>> matrix(3, vector<int>(3));
    for (auto &row : matrix) {
        fill(row.begin(), row.end(), 7);
    }
    for (const auto &row : matrix) {
        for (const auto &elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}
