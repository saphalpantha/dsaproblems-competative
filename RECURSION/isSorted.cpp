#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;   
    }
    else{
        bool ans = isSorted(arr+1 ,size-1);
        return ans;
    }
}
int main(){
     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     bool isort =  isSorted(arr, 10);
     cout << isort << endl;
}