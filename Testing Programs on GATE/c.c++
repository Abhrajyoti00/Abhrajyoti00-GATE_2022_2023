// // #include <stdio.h>
// // #include <stdlib.h>

// // // struct intarray {
// // // int size;
// // // int *data;
// // // };
// // // struct intarray *a;
 
// // // void f (int n)
// // // {
// // //     a = malloc(sizeof(struct intarray));
// // //     a->size = n;
// // //     a->data = malloc(sizeof(int)*a->size);
    
// // // }
// // struct s {
// //     int x, y;
// // };
// // struct s sarr[20];


// // int main (){
// //     int a,b,c;
// //     a=11.3;
// //     b=9.1;
// //     c=10;
// //     sarr[10].x = 20;
// //     a = *((int *)((char *)sarr + 10 * sizeof(struct s)));
// //     printf("%d \n",((struct s *)((char *)sarr + 10 * sizeof(struct s)))->x);
// //     printf("%d\n",a);
// //     printf("%d ",b);
// //     printf("%d \n" ,c);
// //     printf("%c \n",11.2);
// //     printf("%c \n",9.1);
// //     printf("%c \n" ,c);
// //     printf("%c", 128);
// //     printf("Doom");
// //     printf("%c", 256);
    
    

// //     return(0);
// // }

// #include<bits/stdc++.h>
// int g;
// // static int a,b;
// // int c=2,d;
// // d = (a|| (++b &&(c| ++g)));
// // printf("%d", d);
// // char a[] = "abc\0de";
// // printf("%d", sizeof(a));

// int global_v=0;
// int main()
// {
// int child;
// int local_v  = 0;
// child = fork();
// if(child == 0)
// printf("%d %d", global_v, local_v);
// else {
// global_v = 1;
// local_v = 1;
// }
// return 0;
// }
// // int main()
// // {
// //     // int arr[]={10,20,30,40,50,60};
// //     // int *ptr1=arr;
// //     // int *ptr2=arr+5;
// //     // printf("Number of elements between two pointer are: %d.", 
// //     // (ptr2 - ptr1));
// //     // printf("Number of bytes between two pointer are: %d.", 
// //     // (char*)ptr2 - (char*)ptr1);
// // }

#include <stdio.h>
// void swapK(Queue q, int k) {
//     if (k > q.size())
//         print("k cannot be more than queue size");
//  for (int i = 0; i < k / 2; i++) {
//     int elem1 = q.dequeue();
//     int elem2 = q.dequeue();
//     q.enqueue(elem2);
//     q.enqueue(elem1);
//  }
     
//  for (int i = 0; i < q.size() - k; i++) {
//     q.enqueue(q.dequeue());
// }
     
// }
 
int main()
{
    // int b[] = {3,2,0,1};
    // int *A = b;
    // //*A++ will be treated as *(A++) but increment of A will happen after using *A for condition check
    // while(*A++){ 
    //     printf("%d\n",*A);    
    // }

    char *words[] = {"hello", "world"};
    void *v = words;

//  printf("%c %c\n", *v, *(v + 1)); 
 printf("%s %s\n", *(char **)v, *((char **)v + 1)); 
//  printf("%s %s\n ", *(char *)v, *((char *)v + 1)); 
//  printf("%s %s\n", **v, **(v + 1)); 
    
    return 0;
}