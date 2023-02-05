#include <iostream>

#include <vector>

using namespace std;

void PrintMatrix(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void TransposeMatrix(vector<vector<int>> &arr)
{
    
    int row = arr.size();
    int col = arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                swap(&arr[i][j], &arr[j][i]);
            }
        }
    }
}

void RotateAnImage(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    TransposeMatrix(arr);
    int s = 0;
    int e = arr[0].size()-1;
    while(s<e){
        for(int i=0;i<row;i++){
            swap(&arr[i][s] , &arr[i][e]);
        }
        s++;
        e--;
    }
    
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    PrintMatrix(arr);
    cout << endl;
    cout << "After Rotate" << endl;
    RotateAnImage(arr);
    PrintMatrix(arr);
}