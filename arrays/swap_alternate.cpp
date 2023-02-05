#include <iostream>


using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_alter(int arr[], int size){
    int j;
    for(int i=0;i<size-1;i+=2){
        j = i+1;
        swap(&arr[i], &arr[j]);
    }
}


void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,20};
    swap_alter(arr, 10);
    display(arr, 10);

    return 0;
}


