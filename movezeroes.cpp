#include <iostream>
#include <vector>
using namespace std;
// Function to move all zeroes to the end of the array
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int count = 0; // Count of non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[count++] = nums[i];
        }
    }

    // Fill the remaining positions with zeroes
    while (count < n) {
        nums[count++] = 0;
    }
}
// Function to print the array      
void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}
// Main function    
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    cout << "Original array: ";
    printArray(nums);

    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    printArray(nums);

    return 0;
}