#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);
    dq.push_back(8);
    cout<<dq.size()<<endl;
    while(!dq.empty()){
        cout<<dq.front()<<" "<<dq.back()<<endl;
        dq.pop_front();
        dq.pop_back();
    }

    return 0;
}