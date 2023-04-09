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
    // STUDENT...TODOS      

}
 
int main()
{
    /*Test cases
    {1, 3,3, 4, 2};
    {1, 1};
    {1, 6, 5, 6, 8, 9, 3, 4, 7, 2};
    {2, 1, 3, 4, 2}
    */
    vector<int> nums= {2, 1, 3, 4, 2};
    
    cout<<"The duplicate element = ";
    cout<<findDuplicate(nums);
    return 0;//
}
