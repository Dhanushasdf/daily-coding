Question: Find Peak Element

Given an integer array nums, find a peak element.

A peak element is an element that is greater than its neighbors.

Return the index of any peak element.

You can assume that nums[-1] = nums[n] = -∞.

You must solve it using Binary Search.

Example 1
Input:
nums = [1, 2, 3, 1]

Output:
2

Because:

nums[2] = 3

and 3 is greater than both neighbors 2 and 1.

Example 2
Input:
nums = [1, 2, 1, 3, 5, 6, 4]

Output:
5

nums[5] = 6 is a peak.

Solution

We compare nums[mid] with nums[mid + 1].

If:
nums[mid] < nums[mid + 1]

We're going uphill, so a peak must exist on the right side.

left = mid + 1;
Otherwise:
nums[mid] > nums[mid + 1]

We're going downhill, so a peak exists at mid or somewhere on the left.

right = mid;

When:

left == right

we have found a peak.
