#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    #define lli long long int

    bool cmp(pair<int,int> &p1, pair<int,int> &p2);

    int main(){
    optimize();
    //freopen("input.txt", "r" , stdin);
    //freopen("output.o" , "w" , stdout);
    string a,b;
    while(cin>>a>>b){
      if(a=="0"&&b=="0")break;
      int maxi = max(a.size(),b.size());
      int mini = min(a.size(),b.size());
      int carry = 0;
      int count = 0;
      for(int i=maxi-1,j=mini-1; i>=0; i--,j--){
        int sumOfDigit=0;
        if(a.size()>b.size()){
        if(j>=0)
        sumOfDigit = (int)(a[i]-'0') + (int)(b[j]-'0') + carry;
        else
        sumOfDigit = (int)(a[i]-'0') + carry;
        }
        else{
        if(j>=0)
        sumOfDigit = (int)(a[j]-'0') + (int)(b[i]-'0') + carry;
        else
        sumOfDigit = (int)(b[i]-'0') + carry;
        }
        carry = sumOfDigit / 10;
        if(carry) count++;
        
      }
      if(count==1) cout<<count<<" carry operation."<<endl;
      else if(count)  cout<<count<<" carry operations."<<endl;
      else cout<<"No carry operation."<<endl;
    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }