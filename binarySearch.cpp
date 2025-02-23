#include<iostream>
using namespace std;
int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);
int n;
cin>>n;
int A[n];

for(int i=0; i<n; i++){
    cin>>A[i];
}
int target;
cin>>target;
int L=0,R=n,ans= -1;
while(L<=R){
    int mid  = L + (R-L)/2;  //binary search
    if(A[mid]>=target) {
        ans = A[mid];
        R=mid-1;
    }else L=mid+1;
}

cout<<ans;

    return ans;
}