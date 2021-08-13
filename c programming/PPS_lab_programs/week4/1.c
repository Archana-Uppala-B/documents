//Tutorial 4: Loops, while and for loops:
//Lab 4: Iterative problems e.g., sum of series

//1. Write a C program to find the sum of first 100 odd nos. and even nos.
# include <stdio.h>
 void main()
{
    int i, odd_sum = 0, even_sum = 0,count=0;
        for(i=1;i<=200;i++)
         if(i%2==0)
         {
             even_sum=even_sum+i;
             count++;
             //printf("count is %d",count);
         }
         else
         { odd_sum=odd_sum+i;
             count++;
            //printf("count is %d",count);
         }
    printf("Sum of first 100 odd numbers  = %d\n", odd_sum);
    printf("Sum of first 100 even numbers = %d\n", even_sum);
}

