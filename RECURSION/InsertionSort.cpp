#include <iostream>




using namespace std;


void InsertSort(int *arr, int size){
    int i = 1;
    int j = i-1;
    if(size == 0){
        return;
    }
    int temp = arr[i];
    for(;j>=0;j--){
        if(arr[j] < arr[j+1]){
            arr[j+1] = arr[j];
        }
        arr[j] = temp;
    }
    InsertSort(arr, --size);

}

int main(){
    int arr[5] = {5,4,3,2,1};
    InsertSort(arr,5);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}