#include <iostream>
#include <vector>

using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int j=0;j<mCols;j++){
        if(j&1){
            for(int i=nRows-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i=0;i<nRows;i++){
                ans.push_back(arr[i][j]);
                // cout << arr[i][j] <<endl;
            }
        }
    }
   return ans;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> arr = {1,2,3,4,5,6,7,8,9};
    wavePrint(arr,3,3);
    
    
}

