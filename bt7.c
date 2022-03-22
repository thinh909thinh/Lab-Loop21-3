#include<stdio.h>  
#include<conio.h>  

long int main()  
{  
 long int n1=0,n2=1,n3,i,n;  
 printf("Ban hay nhap n: ");  
 scanf("%d",&n);  
 for(i=0;i<n;++i){
    if(i<=1)
    {
     n3=i;
    }  
    else{  
    n3=n1+n2;  
    n1=n2;  
    n2=n3;
 }
 if(n3<n){
 printf(" %d\n",n3);  
 } else
 break;
 }
}  