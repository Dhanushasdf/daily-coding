Question: Find the Last Occurrence

Given a sorted array and a target value, return the index of the last occurrence of the target.

If the target is not present in the array, return -1.

Example 1
Input:
nums = [1, 2, 2, 2, 3, 4, 5]
target = 2

Output:
3
Example 2
Input:
nums = [1, 2, 3, 4, 5]
target = 6

Output:
-1
Solution

The idea is similar to finding the first occurrence.

When we find the target, we don't return immediately. We save the current index and continue searching toward the right side.

answer = mid;
left = mid + 1;

This allows us to find a later occurrence.
