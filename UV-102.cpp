#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    #define lli long long int

    bool cmp(pair<int,int> &p1, pair<int,int> &p2);

    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    vector<int>v1(9);
    while(cin>>v1[0]>>v1[1]>>v1[2]>>v1[3]>>v1[4]>>v1[5]>>v1[6]>>v1[7]>>v1[8]){
      int sum = 0;
      int B1 = v1[3]+v1[6];
      int G1 = v1[4]+v1[7];
      int C1 = v1[5]+v1[8];
      int B2 = v1[0]+v1[6];
      int G2 = v1[1]+v1[7];
      int C2 = v1[2]+v1[8];
      int B3 = v1[0]+v1[3];
      int G3 = v1[1]+v1[4];
      int C3 = v1[2]+v1[5];
      bool Bf = true;
      bool Gf = true;
      bool Cf = true;
      int mini = min(min(B1,G1),C1);
      sum+=mini;
      if(B==mini){ 
        cout<<"B";
        Bf = false;
      }
      else if(G==mini){ 
        if(G==B){
          cout<<"B";
          Bf = false;
        }else if(G==C){
          cout<<"C";
          Cf = false;
        }else{
        cout<<"G";
        Gf = false;
        }
      }
      else {
        if(C==B){
          cout<<"B";
          Bf = false;
        }else
        cout<<"C";
        Cf = false;
      }
       B = v1[0]+v1[6];
       G = v1[1]+v1[7];
       C = v1[2]+v1[8];
       mini = min(min(B,G),C);
      sum+=mini;
      if(B==mini && Bf){ 
        cout<<"B";
        Bf = false;
      }
      else if(G==mini && Gf){ 
        if(G==B && Bf){
          cout<<"B";
          Bf = false;
        }else if(G==C && Cf){
          cout<<"C";
          Cf = false;
        }else{
        cout<<"G";
        Gf = false;
        }
      }
      else{
        if(C==B && Bf){
          cout<<"B";
          Bf = false;
        }else
        cout<<"C";
        Cf = false;
      }
       B = v1[0]+v1[3];
       G = v1[1]+v1[4];
       C = v1[2]+v1[5];
       mini = min(min(B,G),C);
      sum+=mini;
      if(B==mini && Bf){ 
        cout<<"B";
        Bf = false;
      }
      else if(G==mini && Gf){ 
        if(G==B && Bf){
          cout<<"B";
          Bf = false;
        }else if(G==C && Cf){
          cout<<"C";
          Cf = false;
        }else{
        cout<<"G";
        Gf = false;
        }
      }
      else{
        if(C==B && Bf){
          cout<<"B";
          Bf = false;
        }else
        cout<<"C";
        Cf = false;
      }
      cout<<" "<<sum<<endl;
    }
      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }