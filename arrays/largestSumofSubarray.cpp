#include <iostream>
#include <vector>
using namespace std;





int CrossSubArr(vector<int>&arr, int s, int mid , int e){
    int curr_sum = 0;
    int l = mid-1;
    int sum_left = INT_MIN;
    while(l>=s){
        curr_sum += arr[l];
        if(curr_sum>sum_left){
            sum_left = curr_sum;
        }
        l--;

    }

    int sum_right = INT_MIN;
    int r = mid+1;
    curr_sum = 0;
    while(r<=e){
        curr_sum +=  arr[r];
        if(curr_sum>sum_right){
            sum_right = curr_sum;
        }
        r++;
    }
    return sum_left+sum_right-1;
}

int MaxSubArr(vector<int>&arr, int s, int e){
    if(s > e){
        return arr[s];
    }
    int mid = s+(e-s)/2;
    int L = MaxSubArr(arr, s, mid-1);
    int R = MaxSubArr(arr, mid+1, e);
    int C = CrossSubArr(arr, s, mid,e);
}
int main(){
    // vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> arr = {5,4,-1,7,8};
    cout << MaxSubArr(arr, 0, arr.size()) << endl;
}