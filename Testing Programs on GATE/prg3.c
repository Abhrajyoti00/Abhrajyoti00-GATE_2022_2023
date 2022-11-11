#include<stdio.h> 
void fun (int);
static int i = 3;
main()
{
    fun(3);
    printf("%d", i);
}