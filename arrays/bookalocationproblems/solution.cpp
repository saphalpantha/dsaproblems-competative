#include <iostream>
#include <vector>
using namespace std;


/*

given an array 

arr[i] = total pages in books

we have to allocate the book for given no of students(at most 2).such that 

. each student should at least one book
. each student should be allocate
. book allocation should be in contigious manner

nums = [10,20,30,40];
m = no of std = 2;
possible soln = 

*/



bool isPossible(vector<int>&nums, int n, int m , int mid){
    int pagesum = 0;
    int stdcount=1;
    for(int i=0;i<n;i++){
        if(pagesum+nums[i] <= mid){
            pagesum += nums[i];
        }
        else{
            stdcount++;
            if(stdcount > m || nums[i] > mid){
                return false;
            }
            // pagesum = 0;
            pagesum = nums[i];
            
        }
        if(stdcount>m){
            return  false;
        }
        
    }
    return true;
}

int allocateBook(vector<int>&nums, int n, int m){
    int sum = 0;
    int s = 0;
    int mid;
    int ans = -1;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    int e = sum;
    mid = s+(e-s)/2;

    while(s<=e){
    if(isPossible(nums,n,m,mid)){
        ans = mid;
        e = mid-1;

    }
    else{
        s=mid+1;
    }
    mid=  s+(e-s)/2;
    }
    
    return ans;
}

int main(){

    vector<int> nums{10,20,30,40};
    int m = 2;
    int n = nums.size();
    int possibleSoln = allocateBook(nums, n, m);
    cout << possibleSoln << endl;
    return 0;
}