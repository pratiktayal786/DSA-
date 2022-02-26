// this program is for selection sort 
// in this we will select a number and checks 
// if there any number smaller than it 
// then we just swap both 

#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    vector<int> nums = {2, 13, 1, 5, 4};
    int n = nums.size();

    //outer loop will select the indext 
    //starting from 0
    for(int i = 0; i < n; i++)
    {
        //minimum index 
        int min = i;
        //if there any value which is smaller than the selected min index value
        //then change the value of min to j
        for(int j = i; j < n; j++)
        {
            if(nums[min] > nums[j])
            min = j;
        }
        //swap that index value with the current index at i
        swap(nums[min], nums[i]);
    }

    //printing the vector
    for(int i = 0; i < n; i++)
    cout <<nums[i] <<" ";
}