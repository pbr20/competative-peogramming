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
    cin>>n;
    while(n--){
      int t;
      cin>>t;
      int num;
      int count = 0;
      vector<int> v1;
      v1.push_back(0);
      for(int i=1; i<=t; i++){
        cin>>num;
        v1.push_back(num);
      }
      //for(int i=0; i<=t; i++)cout<<i<<" ";cout<<endl;
      //for(auto m: v1)cout<<m<<" ";cout<<endl;

      for(int i=1; i<=t; i++){
        for(int j=1; j<=t; j++){
          if(i==v1[j] && j!=i) {
            count+=j-i;
            v1.insert(v1.begin()+i,i);
            v1.erase(remove(v1.begin()+i+1,v1.end(),i),v1.end());
            
            //for(int i=0; i<=t; i++)cout<<i<<" ";cout<<endl;
            //for(auto m: v1)cout<<m<<" ";cout<<endl;
            //cout<<"Count: "<<count<<endl;
          }
        }
      }
      cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
      

    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }