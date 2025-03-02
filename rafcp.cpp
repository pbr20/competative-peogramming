#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2);
    int main(){
    optimize();
   // freopen("input.txt" , "r" , stdin);
   // freopen("output.o" , "w" , stdout);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a1(n);
    for(int i=0; i<n; i++){
        cin>>a1[i].first>>a1[i].second;
    }
    sort(a1.begin(),a1.end(),cmp);
    int b1,b2,c1=0;
    b1 = a1[k-1].first;
    b2 = a1[k-1].second;
    for(int i=0; i<n; i++)if(b1==a1[i].first && b2==a1[i].second) c1++;
    cout<<c1<<endl;
    return 0;
}
bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2){
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}