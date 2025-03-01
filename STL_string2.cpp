#include<bits/stdc++.h>
using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl '\n'                               //cmnt out after semicolon if u want interactive output (one by one)
    int main(){
    optimize();
    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" ,stdout);
        string a1 = "Fisch";
        a1.pop_back();
        cout<<a1.back()<<endl;
        vector<string> v1;
        v1.push_back("Anastasia");
        v1.push_back("Anastasia");
        v1.push_back("Rithen");
        v1.push_back("anastasia");
        v1.push_back("Anastasia");
        sort(v1.begin() ,v1.end()); //don't forget to sort bro!!
        int sz1 = unique(v1.begin() ,v1.end()) - v1.begin();
        cout<<sz1<<endl;
        for(int i=0; i<sz1; i++)cout<<v1[i]<<endl;
        int b1= 2018;
        string b2 = to_string(b1);
        b2[1] = '1';
        b2[3] = '9';
        cout<<b2<<endl;
        b1 = stoi(b2);
        b1++;
        cout<<b1<<endl;
        char c1 = 'R';
        bool c12 = isupper(c1) , c13 = islower(c1);
        cout<<c12<<" "<<c13<<endl;
        char c2 = ' ';
        bool c14 = isspace(c2);
        cout<<c14<<endl;
        char c5 = 'a';
        c5 = toupper(c5);
        cout<<c5<<endl;
        c5 = tolower(c5);
        cout<<c5<<endl;
        //for string u have to use loop//
        //->to erase a substring from a string<-//
        string d1 = "Rithen Barua Anastasia";
        d1.erase(d1.begin()+8 , d1.begin()+14); //for erase add one more index to the end point
        cout<<d1<<endl;
        string d2 = "Nik & ";
        string d3 = "Rithen Barua";
        copy(d3.begin(),d3.begin()+4 , back_inserter(d2));
        cout<<d2<<endl;
        //to remove a specific occurance from a string
        string e1 = "hoAw coAuAAld AIA setAAtAleA AfAAoAr AanoAAtAhAeAAr AAgiArAAlA";
        e1.erase(remove(e1.begin() ,e1.end() , 'A'),e1.end());
        cout<<e1<<endl;
        string e2 = "Rithen";
        if(e2.find("the") != -1) cout<<"sub is found"<<endl;
        else cout<<"sub not found!!"<<endl;
        //next_permutation
        string f1 = "acbd";
        bool f12 = next_permutation(f1.begin(),f1.end()); //will print the next laxigraphical string and store one if there is next laxiographical string
        cout<<f12<<" "<<f1<<endl;
        f1 = "dcba";
        f12 = next_permutation(f1.begin() ,f1.end());
        cout<<f12<<" "<<f1<<endl;  //will return 0 since there is no greater laxigraphical string exist and will convert this too smallest laxigraphical string
        
        return 0;
}