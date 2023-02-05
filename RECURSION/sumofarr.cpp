#include <iostream>


using namespace std;



int sumArr(int *arr, int size){
    // int sum = 0;
    if(size  == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int sum = arr[0]+ sumArr(arr+1 , size-1);
    return sum;
    // cout << sum << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    cout << "sum is" << sumArr(arr, 5);
    // sumArr(arr, 4);
}