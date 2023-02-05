#include <iostream>

#include <vector>
#include <math.h>
using namespace std;


int ArrToNum(vector<int>&arr, int n){
    int rev = 0;
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        rev += arr[i]*pow(10,i);
    }


    for(int i=arr.size();i>=0;i--){
        ans += arr[i]*pow(10,arr.size()-i);
    }
    return ans;
}
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
//     int a = ArrToNum(a, n);
// }


int main(){
    vector<int> v{2,3,4,5,100,4,6};
    int ans =ArrToNum(v, v.size());
    cout << ans << endl;
}