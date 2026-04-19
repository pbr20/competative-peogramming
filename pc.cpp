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
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 1) {
        if (n % i == 0 )
            return false;
    }
    return true;
}
int main()
{
  optimize();
  //freopen("input.txt", "r", stdin);
  //freopen("output.o", "w", stdout);
  
  int t;
  cin>>t;
  vector<int> primeNumbers;
    int count = 0;
    int i = 2;
    while(count<10005){
      if(isPrime(i)){
        primeNumbers.push_back(i);
        count++;
      }
      i++;
    }
    
  while(t--){
    int a;
    cin>>a;
    
    for(int i=0, j=0; i<a; i++, j+=3){
      cout<<(primeNumbers[j]*primeNumbers[j+1]) + primeNumbers[j+2]<<" ";
    }
    cout<<endl;
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
