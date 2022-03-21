#include<stdio.h>
int main(){
    int a,b,s;
    printf("nhap so dong a");
    scanf("%d",&a);
    for(s=0;a!=0;a/=10){
        b=a%10;
        s=s+b;
        printf("tach so %d\n",b);
    }
     printf("tong la %d",s);
}