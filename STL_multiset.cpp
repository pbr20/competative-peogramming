#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
    multiset <int> s = {1,2,3,1,1,2,1,4,3,2,1}; //log2N
    for(auto u : s)cout<<u<<" "; cout<<endl;
    cout<<s.count(1)<<endl; //in set it will give 1 if exist coz unique but here it will give the actual count
    s.erase(1); //erase all the occuaramce
    for(auto u : s)cout<<u<<" "; cout<<endl;
    //to delete a single occurance 
    auto it = s.find(2);
    s.erase(it); 
    for(auto u : s) cout<<u<<" "; cout<<endl;
    return 0;
}