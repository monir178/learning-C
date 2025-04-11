#include<stdio.h>
int main(){

for(int i=1; i<=10; i++){
    if(i%2 == 0){

        printf("%d is even number\n", i);
    }
    else{
        printf("%d is odd number\n", i);
    }
}

    // int n;
    // scanf("%d", &n);
    // if(n%2 == 0){
    //     printf("%d is even number\n", n);
    // }
    // else{
    //     printf("%d is odd number\n", n);
    // }
    return 0;
}