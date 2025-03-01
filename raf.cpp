#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt" , "r" , stdin);
  freopen("output.o" , "w" , stdout);
  vector<vector<int>> v;
  vector<int> a = {1,2,3,4};
  vector<int> b = {6,4,9,5,3,5};
  v.push_back(a);
  v.push_back(b);
  for(auto x : v){
    for(auto y : x){
      cout<<y<<" ";
    }cout<<endl;
  }
vector<int>::iterator it = max_element(a.begin(),a.end());
cout<<*it<<endl;
cout<<*(max_element(b.begin(),b.end()))<<endl;
sort(b.begin(),b.end());
int sz = unique(b.begin(),b.end()) - b.begin();
cout<<sz<<endl;
for(int i=0; i<sz; i++)cout<<b[i]<<" "; cout<<endl;
return 0;
}
