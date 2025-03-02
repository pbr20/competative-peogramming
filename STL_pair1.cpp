#include<bits/stdc++.h>
using namespace std;
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2);
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
    pair<string , vector<int>> p;
    p.first = "Rithen";
    p.second = {1,2,3};
    cout<<p.first<<endl;
    for(auto x : p.second){
        cout<<x<<" ";
    }cout<<endl;
    pair <int ,int>p1;
    p1 = make_pair(17,19);
    p1.first++;  //like a normal variable
    cout<<p1.first<<" "<<p1.second<<endl;
    pair <string, vector<int>> p2;
    p2 = {"Rith" , {1,2,3,4}};
    cout<<p2.first<<" "<<p2.second.size()<<endl;
    pair <int , int> a1,a2;
    a1 = {3,6};
    a2 = {5 ,2};
    if(a1>a2)cout<<"a1 is greater than a2"<<endl; //it compares the first value if equale the compare the next
    else cout<<"a2 is greater than a1"<<endl;
    pair <int,int> a3 = min(a1,a2);
    cout<<a3.first<<" "<<a3.second<<endl;
    a3 = max(a1,a2);
    cout<<a3.first<<" "<<a3.second<<endl;
    cout<<"sorting"<<endl;
    pair<int,int> b1[] = {{1,3} , {4,2} , {9,1} , {1,9} , {9,3} , {6,6}};
    sort(b1,b1+6);
    for(int i=0; i<6; i++) cout<<b1[i].first<<" "<<b1[i].second<<endl;
    //sorting and unique with vector pair
    vector<pair<string,int>> e1;
    e1.push_back({"Anastasia",18});
    e1.push_back({"Rithen" , 20});
    e1.push_back({"Anastasia" , 19});
    e1.push_back({"Rithen" ,20});
    e1.push_back({"Nikka" , 19});
    e1.push_back({"Nikka" , 19});
    e1.push_back({"Anastasia",18});
    sort(e1.begin(),e1.end());
    for(auto x : e1) cout<<x.first<<" "<<x.second<<endl;
    cout<<"UNIQUE"<<endl;
    int sz = unique(e1.begin(),e1.end())-e1.begin();
    for(int i=0; i<sz; i++) cout<<e1[i].first<<" "<<e1[i].second<<endl;
    //sorting but first one decending and second one accending//
    vector<pair<int,int>> f1 ={{4,120},{3,780},{4,100},{7,6773},{2,10}};
    sort(f1.begin(),f1.end(),cmp);
    for(auto x:f1)cout<<x.first<<" "<<x.second<<endl;
    
    return 0;

}
bool cmp (const pair<int,int> &p1, const pair<int,int> &p2){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}