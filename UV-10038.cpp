#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    #define lli long long int

    bool cmp(pair<int,int> &p1, pair<int,int> &p2);

    int main(){
    optimize();
    //freopen("input.txt", "r" , stdin);
    //freopen("output.o" , "w" , stdout);
    int n;
    while(cin>>n){
      map<int,int> m1;
      vector<int>v1(n);
      vector<int>v2(n);
      bool flag = true;
      for(int i=0; i<n; i++){
        cin>>v1[i];
        v2[i]=v1[i];
      }
      sort(v2.begin(),v2.end());
      for(int i=1; i<n; i++){
        m1[abs(v1[i-1]-v1[i])]++;
      }
      
      for(int i=1; i<n; i++){
        if(!m1[i]){
          cout<<"Not jolly"<<endl;
          flag = false;
          break;
        }
      }
      if(flag)cout<<"Jolly"<<endl;
    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }