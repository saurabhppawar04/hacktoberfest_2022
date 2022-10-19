#include <stdio.h>
int fat (n) {
    if ((n==1) || (n==0)){
        return 1;
   } else{
      return fat(n-1)*n;
      }
}
int main () {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("%d! = %d \n",n,fat (n));
}
