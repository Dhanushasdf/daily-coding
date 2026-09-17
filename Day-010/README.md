Question: Find the Square Root

Given a non-negative integer x, return the integer square root of x.

The integer square root is the largest integer n such that:

n * n <= x

Do not use sqrt().

Example 1
Input:
x = 16

Output:
4
Example 2
Input:
x = 8

Output:
2

Because:

2 * 2 = 4 <= 8
3 * 3 = 9 > 8

So the answer is 2.

Example 3
Input:
x = 25

Output:
5
Solution

We can use Binary Search between:

left = 1
right = x

For every mid:

If mid * mid == x → return mid
If mid * mid < x → move right
If mid * mid > x → move left

If there is no perfect square, keep track of the largest valid value.
