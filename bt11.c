#include<stdio.h>
int main(){
    int a,b,i;
    printf("nhap vao so a:");
    scanf("%d",&a);
    b=1;
    for(i=1;i<=a;i++){
        b=(b*i);
    }
    printf("!%d=%d\n",a,b);
}