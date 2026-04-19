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
    vector<lli> v1(1500);
    v1[0]=1;
    int i2=0, i3=0, i5=0;
    lli next2 , next3, next5;
    for(int i=1; i<1500; i++){
      next2 = v1[i2]*2;
      next3 = v1[i3]*3;
      next5 = v1[i5]*5;

      int next = min(min(next2,next3),next5);
      v1[i]=next;
      if(next==next2)i2++;
      if(next==next3)i3++;
      if(next==next5)i5++;
    }
   
    
    cout<<"The 1500'th ugly number is "<<v1[1499]<<"."<<endl;
   
    



      
    return 0;
}

    bool cmp(pair<int,int> &p1, pair<int,int> &p2){
      if(p1.first>p2.first) return 1;
      else if(p1.first == p2.first) return(p1.second<p2.second);
      return 0;
    }