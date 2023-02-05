#include <iostream>
using namespace std;

void SelectionSort(int *arr, int size){
    if(size == 0 || size == 1){
        return;
    }
    int indx = 0;
    for(int i=1;i<size;i++){

    if(arr[i]<arr[indx]){
        indx = i;
    }
    }
    swap(arr[0], arr[indx]);
    SelectionSort(arr+1, --size);
}


int main(){
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    SelectionSort(arr, 5);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}