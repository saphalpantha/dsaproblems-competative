#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

bool isValid(string s1)
{
    sort(s1.begin(), s1.end());
    int mid = s1.size() / 2;
    int i = mid;
    int j = mid + 1;
    while (i >= 0 && j < s1.size()){
        if(s1[i] == s1[j]){
            i--;
            j++;
        }
        else{
            return false;
        }


    }
}

int main()
{

    string s1 = "[()]";
    cout << isValid(s1) << endl;
    return 0;
}