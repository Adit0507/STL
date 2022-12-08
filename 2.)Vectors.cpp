#include <bits\stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;

    // emplace_back is faster than push_back()
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({3, 3});
    vec.emplace_back(1,2);

    vector<int> A(5, 20);  // {20 20 20 20 20}

    vector<int>::iterator it = v.begin();
    it++;
    // * is used to access the memory
    cout << *(it) << " ";

    it += 2;
    cout <<*(it) << " ";
    

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " <<v.at(0);

    cout << v.back() << " ";

    for(vector<int>::iterator it= v.begin(); it !=v.end(); it++)
        cout << *(it) << " ";

    for(auto it= v.begin(); it !=v.end(); it++)
        cout << *(it) << " ";

    for(auto it: v)
        cout << it << " ";

    // Remove elements from a container from a position or range
    v.erase(v.begin() + 1);
    v.erase(v.begin() +2, v.begin() + 5);    // (start, end) => SPECIFYING A RANGE

    // Insert function
    vector<int> B(2,100);   // {100, 100}
    B.insert(B.begin(), 300);   // {300, 100, 100}
    B.insert(B.begin() +1, 2, 10);  // {300, 10, 10, 100, 100}

    vector<int> copy(2,70);     // {70, 70}   
    v.insert(B.begin(), copy.begin(), copy.end());  // {70, 70, 300, 10, 10, 100, 100}

    v.clear()   // Erases everything
}