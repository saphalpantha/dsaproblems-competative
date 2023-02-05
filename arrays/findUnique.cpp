#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


int get_unique(int arr[], int size){
    int unique = 0;
    for(int i=0;i<size;i++){
        unique = unique ^ arr[i];
    }
    return unique;
}

int main()
{
    int arr[9] = {2, 2, 3, 3, 5, 7, 7, 8,8};
    cout << get_unique(arr, 9) << " ";
    
}