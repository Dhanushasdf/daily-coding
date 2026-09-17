

#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
        {
            return x;
        }

        int left = 1;
        int right = x;
        int answer = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (mid <= x / mid)
            {
                answer = mid;
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

    int x = 8;

    cout << sol.mySqrt(x) << endl;

    return 0;
}