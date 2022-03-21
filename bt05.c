#include<stdio.h>
int main(){
    int r=0,n;
    printf("nhap n");
    scanf("%d",&n);
    while ( n>=0&&n<10)
    {
      n=n+r;
      r++;
    }
    printf("r bang:%d",r);



}