#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> A;

    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);

    cout<<A.size()<<endl;
    for(int i=0; i<A.size(); i++) cout<<A[i]<<" ";
    cout<<endl;

    //user input
    
    int a;
    cin>>a;
    vector <int> B;
    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    for(int i=0; i<a; i++) cout<<B[i]<<" "; cout<<endl;

    vector <int> C = {1,2,3,4};
    for(int i=0; i<C.size(); i++) cout<<C[i]<<" "; cout<<endl;
    C.clear();   //clear the vector
    cout<<C.size()<<endl;
    cout<<C.empty()<<endl;  //check if the vector is empty or not if empty then return 1 else 0

    C = {1,2,3,4};
    C.resize(10);  //resize the vector //if the size is greater than the previous size then the new elements will be 0
    cout<<C.size()<<endl;
    for(int i=0; i<C.size(); i++) cout<<C[i]<<" "; cout<<endl;
    
    vector <int> D(10, 5);  //initialize the vector with 10 elements with value 5 if not given then the value will be 0
    for(int i=0; i<D.size(); i++) cout<<D[i]<<" "; cout<<endl;

    vector <int> tmp;
    tmp = D; //copy the vector D to tmp
    for(int i=0; i<tmp.size(); i++) cout<<tmp[i]<<" "; cout<<endl;
    
    vector <int>::iterator it; //iterator that will point to the address of a vector
    for(it = tmp.begin(); it!=tmp.end(); it++) cout<<*it<<" "; cout<<endl; // *it will give the value of the address
    //we can also start the loop from the end by using rbegin() and rend() even from any position by\tmp.begin()+2 and tmp.end()-2
   
    //for-each loop
    for(int x: tmp) cout<<x<<" "; cout<<endl; //x will take the value of the vector tmp and print it
    for(auto x: tmp) x*=2; /// for each can't modify only print
    for(auto x: tmp) cout<<x<<" "; cout<<endl;  //auto will automatically take the type of the vector tmp and print it

    vector <int> E = {3 , 2 , 5 , 1 , 4};
    sort(E.begin(),E.end());  //complexity O(nlog2n)
    for(auto x : E) cout<<x<<" "; cout<<endl;
    sort(E.rbegin(),E.rend());  //sort in descending order //another way to sort in descending order is to use greater<int>() sort(E.begin(),E.end(),greater<int>());
    for(auto x : E) cout<<x<<" "; cout<<endl;
    E = {3 , 2 , 5 , 1 , 4};
    reverse(E.begin(),E.end());  //reverse the vector 
    for(auto x : E) cout<<x<<" "; cout<<endl;
    E.pop_back(); //delete the last element  //complexity O(1)
    cout<<E.back()<<endl; //print the last element
    cout<<E.front()<<endl; //print the first element
    cout<<*(E.begin()+2)<<endl; //print the 3rd element
    E.erase(E.begin()); //erase the first element you have to pass the address of the element or pointer //complexity O(n)
    cout<<E.front()<<endl; //print the first element
   
    return 0;
}