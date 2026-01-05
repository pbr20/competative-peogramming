#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    priority_queue<int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    priority_queue<int , vector<int> , greater<int>> q; //will sort in accending order
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(4);
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }cout<<endl;
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pl;
    pl.push({1,2});
    pl.push({4,3});
    pl.push({2,2});
    pl.push({9,1});
    pl.push({4,4});
    pl.push({1,1});

    while(!pl.empty()){
        cout<<pl.top().first<<" "<<pl.top().second<<endl;
        pl.pop();
    }


    return 0;
}