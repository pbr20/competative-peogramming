#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
    map<string,int> id; //ttime complexicity log2N
    id["Anastasia"] = 19;
    id["Rithen"] = 21;
    cout<<id["Anastasia"]<<endl;
    map<string,string> gender;
    gender["Anastasia"] = "Female";
    gender["Rithen"] = "Male";
    cout<<gender["Anastasia"]<<endl;
    cout<<gender["No_one"]<<endl; //if the map is not assigned any value then it will print empty and in case int type it will be zero
    //frequency array with map u can count long long and negative too
    map<long long,int>cnt;
    vector<long long> num = {6213721812,-82, 82443298, 6213721812, 6213721812,-82, 82443298, 6213721812,-82};
    for(int i=0; i<num.size(); i++) cnt[num[i]]++;
    cout<<"6213721812 = "<<cnt[6213721812]<<" || -82 = "<<cnt[-82]<<endl;
    for(auto x : cnt) cout<<x.first<<" "<<x.second<<endl; //it will print in ordered base sorted
    //unique with map Nlog2N
    map<int,bool> vis;
    vector<int> v1 = {1,2,3,2,3,1,4};
    for(auto u : v1) vis[u]++;
    for(auto u : vis) cout<<u.first<<" "<<u.second<<endl; 
    cout<<vis.size()<<endl;
    return 0;
}