/*
file name: Assignment4_p2.cpp
Written by: 
Date:

*/

/*
*** find a duplicate element in a limited range array***
*/

#include <iostream>
#include <vector>
using namespace std;

/*
*** function to find  a duplicate element in an array***
*/
int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    // iterate through the array
    for (int i = 0; i < n; i++) {
        // get the index of the current element
        int index = abs(arr[i]) - 1;
        // if the element at the current index is negative, then it has already been visited
        if (arr[index] < 0) {
            // return the absolute value of the current element
            return abs(arr[i]);
        }
        // mark the current element as visited by negating its value
        arr[index] = -arr[index];
    }
    return -1;  // duplicate not found  

}
 
int main()
{
    // test cases
    vector<int> nums1 = {1, 3, 3, 4, 2};
    vector<int> nums2 = {1, 1};
    vector<int> nums3 = {1, 6, 5, 6, 8, 9, 3, 4, 7, 2};
    vector<int> nums4 = {2, 1, 3, 4, 2};
    
    // run the tests
    cout << "Test case 1: " << findDuplicate(nums1) << endl;  // output: 3
    cout << "Test case 2: " << findDuplicate(nums2) << endl;  // output: 1
    cout << "Test case 3: " << findDuplicate(nums3) << endl;  // output: 6
    cout << "Test case 4: " << findDuplicate(nums4) << endl;  // output: 2
    
    return 0;//
}
