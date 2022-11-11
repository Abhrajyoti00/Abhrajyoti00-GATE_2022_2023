#include<stdio.h>
int Count(int x, int y)
{
    if(x < y) return 0;
    else if(x==y) return x + Count(x-1,y);
    else return y + Count(x-2,y-1);
}
int main()
{
    printf("%d" , Count(9,6));
    return 0;
}