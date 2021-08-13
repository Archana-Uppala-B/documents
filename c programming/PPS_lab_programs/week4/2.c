//2. Write a C program to display first 100 prime nos
#include <stdio.h>  
int main()  
{  
    int ct=0,n=0,i=1,j=1;  
    while(n<100)  
    {  
        j=1;  
        ct=0;  
        while(j<=i)  
        {  
            if(i%j==0)  
            ct++;  
            j++;  
        }  
        if(ct==2)  
        {  
            printf("%d ",i);  
            n++;  
        }  
        i++;  
}  
}  