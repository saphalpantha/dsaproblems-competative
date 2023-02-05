#include <iostream>
#include <vector>
#include <deque>
#include<list>
#include <stack>
#include <string>
#include <queue>
#include <set>
#include <iterator>
#include <map>


// algorithm

#include <algorithm>
using namespace std;



// int main(){
//     vector<int> v(INT_MAX, 0 );

//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
//     v.clear();

//     cout << v.size() << endl;
//     cout << v.capacity() << endl;
    
// }



// deque


// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);

//     for(int i:d){
//         cout << i << endl;
//     }

//     d.pop_front();
//     d.pop_back();

//     for(int i:d){
//         cout << i << endl;
//     }

//     // int firstIndex = d.at(1);

//     cout << "empty or not" << d.empty() << endl;
//     d.erase(d.begin(), d.end());
//     cout << "size  " << d.size() << endl;
// }



// lists

// default list =  doubly link list
// int main(){
//     list<int> l;
//     list<int> cp_l(l);
//     list<int> nl(5,100); // 100 100 100 100 100
//     l.push_front(2);
//     l.push_back(3);


//     for(int i:l){
//         cout << i << endl;
//     }
//     l.erase(l.begin());

// }


// stack


// int main(){
//     stack<string> s;
//     s.push("killer");
//     s.push("hello");
//     cout << s.top() << endl;
//     cout << s.size() << endl;
//     cout << "empty or not  " << s.empty() << endl;
// }

//queue


// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout << q.front() << endl;
//     cout << q.size() << endl;
// }


// priority queue


// int main(){
//     priority_queue<int> maxi; // default max heap

//     priority_queue<int , vector<int>, greater<int>> mini; // creation of min heap;

//     maxi.push(4);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(1);


//     for(int i=0;i<maxi.size();i++){
//         cout << maxi.top() << endl;
//         maxi.pop();
//     }



//     mini.push(4);
//     mini.push(2);
//     mini.push(3);
//     mini.push(1);


//     for(int i=0;i<mini.size();i++){
//         cout << mini.top() << endl;
//         mini.pop();
//     }
// }



// set
// In set if 5 element inserted 5 times then set only include one 5

// ordered set  = sorted order

// unordered set = random order

// based on bst
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(5);

//     for(auto i:s){
//         cout << i << endl;
//     }

//     // s.erase(s.begin()) // s.begin() is a iterator
//     // using iterator

//     // set<int>::iterator it = s.begin();
//     // i++;
//     // s.erase(it)

//     cout << "is 5 is present in set" << s.count(5) << endl;

//     set<int>::iterator itr = s.find(5);

//     cout << "value present at itr " << *itr << endl;
// }




// map

// data stored in key value  // like js objects and python dict




// map is sorted 

// unorderedmap = unsortred

//  time compexity = o(logn)

// stablize by red black tree

// in unordermap time complexity is 0(1) it uses hashmap
// int main(){
//     map<int, string> m; 
//     m[1] = "saphal";
//     m[2] = "killer";
//     m[13] = "hancy";


//     m.insert({5,"bheem"});
//     for(auto i: m){ 
//         cout << i.first  << " " << i.second  << endl;
//     }

//     cout << "find 13 in map ? " << m.count(13) << endl; 
//     cout << "find -13 in map ? " << m.count(-13) << endl; 

//     cout << "after erase " << endl;

//     m.erase(m.erase(13));
//     cout << "find 13 in map ? " << m.count(13) << endl; 


//     // iterator

//     auto it = m.find(5);
//     for(auto i =it; i!=m.end();i++){
//         cout << (*i).first << endl;
//     }


// }




///////////////////////////// algorithmm


int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    /// using binary search


    cout << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "lower bound" << lower_bound(v.begin(), v.end(), 4)-v.begin() << endl;


    int a = 10;
    int b = 20;
    cout << "max" << max(a,b) << endl;
    cout << "min" << min(a,b) << endl;

    swap(a,b);
    cout << a << " " <<  b << endl;
 
    string s = "abcd";
    reverse(s.begin(), s.end());

    cout << s << endl;


    //rotating a vector;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "after rotate" << endl;
    for(auto i : v){
        cout << i << endl;
    }


    sort(v.begin(), v.end());
    
    cout << "after sort" << endl;
    for(auto i : v){
        cout << i << endl;
    }



}