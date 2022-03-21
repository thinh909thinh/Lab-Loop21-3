#include<stdio.h>
int main(){
    int a,i ,j;
    printf("nha vao so dong a:");
    scanf("%d",&a);
    i=0;
    while (i<=a)
    {
        j=0;
        while (j<=i) { 
               printf("*");
                j++;   
        }
        i++;
        printf("\n");
    }
}