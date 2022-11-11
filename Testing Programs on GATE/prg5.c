#include<stdio.h>
void main(){
int b = 1, c = 1, d = 0;
printf("%d\n", (0||0));
if ((0 && 0) == 0) //first if
    printf("1. GO Classes");
if (b || --b == 0) //Second if
    printf("2. GO Classes");
if (c-- == 0) //Third if
    printf("3. GO Classes");
if (d || ++d == 0) //Fourth if
    printf("4. GO Classes");
}