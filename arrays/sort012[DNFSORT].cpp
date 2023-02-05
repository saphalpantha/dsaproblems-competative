#include <iostream>
// #include <algorithm>
#include <vector>
using namespace std;

void sortDNF(vector<int>&arr){
    int l = 0;
    int h = arr.size()-1;
    int mid = 0;
    while(mid<=h){
        if(arr[mid] == 0){
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}




int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sortDNF(arr);
    for(auto i:arr){
        cout << i << endl;
    }
}



// another approach counting


    // void sortColors(vector<int>& nums) {

    //     int counts[3] = {0};
    //     for(int i=0;i<nums.size();i++){
    //         counts[nums[i]]++;
    //     }

    //     for (int i = 0, j = 0; i < 3; i++) {
    //         while (counts[i]-- > 0) {
    //             nums[j++] = i;
    //         }
    //     }
    // }