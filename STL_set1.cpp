#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
    set<int> s1 = {1,4,2,1,1,2,3,3}; //log2N
    set<int>::iterator it;
    for(it=s1.begin(); it!=s1.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    s1.clear();
    cout<<s1.empty()<<endl;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(2);
    s1.insert(3);
    s1.insert(2);
    for(auto x : s1)cout<<x<<" "; cout<<endl;
    cout<<s1.count(2)<<endl; //if exist then print 1 coz set make all unique
    //to access we can access only first and last value
    cout<<*s1.begin()<<endl;
    cout<<*(--s1.end())<<endl;
    // in set we can't add or sub from begin end r ,r but ++ poissble
    //erase
    s1.erase(2);
    for(auto u : s1)cout<<u<<" "; cout<<endl;
    set<string> name = {"Anastasia" , "Rithen" , "Nikka" , "Anastasia" , "Rithen" , "rithen"};
    cout<<name.size()<<endl;
    for(auto u : name) cout<<u<<" "; cout<<endl;
    set<pair<int,int>> sp;
    sp.insert({1,2});
    sp.insert({1,3});
    sp.insert({1,3});
    sp.insert({2,1});
    sp.insert({2,2});
    sp.insert({1,3});
    sp.insert({2,1});
    sp.insert({2,2});
    for(auto x : sp)cout<<x.first<<" "<<x.second<<endl;
    //to print desending order
    set<int , greater<int>> res= {1,2,4,3,2,1,2,3,2,4,2,1,2,1,3,2};
    for(auto u : res)cout<<u<<" "; cout<<endl;
    //random order TC - O(1) thats why u may needto use this to reduce from log2N but number will be in random order
    unordered_set<int> s9 = {1,2,4,3,2,1,2,3,2,4,2,1,2,1,3,2};
    for(auto u : s9) cout<<u<<" "; cout<<endl;

    set<int> s123 = {1,2,3};
    set<int> s124 = {10,11};
    s123.swap(s124);

    cout<<"------s123-------"<<endl;
    for(auto x: s123) cout<<x<<" "; cout<<endl;

    cout<<"------s124-------"<<endl;
    for(auto x: s124) cout<<x<<" "; cout<<endl;
    
    set<int> sa1 = {2, 4, 6, 8};
    auto itr = sa1.lower_bound(6); //returns an iterator to the first element that is greater than or equal to
    cout<<*itr<<endl;

    auto itr1 = sa1.upper_bound(6); //returns an iterator to the first element that is not less than the given value
    cout<<*itr1<<endl;

    auto itr2 = sa1.equal_range(6);//equal_range(x) = { lower_bound(x), upper_bound(x) }

    cout<<*itr2.first<<" "<<*itr2.second<<endl;

    
    return 0;
}