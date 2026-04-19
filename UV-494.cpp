#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    #define lli long long int

    bool cmp(pair<int,int> &p1, pair<int,int> &p2);

    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    string s1;
    while(getline(cin,s1)){
      
      int count = 0;
      bool flag = false;
      for(int i=0; i<s1.size(); i++){
        if(!((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z')) && flag){ 
          
          flag = false;
        }
        if(((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z')) && !flag){
          flag = true;
          count++;
        } 
      }//if(!s1.empty()){
     // if(((s1[s1.size()-1]>='a' && s1[s1.size()-1]<='z')||(s1[s1.size()-1]>='A' && s1[s1.size()-1]<='Z')))count++;
     // }
      cout<<count<<endl;
    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }