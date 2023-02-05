#include <iostream>
using namespace std;




int main(){
    int  **arr = new int*[4];
        for(int j=0;j<10;j=j+2){
            arr[j] =  new int[j];
        }



    for(int i=0;i<4;i++){
        for(int j=0;j<10;j=j+2){
            cin >> arr[i][j];
        }
    }


    for(int i=0;i<4;i++){
        for(int j=0;j<10;j=j+2){
            cout << arr[i][j] << " " ;
                
        }
        cout << " " << endl;
    }
}