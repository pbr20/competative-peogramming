#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        
    }

    return 0;
}