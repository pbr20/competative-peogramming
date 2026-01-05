#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    queue<int> q;//FIFO //TC-O(1)
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}