#include "stdio.h"
#include "conio.h"
void main(void)
{
    printf("nhap: ");
    char c=getch();
        if 
            (c>='a'&&c<='z') printf("Chu cai in thuong");
        
        else if (c>='A'&&c<='Z') printf("Chu cai in hoa");
        
        else if (c>='1'&&c<='9') printf("Chu so");
        
        else printf("Ki tu dac biet");
}