// Similar to Vector only difference is that it gives "front" operations

#include<bits\stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(3);  // {2, 4}

    ls.push_front(5);   // {5, 2, 4}

    ls.emplace_front();
    // Rest functions are same as Vector
}