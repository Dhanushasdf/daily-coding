
Question: Search in Rotated Sorted Array

You are given an integer array nums that was originally sorted in ascending order but has been rotated at an unknown position.

Given a target value, return its index if it exists in the array. Otherwise, return -1.

You must solve it using Binary Search.

Example 1
Input:
nums = [4, 5, 6, 7, 0, 1, 2]
target = 0

Output:
4
Example 2
Input:
nums = [4, 5, 6, 7, 0, 1, 2]
target = 3

Output:
-1
Example 3
Input:
nums = [1]
target = 1

Output:
0
Solution

At every step, calculate mid.

One side of the rotated array will always be sorted.

Case 1: Left side is sorted
if (nums[left] <= nums[mid])

If the target lies between nums[left] and nums[mid], search left:

right = mid - 1;

Otherwise, search right:

left = mid + 1;
Case 2: Right side is sorted

Otherwise, the right side is sorted.

If the target lies between nums[mid] and nums[right], search right:

left = mid + 1;

Otherwise, search left:

right = mid - 1;
