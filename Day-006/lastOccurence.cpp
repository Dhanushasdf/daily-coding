#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int lastOccurence(vector<int>& nums, int target)
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
				left = mid + 1;
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
	vector<int> nums = {1, 2, 3, 4, 4, 4, 5};
	int target = 4;
	Solution sol;
	cout << sol.lastOccurence(nums, target) << endl;
	return 0;
}