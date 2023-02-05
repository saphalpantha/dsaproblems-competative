#include <iostream>
#include <vector>
using namespace std;

void findDuplicates(vector<int>&arr, vector<int>&arr2){
    int idx;
    for(int i=0;i<arr.size();i++){
        idx = abs(arr[i])-1;
        if(arr[idx]<0){
            arr2.push_back(abs(arr[idx]));
        }
        arr[idx] = -arr[idx];
    }
}

int main(){

    vector<int> arr {1,4,4,2,2,3};
    vector<int> arr2;
    
    findDuplicates(arr, arr2);
    for(int i=0;i<arr2.size();i++){
        cout << arr2[i] << " ";
    }
}