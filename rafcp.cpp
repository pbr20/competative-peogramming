#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    //freopen("input.txt", "r" , stdin);
    //freopen("output.o" , "w" , stdout);
    int t,c=0;
    cin>>t;
    vector<int> box(t);
    map<int,int> m1;
    for(int i=0; i<t; i++){cin>>box[i]; m1[box[i]]++;}
    sort(box.begin(),box.end());
    for(int i=0; i<t-1; i++){
        for(int j=i+1; j<t; j++){
            if(box[i]<box[j] && m1[box[j]]>0){
                c++;
                m1[box[i]]--;
                m1[box[j]]--;
                break;
            }
        }
    }
    cout<<t-c<<endl;
    return 0;
}