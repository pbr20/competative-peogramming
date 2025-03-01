#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                                //cmnt out after semicolon if u want interactive output (one by one)
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }                          
    int main(){
    optimize();
    //freopen("input.txt" , "r" , stdin);
    //freopen("output.o" , "w" , stdout);
    int t;
    cin>>t;
    while(t){
        string a;
        cin>>a;
        bool a1 = next_permutation(a.begin(),a.end());
        if(a1) cout<<a<<endl;
        else cout<<"no answer"<<endl;
        t--;
    }
   

    return 0;
}