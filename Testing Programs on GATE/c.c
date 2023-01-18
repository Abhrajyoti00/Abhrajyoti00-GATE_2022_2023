// #include <stdio.h>
// #include <stdlib.h>

// // struct intarray {
// // int size;
// // int *data;
// // };
// // struct intarray *a;
 
// // void f (int n)
// // {
// //     a = malloc(sizeof(struct intarray));
// //     a->size = n;
// //     a->data = malloc(sizeof(int)*a->size);
    
// // }
// struct s {
//     int x, y;
// };
// struct s sarr[20];


// int main (){
//     int a,b,c;
//     a=11.3;
//     b=9.1;
//     c=10;
//     sarr[10].x = 20;
//     a = *((int *)((char *)sarr + 10 * sizeof(struct s)));
//     printf("%d \n",((struct s *)((char *)sarr + 10 * sizeof(struct s)))->x);
//     printf("%d\n",a);
//     printf("%d ",b);
//     printf("%d \n" ,c);
//     printf("%c \n",11.2);
//     printf("%c \n",9.1);
//     printf("%c \n" ,c);
//     printf("%c", 128);
//     printf("Doom");
//     printf("%c", 256);
    
    

//     return(0);
// }


#include<stdio.h>
int g;
int main (){
// static int a,b;
// int c=2,d;
// d = (a|| (++b &&(c| ++g)));
// printf("%d", d);
char a[] = "abc\0de";
printf("%d", sizeof(a));
}