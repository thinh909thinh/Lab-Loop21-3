#include<stdio.h>
int main(){
    int a,i=0 ,j=0;
    printf("nha vao so dong a:");
    scanf("%d",&a);
    while (i<=a)
    {
        while (j<=i) { 
               printf("*");
                j++;   
        }
        i++;
        printf("\n");
    }
}