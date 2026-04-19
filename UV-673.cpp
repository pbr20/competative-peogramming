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


    int n;
    cin>>n;
    getchar();
    while(n--){
    stack<char> s1;
    string c1;
    bool flag = true;
    cin>>c1;
    getchar();
    for(int i=0; i<c1.length(); i++){
      if(c1[i]=='(' || c1[i] == '[') s1.push(c1[i]);
      else if(s1.empty()){
        flag = false;
        break;
      }
      else{

        if(!((c1[i]==')' && s1.top()=='(') || (c1[i]==']' &&s1.top()=='['))){
        flag = false;
        break;
        }
        else s1.pop();
      }

    }


    if(!s1.empty())flag = false;
    cout<<(flag?"Yes":"No")<<endl;
  }

    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }
