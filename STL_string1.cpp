#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'  
int main()
{   
    optimize();
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    string s = {"Rithen"};
    s += " Barua";
    cout << s << endl;
    cout << s.size() << endl;
    s[0]='p';
    cout<<s[0]<<endl;
    cout<<s<<endl;
    string s1 = s;
    s.clear();
    cout<<s<<endl;
    cout<<s1<<endl;
    cout<<s.empty()<<endl; 
    s1[0] = 'R';
    //iteratot and for-each loop//
    string::iterator it1;
    for(it1=s1.begin(); it1<s1.end(); it1++) cout<<*it1; cout<<endl;
    for(auto x : s1)cout<<x; cout<<endl;
    //palindrome prob using string comparison//
    string a1 = "abba";
    string a2 = a1;
    reverse(a2.begin() , a2.end()); //TC -> O(N)
    if(a1==a2) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    //getline
    string b1;
    getline(cin , b1);
    cout<<b1<<endl;;
    //multiple getline
    string b2;
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        string b3;
        getline(cin , b3);
        b2 = c+b3;
        cout<<b2<<endl;
       
    }
    //sort
    string d1= {"ahjftenAAA"};
    sort(d1.begin(),d1.end());  //capital letter first
    for(auto x : d1)cout<<x; cout<<endl;
    int sz1 = unique(d1.begin() , d1.end())-d1.begin(); //don't forget to sort before
    for(int i=0; i<sz1; i++) cout<<d1[i]; cout<<endl;
    cout<<*(max_element(d1.begin(),d1.end()))<<endl;
    cout<<*(min_element(d1.begin(),d1.end()))<<endl;
    d1.erase(d1.begin()+1);
    cout<<d1<<endl;
    //to erase a specific character
    d1.erase(remove(d1.begin() , d1.end() , 't'),d1.end());
    cout<<d1<<endl;
    //string comparison
    string e1="Rithen";
    string e2="Anastasia";
    if(e1<e2)cout<<e1<<" is lexiographically small"<<endl;
    else cout<<e2<<" is lexiographically small"<<endl;
    //multiple string sort
    vector<string> v1;
    v1.push_back("Rith");
    v1.push_back("Nik");
    v1.push_back("anastasia");
    v1.push_back("puspak");
    sort(v1.begin(),v1.end());
    for(auto x : v1)cout<<x<<endl;
    return 0;
}