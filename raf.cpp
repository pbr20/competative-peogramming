#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
#define lli long long int

lli fact(int n){
  if(n==1)return 1;
  return n*fact(n-1);
}
bool comp (long double a, long double b){
  if((a-b)>1e-15)return true;
  return false;
}
void swap (int &x,int &y){
  if(x<y){
  int tmp = x;
  x = y;
  y = tmp;
  }

}

int min(int a, int b, int c , int d){
  return min(a,min(b,min(c,d)));
}
int max(int a , int b , int c , int d){
  return max(a,max(b,max(c,d)));
}
void prime(){
int x = 1000100;
  vector<bool> is_prime(x,true);
  vector<int> primes;
  is_prime[1] = false;
  for(int i=2; i<=x; i++){
    if(is_prime[i] && (long long)i*i<=x){
      for(long long int j=i*i; j<=x; j+=i){
        is_prime[j] = false;
      }
    }
  }
  for(int i=2; i<=x; i++){
    if(is_prime[i]){
      primes.push_back(i);
    }
  }
}

int main(){
   optimize();
	//freopen("input.txt" , "r" , stdin);
  //freopen("output.o" , "w" , stdout);
  
  long long int a , b,c,d;
  cin>>a>>b;

  
  cout<<(long long int) pow(a,b) + (long long int) pow(b,a)<<endl;
  return 0;
}
