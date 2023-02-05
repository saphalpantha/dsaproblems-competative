
#include <iostream>

using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int i = start, j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            i++;
        } else {
            int temp = arr[j];
            for (int k = j; k > i; k--) {
                arr[k] = arr[k-1];
            }
            arr[i] = temp;
            i++;
            mid++;
            j++;
        }
    }
}

int mergeSort(int arr[], int start, int end) {
    if (start >= end) return;

    int mid = (start + end) / 2;
    long long inv = 0;
    inv += mergeSort(arr, start, mid);
    inv += mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {0,5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
