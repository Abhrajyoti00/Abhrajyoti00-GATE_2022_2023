#include<stdio.h> 
int sum() {
  static int n =5;
  if (n == 2) return 2;
  return sum(n-1)*n ;
}
int main() {
    printf("%d\n", sum() );
    return 0;
}