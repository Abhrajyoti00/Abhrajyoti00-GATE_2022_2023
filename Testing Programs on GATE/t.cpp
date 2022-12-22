#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[] = "bc\0de";
    char *p = a;
    cout<<sizeof(a)<<"\n";
    cout<<sizeof(p)<<"\n";
    cout<<sizeof(*p)<<"\n";
    cout<<strlen(p);
    cout<<sizeof(int);

}