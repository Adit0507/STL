// Map stores unique keys in sorted order

#include <bits\stdc++.h>
using namespace std;

void explainMap(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,2});

    mpp.insert({2, 4});

    mpp[{2,3}] = 10;  // 10 is being stored in 2 and 3


    for(auto it: mpp){
        cout << it.first << " " <<it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}

void explainMutliMap(){
    // same as Map, only it can store multiple keys
    // mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // same as Set and unordered_set difference
}    

bool comp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+ 4);    

    sort(a, a+n, greater<int>); // Just reverse
    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it acc. to second element
    // if second element is same, then sort
    // it acc. to first element but in descending
    sort(a, a+n, comp);
    // {4,1} {2,1} {1,2}

    int num= 7;
    int cnt = __builtin_popcountll();

    long long num = 23829931112;

    string s= "123";

    do{
        cout << s<< endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n);
}