#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int count=0;
  if(n>=5){
    count = n/5;
    n=n%5;
  }
  else if(n>=4){
    count++;
    n=n%4;
  }
  else if(n>=4){
    count++;
    n=n%3;
  }
  else if(n>=2){
    count++;
    n=n%2;
  }else count++;

  cout<<count<<endl;

  return 0;
}