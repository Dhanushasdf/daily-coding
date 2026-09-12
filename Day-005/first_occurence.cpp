#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int firstOccurence(vector<int>& nums, int target)
	{
		int left = 0;
		int right = nums.size() - 1;
		int answer = -1;
		
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			
			if (nums[mid] == target)
			{
				answer = mid;
				right = mid - 1;
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
		return answer;
	}
};


int main()
{
	Solution sol;
	
	vector<int> nums = {1, 2, 2, 3, 4, 5};
	int target = 2;
	
	int result = sol.firstOccurence(nums, target);
	cout << "First occurrence of " << target << " is at index: " << result << endl;
}