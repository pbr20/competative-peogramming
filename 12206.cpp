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
  freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<string> v1;
    while(n--){
      string s1;
      cin>>s1;
      v1.push_back(s1);
      
    }
    string s2;
    cin>>s2;
for(string s1:v1){
     char a[6]={0},b[6]={0};
      for(int j=0; j<s1.size(); j++){
        int asci = s1[j];
        a[j] =  ((asci>>j)&1);
        b[j] =  ((asci>>(j+3)%6)&1);
      }
      int numa=0, numb=0;
    for(int i = 5; i>=0; i--){
      numa = numa*2 + a[i];
    }
    for(int i=5 ; i>=0; i--){
      numb = numb*2 + b[i];
    }
    
    cout<<s2[numa]<<s2[numb];
  }cout<<endl;
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
