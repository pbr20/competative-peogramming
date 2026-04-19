#include <bits/stdc++.h>
using namespace std;

#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl '\n' // cmnt out after semicolon if u want interactive output (one by one)
#define lli long long int

bool cmp(pair<int, int> &p1, pair<int, int> &p2);

bool isVowel(char s1){
  s1 = tolower(s1);
  return (s1 == 'a' || s1 == 'e' || s1 == 'i' || s1 == 'o' || s1 == 'u');
}
bool isBalanced(char c1 , char c2){
  return ((c1=='('&&c2==')')||(c1=='{'&&c2=='}')||(c1=='['&&c2==']'));
}
int main()
{
  optimize();
  //freopen("input.txt", "r", stdin);
  //freopen("output.o", "w", stdout);
  
  int t;
  cin>>t;
  while(t--){
    int m,n,ci,cj;
    cin>>m>>n>>ci>>cj;
    for(int i=1; i<=m; i++){
      for(int j=1; j<=n; j++){
        if(i==ci) cout<<"*";
        else if(j==cj) cout<<"*";
        else cout<<".";
      }
      cout<<endl;
    }
  }
 
  return 0;
}

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  if (p1.first > p2.first)
    return 1;
  else if (p1.first == p2.first)
    return (p1.second < p2.second);
  return 0;
}
