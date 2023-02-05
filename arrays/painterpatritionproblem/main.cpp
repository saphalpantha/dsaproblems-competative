#include <iostream>
#include <vector>
using namespace std;


bool isPossible(vector<int> &nums, int mid, int k){
    int noofpainter = 1;
    int blockSum = 0;
    for(int i=0;i<nums.size();i++){
        if(mid>=nums[i]+blockSum){
            blockSum += nums[i];
        }
        else{
            noofpainter++;
            if(noofpainter>k || nums[i] > mid){
                return false;
            }
            blockSum = 0;
            blockSum = nums[i];
        }

    }
    return true;
}

int findLargestMinDistance(vector<int> &nums, int k){
    int s = 0;
    int sum = 0;
    int e = 0;
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }
    e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(nums, mid,  k)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    vector<int> nums{10,20,30,40};
    int k = 2;
    int largestofmindistance = findLargestMinDistance(nums, k);
    cout << "largest of min distance " << largestofmindistance << endl;
}