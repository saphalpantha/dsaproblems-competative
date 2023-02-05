#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int firstOcc(vector<int>&arr, int key){
        int s = 0, e = arr.size()-1;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(key<arr[mid]){
                e = mid -1;
            }
            else if(key == arr[mid]){
                ans = mid;
                e  = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

    int lastOcc(vector<int>&arr, int key){
        int s = 0, e=arr.size()-1;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(key<arr[mid]){
                e = mid-1;
            }
            else if(key == arr[mid]){
                ans = mid;
                s  = mid+1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums, target);
        int last = lastOcc(nums , target);
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        // cout << first << "------" << last << endl;
        return ans;
    }
};

int main(){
    vector<int>nums{1,2,3,3,4,5};
    vector<int>ans;
    Solution s;
    ans = s.searchRange(nums, 3);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " " << endl;
    }
}