#include<stdio.h>
int main() {                /*Line 1 */
int *A1[3][5];
int (*A2) [3] [5];
int *(A3[3][5]);
int (*A4[3])[5];
printf("%d",sizeof(*A1));
printf("%d",sizeof(*A2));
printf("%d",sizeof(*A3));
printf("%d",sizeof(*A4));
}
