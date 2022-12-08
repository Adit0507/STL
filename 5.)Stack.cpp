// Follows LIFO (Last In First Out)

#include<bits\stdc++.h>
using namespace std;

void explainStack() {
    stack<int> S;

    S.push(1);  // {1}
    S.push(2);  // {2, 1}
    S.push(3);  // {3, 2, 1}
    S.push(3);  // {3, 3, 2, 1}
    S.emplace(5);    // {5,3,3,2,1}   

    cout << S.top(); //5

    S.pop(); // {3, 3, 2, 1}
    cout << S.size();   // 4

    cout << S.empty(); // false

    stack<int> s1, s2;
    s1.swap(s2);
}