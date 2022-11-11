#include<stdio.h> 
int find(int *a, int n)
{
    printf("n = %d a[0] = %d\n", n, a[0]);
    if (n == 1)
        return a[0];
    n--;
    return find(a + (a[0] < a[n]), n);
}
main() {
    int a[10] = {4, 10, 5, 6, 9, 3, 1, 20, 7};
    // printf("%d \n", a[10]);
    printf("%d\n", find(a , 10) );
}