#include<bits/stdc++.h>
using namespace std;
int a[10] = {10,12,14,16,18,8,9,10,13,15};
int b[10];
void merge(int low, int mid, int high){
    int i = low, j = mid+1, k = low, p;
    while((i<=mid) && (j<=high)){
        if(a[i]<=a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        for(p = j; p<=high; p++){
            b[k] = a[p];
            k++;
        }
    }
    else{
        for(p = i; p<=mid; p++){
            b[k] = a[p];
            k++;
        }
    for(p = low; p<=high;p++)
        a[p] = b[p];
    }
}
int main(){
    merge(0,10,4);
    for(int i = 0; i<10; i++){
        cout<<a[i]<<", ";
    }
    return 0;
}

