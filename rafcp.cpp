#include <bits/stdc++.h>
using namespace std;

#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl '\n' // cmnt out after semicolon if u want interactive output (one by one)
#define lli long long int
lli power(int x, int y){
  lli ans = 1;
  for(int i=1; i<=y; i++){
    ans*=x;
  }
  return ans;
}


int main()
{
  optimize();
//freopen("input.txt", "r", stdin);
//freopen("output.o", "w", stdout);
  string N;
  cin >> N;
  string tmp;
  tmp = N; 
  reverse(N.begin(), N.end());
lli carry =0;
  string sum;
  if(N.size()>5){
  for(int i=0; i<N.size(); i++){
    int x = N[i]-'0';
    int rem;
   if(i<4)
    rem = (x+9+carry)%10;
    else
   rem=(x+carry)%10;
    int y = carry;
    carry=0;
    
    if(i<4)
    carry=(x+9+y)/10;
    else
    carry=(x+y)/10;
    
    sum+=to_string(rem);
  }
  reverse(sum.begin(),sum.end());
  cout<<sum<<endl;
}else{ 
  int f = stoi(tmp);
  cout<<f+9999<<endl;
}
  if(N.size()>5){
  string pro;
  string ca;
  for(int i=0; i<N.size(); i++){
    int x = (N[i]-'0')*9999;
    reverse(ca.begin(),ca.end());
    int y = ca[0]-'0';
    
    int rem = (carry+x)%10;
    carry = (carry+x)/10;
    pro+=to_string(rem);
  }
  string z = to_string(carry);
  reverse(z.begin(),z.end());
  pro+=z;
  reverse(pro.begin(),pro.end());
  cout<<pro<<endl;
}else cout<<stoi(tmp)*9999<<endl;
  return 0;
}