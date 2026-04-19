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
    string s1;
    bool f = false;
    while(getline(cin,s1)){
     
        for(int i=0; i<s1.length(); i++){
          if(s1[i] == '\"' && !f) {cout<<"``"; f = true;}
          else if(s1[i] == '\"' && f){cout<<"''"; f=false;}
          else cout<<s1[i];
    }cout<<endl;
      }
    
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }