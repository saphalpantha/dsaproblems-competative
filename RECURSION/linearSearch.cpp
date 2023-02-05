#include <iostream>

using namespace std;

bool search(int *arr, int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key ){
        return true;
    }
    return search(arr+1, size--, key);
    

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size =5;
    int key = 10;
    cout << "is present" << search(arr  , size, key); 
}