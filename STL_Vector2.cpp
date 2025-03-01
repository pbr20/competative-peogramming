#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> A = {1, 4, 1, 5, 6, 3, 2, 2, 6, 2, 1};
    sort(A.begin(), A.end());                        // time complexicity O(Nlog2N)
    int sz = unique(A.begin(), A.end()) - A.begin(); // return the size of the vector after removing the duplicate elements
    cout << sz << endl;                              // time complexicity O(N)        total O(Nlog(N)) //remove the duplicate elements from the vector and replace the duplicate elements with the next element
    for (int i = 0; i < sz; i++)
        cout << A[i] << " ";
    cout << endl;

    // to find the maximum element in the vector
    vector<int>::iterator it = max_element(A.begin(), A.end());
    cout << *it << endl;
    // easy way
    cout << *max_element(A.begin(), A.end()) << endl; // time complexicity O(N)
    A = {1, 4, 1, 5, 6, 3, 2, 2, 6, 2, 1};
    int n = max_element(A.begin(), A.begin() + 4) - A.begin(); // find the maximum element index in the first 4 elements
    cout << n << endl;
    // to find the minimum element in the vector
    cout << *min_element(A.begin(), A.end()) << endl;

    // 2d vector
    vector<vector<int>> v;
    vector<int> a1 = {1, 4, 6};
    vector<int> a2 = {3, 7, 9, 12};
    v.push_back(a1);
    v.push_back(a2);
    for (auto x : v)
    {
        for (auto y : x)
            cout << y << " ";
    }
    cout << endl;
    return 0;
}