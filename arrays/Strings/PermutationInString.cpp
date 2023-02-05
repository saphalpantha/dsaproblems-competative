#include <iostream>
#include <string>


using namespace std;



bool checkInclusion(string s1, string s2){
    int test[26] = {0};
    for(int i=0;i<s1.length();i++){
        char ch = s1[i];
        int num = ch - 'a';
        test[num]++;
    }
    int k = s1.length();

    int i = 0;
    int j = k-1;
    int f = 0;
    int sum = 0;
    while(j<s2.length()){
        cout << i << endl;
        while(f<k){
             f = i;
             int ch = s2[f] - 'a';
            //  cout << ch << endl;
             sum += test[ch];
            //  test[ch]  = 0;
             f++;
        }

        cout << sum << endl;
        sum = 0;
        if(sum == k){
            return true;
        }
        else{
            i++;
            j = i+k-1;
        }
    }
    return false;
}
int main(){

    string s1 = "eidbaooo";
    string s2 = "ab";
    cout << checkInclusion(s1, s2) << endl;
}

