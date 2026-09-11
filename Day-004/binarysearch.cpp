#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {10, 20, 30, 40, 50, 60, 70};
    int target = 50;

    cout << sol.binarySearch(nums, target) << endl;

    return 0;
}