#include <iostream>
#include <vector>
using namespace std;


    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int col = matrix[0].size();
        int row = matrix.size();
        int total = row*col;    
        int count = 0;
        int sr = 0;
        int ec = col-1;
        int sc = 0;
        int er = row-1;
        // sr => ec;
        while(count<total){
            for(int i=sc;i<=ec && count<total;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;

            for(int i=sr;i<=er && count<total;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;i>=sc && count<total;i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;

            for(int i=er;i>=sr&& count<total;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        // ec => er;
        // ec => sc;
        // er => sr;
        return ans;
    }

int main(){
    
}