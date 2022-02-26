// this program will give you the bubble sort algo

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {20, 42, 54, 11, 35};
    int n = nums.size();

    // outer loop which will take a one element at a time 
    for(int i = 0; i < n; i++)
    {
        // inner loop will go from 0 to n-i as at every outer loop iteration 
        // we get the last value at its correct position
        // so we decrease the length of the search
        for(int j = 0; j < n -i -1; j++)
        {
            // it checks if there is any number smaller than the current number 
            // if yes then it will swap 
            // otherwise the number is at its correct position
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout <<nums[i] <<" ";
    }
    return 0;
}