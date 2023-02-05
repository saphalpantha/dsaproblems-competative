
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == target - nums[j])
            {
                ans.push_back(min(i, j)); // we have to push index not number
                ans.push_back(max(i, j));
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums{1,2,3,4,5};
    vector<int>ans;
    ans = twoSum(nums,5);
    for(int i=0;i<ans.size();i++){
        cout << "--------" << endl;
        cout << ans[i] << " ";
    }
}