#include<stdio.h>
int main(){
    int n,s;
    printf("nhap n");
    scanf("%d",&n);
    for(int a=1;a<n;a++){
        s=n%a;
        if(s==0){
        printf("%d",a);
    }
}
}
