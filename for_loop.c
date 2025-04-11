#include<stdio.h>
// int main(){
//     // 1 to 100 4 by 4
//     for(int i=2; i<=64 ; i=i*2){
// printf("%d\n", i);
//     }
//     return 0;
// }

int main(){
  int n;
  scanf("%d", &n);
  int sum=0;
  for(int i=1; i<=n; i++){
    sum+=i;
}
printf("%d\n", sum);
return 0;
}

