#include<iostream>
#include<vector>
using namespace std;

class Linear_Search{
public:
    bool linearSearch(vector<int>&nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                return true;
            }
        }
        
        return false;
    }
};

int main()
{
    Linear_Search ls;

    vector<int> nums = {10,20,30,50};
    int target = 30;

    cout << ls.linearSearch(nums, target) <<endl;

    return 0;
}