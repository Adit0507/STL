#include <bits\stdc++.h>
using namespace std;

//  Pairs
void explainPair(){
        // {1,3} is stored in p
        pair<int, int> p = {1, 2};

        cout << p.first << " " << p.second;     // 1 2 

        pair<int, pair<int, int>> q = {1, {2, 3}};

        cout << q.first << " " << q.second.first << " " << q.second.second;     // 1 2 3

        pair<int, int> A[] = {{1, 2}, {3, 4}, {5, 6}};

        cout << A[1].second;    // 4
}

void main(){
    
}