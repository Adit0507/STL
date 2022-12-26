// Used to store only keys
// Stores everything in sorted order
// Each value is unique

#include <bits\stdc++.h>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1,2, 4}
    st.insert(3); // {1,2, 3,4}

    // Insert of vector can also be used, it increaes efficiency

    // {1,2,3,4,5}
    auto it = st.find(3);

    st.erase(5);    // Erases 5 

    int cnt = st.count(1);  // If it exist will give 1, else 0

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    // lower_bound and upper_bound() works in the same way as vector does
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet(){
    // Stores duplicate elements also
    // Rest functions are same as set

    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.insert(1);   // {1,1}    
    ms.insert(1);   // {1,1, 1}    
    
    ms.erase(1);    // Erases all 1's

    int cnt = ms.count(1);

    // Only single 1 is erased
    ms.erase(ms.find(1));
    
}