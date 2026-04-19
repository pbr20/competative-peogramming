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
    int n,m;
    int itr=1;
    cin>>n>>m;
    while(n&&m){
      vector<string> v1;
      string s1;
      for(int i=0; i<n; i++){
        cin>>s1;
        v1.push_back(s1);
      }
     
      cout<<"Field #"<<itr<<":"<<endl;
      for(int i=0; i<n; i++){
       
        for(int j=0; j<v1[i].length(); j++){
           int sum = 0;
          if(v1[i][j]!='*'){
            if(j){
          if(v1[i][j-1]=='*')sum++;}
            if(j!=m-1){
          if(v1[i][j+1]=='*')sum++;}
            if(i&&j){
          if(v1[i-1][j-1]=='*')sum++;}
          if(j&&i!=n-1){
          if(v1[i+1][j-1]=='*')sum++;}
          if(i&&j!=m-1){
          if(v1[i-1][j+1]=='*')sum++;}
          if(i!=n-1 && j!=m-1){
          if(v1[i+1][j+1]=='*')sum++;}
          if(i){
          if(v1[i-1][j]=='*')sum++;}
          if(i!=n-1){
          if(v1[i+1][j]=='*')sum++;}
          cout<<sum;
          }else cout<<v1[i][j];
        }cout<<endl;
      }
      cin>>n>>m;
      if(n!=0&&m!=0){
        itr++;
        cout<<endl;
      }


    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }