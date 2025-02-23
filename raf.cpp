#include<stdio.h>
#include<math.h>
#include<stdlib.h>

const int mx=2*10e4+23;
const int chmx=5*10e4+7;
int x[mx];
int y[mx];
int exist[mx];
char s[chmx];
int main(){

  //  freopen("input.txt" , "r" , stdin);
   // freopen("output.o" , "w" , stdout);

   int n;
   scanf("%d",&n);
 
    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d%d",&a,&b);
       if(a<b){
        int t=a;
        a=b;
        b=t;
       }
       printf("%d\n",a+1);
    }
    return 0;
}

