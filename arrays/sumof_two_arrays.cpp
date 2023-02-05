#include<iostream>
#include <vector>
#include <math.h>
#include<algorithm>

using namespace std;
int getNum(vector<int>&a){
    int ans = 0;
    int k  = 0;
    for(int i=a.size()-1;i>=0;i--){
        ans += a[i]*pow(10,k);
        k++;
    }
    return ans;
    
}

vector<int> getDigit(int num){
    vector<int>ans;
    while(num!=0){
    int digit = num%10;
    ans.push_back(digit);    
    num = num/10;

    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int x = getNum(a);
    int y = getNum(b);
    int sum = x+y;
    cout << sum << endl;
    vector<int>ans = getDigit(sum);
    return ans;
    
}

int main(){

    vector<int>nums1{1,2,3,4,5};
    vector<int>nums2{1,2,3,4,5};
    vector<int>test = findArraySum(nums1,nums1.size(), nums2, nums2.size());
    for(auto i:test){
        cout << i << endl;
    }
    // int num = getNum(nums);
    
}