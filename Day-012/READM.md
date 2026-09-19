Question: Find First and Last Position of Element

Given a sorted array of integers nums and a target value, find the starting and ending position of the target.

If the target is not present, return [-1, -1].

You must solve it using Binary Search.

Example 1
Input:
nums = [5, 7, 7, 8, 8, 10]
target = 8

Output:
[3, 4]
Example 2
Input:
nums = [5, 7, 7, 8, 8, 10]
target = 6

Output:
[-1, -1]
Example 3
Input:
nums = []
target = 0

Output:
[-1, -1]
Solution

We already learned how to find:

First occurrence
Last occurrence

So we combine both.

First, find the first position:

int first = firstOccurrence(nums, target);

Then find the last position:

int last = lastOccurrence(nums, target);

If the first position is -1, the target doesn't exist.
