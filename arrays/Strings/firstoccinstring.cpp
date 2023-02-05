#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int strStr(string haystack, string needle)
{
    int j = 0;
    int len = haystack.length() - 1;
    int index = 0;
    for (int i = 0; (i <= len) && j <= len;)
    {
        j = i + j - 2;
        auto p =  find(haystack.begin(), haystack.end(), needle);
        if(p!= haystack.end()){
        cout << "found substring at " << (distance(haystack.begin(), p)) << endl;
    }
        i = j;
    }
    return index;
}

int main(){
    string s1 = "sadbutsad";
    string s2 = "sad";
    int index = strStr(s1, s2);
    cout << index << endl;
    return 0;
}