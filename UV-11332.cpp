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
    lli n;
    while(cin>>n){
      if(n==0)break;
      int m = n;
      int k = n;
      while(m){
      int sum = 0;
      while(k/10){
        sum+=k%10;
        k/=10;
    }sum+=k;
      k=sum;
      m=k/10;
  }
  cout<<k<<endl;
    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }