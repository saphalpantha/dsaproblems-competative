#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool isSafe(int x, int y,vector<vector < int >> & arr, vector<vector<int>> visited, int n){
    if((arr[x][y] == 1 )  && visited[x][y] == 0 &&  (x>=0 && x<n) && (y>=0 && y<n)){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x, int y,vector<vector < int >> arr,vector<string>&ans, string path, int n , vector<vector<int>>visited){
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    
    
    visited[x][y] = 1;
    // down
    
    int newX = x+1;
    int newY = y;
    if(isSafe(newX, newY, arr, visited, n)){
        path.push_back('D');
        solve(newX, newY, arr, ans, path, n, visited);
        path.pop_back();
    }
    
    
    // up
       newX = x-1;
        newY = y;
    if(isSafe(newX, newY, arr, visited, n)){
        path.push_back('U');
        solve(newX, newY, arr, ans, path, n,visited);
        path.pop_back();
    }
    
    
      // left
    
       newX = x;
        newY = y-1;
    if(isSafe(newX, newY, arr, visited, n)){
        path.push_back('L');
        solve(newX, newY, arr, ans, path,n,visited);
        path.pop_back();
    }
    
    
     // right
    
        newX = x;
        newY = y+1;
    if(isSafe(newX, newY, arr, visited, n)){
        path.push_back('R');
        solve(newX, newY, arr, ans, path, n,visited);
        path.pop_back();
    }
    
    visited[x][y] = 0;
    
    
    
}
vector <string> searchMaze(vector<vector < int >> & arr, int n) {
    vector<vector < int >>  visited = arr;
    vector<string>ans;
    int srcX = 0;
    int srcY = 0;
    if(arr[srcX][srcY] == 0){
        return ans;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }    
    }
    
    string path = "";

    
    solve(srcX, srcY, arr, ans, path, n, visited);
    return ans;
    
}



// 1 0 0 0 
// 1 1 0 1
// 1 1 0 0
// 0 1 1 1


// 0 1 0 
// 1 0 1 
// 0 0 1 
int main(){
    vector<vector<int>> arr = {{0,1,0 },{1, 0, 1},{0, 0,1}};
    int n = arr.size();
    
    vector<string>ans;
    ans = searchMaze(arr, n);
    for(auto i : ans){
        cout << i << endl;
    }
}