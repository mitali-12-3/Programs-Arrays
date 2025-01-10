#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    // Function to find the first occurrence of the target
    void findFirstOccurrence(vector<int>& nums, int n, int target, int &ansIndex) {
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ansIndex = mid; // Found potential first occurrence
                e = mid - 1;    // Search on the left
            } else if (nums[mid] < target) {
                s = mid + 1;    // Search on the right
            } else {
                e = mid - 1;    // Search on the left
            }
        }
    }

    // Function to find the last occurrence of the target
    void findLastOccurrence(vector<int>& nums, int n, int target, int &ansIndex) {
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ansIndex = mid; // Found potential last occurrence
                s = mid + 1;    // Search on the right
            } else if (nums[mid] < target) {
                s = mid + 1;    // Search on the right
            } else {
                e = mid - 1;    // Search on the left
            }
        }
    }

    // Function to return the range of the target in the array
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccIndex = -1, lastOccIndex = -1;
        int n = nums.size();
        findFirstOccurrence(nums, n, target, firstOccIndex);
        findLastOccurrence(nums, n, target, lastOccIndex);

        return {firstOccIndex, lastOccIndex};
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Input: Array of numbers and target value
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    // Call the searchRange method
    vector<int> result = solution.searchRange(nums, target);

    // Output the result
    cout << "First Occurrence Index: " << result[0] << endl;
    cout << "Last Occurrence Index: " << result[1] << endl;

    return 0;
}
