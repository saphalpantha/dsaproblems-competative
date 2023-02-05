#include <iostream>
#include <string>

using namespace std;


int arr[26] = {0};
char getMaxOcc(string s){
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int num = 0;
        num = ch-'a';
        arr[num]++;
    }

    int maxi = -1;
    int indx = 0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            indx = i;
            maxi = arr[i];
        }
    }
    return indx + 'a';

    
}
int main(){
    string h = "hello";
    char s = getMaxOcc(h);
    cout << s << endl;
}