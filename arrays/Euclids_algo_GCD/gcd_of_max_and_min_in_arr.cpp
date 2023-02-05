
#include <iostream>
using namespace std;
#include <vector>
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int findGCD(vector<int> &nums)
{
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int maxim = max(nums[i], maxi);
        if (maxim > maxi)
        {
            maxi = maxim;
        }
    }

    int mini = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        int minim = min(nums[i], mini);
        if (mini > minim)
        {
            mini = minim;
        }
    }
    return gcd(mini, maxi);
}