#include <iostream>
#include<vector>

using namespace std;

class Solution 
{
	public:
		int search(vector<int>& nums, int target)
		{
			int left = 0;
			int right = nums.size() - 1;
			
			while(left <= right)
			{
				int mid = left + (right - left) / 2;
				
				if(nums[mid] == target)
				{
					return mid;
				}
				
				// Left side is sorted
				if(nums[left] <= nums[mid])
				{
					if(target >= nums[left] && target < nums[mid])
					{
						right = mid - 1;
					}
					else
					{
						left = mid + 1;
					}
				}
				// Right side is sorted
				else
				{
					if(target > nums[mid] && target <= nums[right])
					{
						left = mid + 1;
					}
					else
					{
						right = mid - 1;
					}
				}
			}
			return -1; // Target not found
		}
};


int main() {
	Solution solution;
	vector<int> nums = {4,5,6,7,0,1,2};
	int target = 0;
	int result = solution.search(nums, target);
	cout << "Index of " << target << " is: " << result << endl;
	return 0;
}