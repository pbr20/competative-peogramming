#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt", "r" , stdin);
    freopen("output.o" , "w" , stdout);
    int t;
	cin>>t;
	while(t){
        int n,c=0,f=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        for(int i=n-2; i>=0; i--){
            while(v[i]>=v[i+1] &&v[i]>0){
                v[i]/=2;
                c++;
            }
            if(v[i]<i-1){
                cout<<-1<<endl;
                f=1;
                break;
            }
        }if(f==0)
        cout<<c<<endl;
        t--;
    }
    return 0;
}