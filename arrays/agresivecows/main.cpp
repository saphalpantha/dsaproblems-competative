#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

GIVEN = ARRAY of distance between cows stall
k = no of agresive cows

Now we have to place the cows such that they not get agress

for this 

we have to find the maximum value of minimum distance between the stall


*/




bool isPossible(vector<int> &nums, int n, int mid, int k){
    int cow_count=1;
    int lastStall = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]-lastStall >= mid){
            cow_count++;
            if(cow_count == k){
                return true;
            }
            lastStall = nums[i];
            
        }   
    }
    return false;
}

int agressiveCows(vector<int> &nums, int k){
    std::sort(nums.begin(), nums.end());
    int s = 0;
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<nums.size();i++){
        maxi = max(maxi, nums[i]);
    }
    int e = maxi;
    // cout << maxi;
    int mid =  s+(e-s)/2;
    while(s<=e){
        if(isPossible(nums, nums.size(), mid, k)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> nums{4 ,2 ,1 ,3 ,6};
    int k = 2;
    int soln = agressiveCows(nums,k);
    cout << "soln " << soln << endl;
    return 0;
}