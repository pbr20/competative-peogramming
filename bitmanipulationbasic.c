#include<stdio.h>
#include<math.h>

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.o" , "w" , stdout);

    // ^ is XOR operator -> 1^1 = 0  1^0 = 1  0^0 = 0  0^1 = 1 

    int n = 5^8^7;       // 5 = 0101  //1-> 1^0 = 1^1 = 0     
                         // 8 = 1000  //2-> 0^0 = 0^1 = 1
                         // 7 = 0111  //4-> 1^0 = 1^1 = 0
                                      //8-> 0^1 = 1^0 = 1
                                      //              = 1010 = 10
    printf("%d\n",n);

    //find the xor of 0^1^1^1^0^1^0^1

    n = 0^1^1^1^0^1^0^1; //1^1^1^1^1^0^0^0
                         //from even numbers of 1 -> 0
                         //left single 1 
                         // now with this leftover 1 all rest 0 XOR will be 1
                         //in conclusion if there is even number of 1 then XOR will be 0 and if there is odd number of 1 then XOR will be 1
    printf("%d\n",n);

    //a^a = 0 and a^0 = a
    n= 5^5; // 5 = 0101
            // 5 = 0101
            //   = 0000 = 0
    printf("%d\n",n);

    n= 5^0; // 5 = 0101
            // 0 = 0000
            //   = 0101 = 5
    printf("%d\n",n);

    //a^b^a = b
    //you are given n numbers where each number occurs even number of times except one number which occurs odd number of times find that number
    int x,y;
    scanf("%d %d %d",&n,&x,&y);
    y=y^x;
    for(int i=0; i<n-2; i++){
        scanf("%d",&x);
        y=y^x;
    }
    printf("%d\n",y);
    return 0;
}