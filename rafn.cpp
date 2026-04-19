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
    int n;
    cin>>n;
    int xr=-1000,yr=-1000,xl=1000,yl=1000;
    while(n--){
      char c;
      cin>>c;
      
      if(c=='p'){
        int a,b;
        cin>>a>>b;
        if(a>xr)xr=a;
        if(b>yr)yr=b;
        if(a<xl)xl=a;
        if(b<yl)yl=b;
      }
      if(c=='c'){
        int a,b,r;
        cin>>a>>b>>r;
        if((a+r)>xr)xr=a+r;
        if((b+r)>yr)yr=b+r;
        if((a-r)<xl)xl=a-r;
        if((b-r)<yl)yl=b-r;
      }
      if(c=='l'){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int maxx=max(a,c);
        int maxy=max(b,d);
        int minx=min(a,c);
        int miny=min(b,d);
        if(maxx>xr)xr=maxx;
        if(maxy>yr)yr=maxy;
        if(minx<xl)xl=minx;
        if(miny<yl)yl=miny;
      }
    }
    cout<<xl<<" "<<yl<<" "<<xr<<" "<<yr<<endl;
    
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
