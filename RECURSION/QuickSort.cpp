#include <iostream>
#include <vector>

using namespace std;



int partition(vector<int>&arr, int s, int e){
    int pivot = arr[s];
    int c = 0;
    int i = s;
    int j = e;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot ){
            c++;
        }
    }
    int pivotIndex = s+c;
    swap(arr[pivotIndex],arr[s]);

 
    while(i<=pivotIndex && j>=pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >= pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}


void QuickSort(vector<int>&arr, int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);


}

int main(){
    vector<int> arr = {5,4,3,2,1};
    QuickSort(arr,0, arr.size()-1);
    for(auto i:arr){
        cout << i << endl;
    }
}