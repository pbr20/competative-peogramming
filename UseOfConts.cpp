#include<stdio.h>
#include<math.h>

const int n = 100230;
int A[n];

int main(){
    int B[11];

    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);

    for(int i=0; i<10; i++){
        printf("%d\n",A[i]);   
    }
    for(int i=0; i<10; i++){
        printf("%d\n",B[i]);   
    }

return 0;
}