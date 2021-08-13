/*3. Write a C program to read in a three digit number produce
following output
(Assuming that the input is 347) 3 hundreds, 4 tens, 7 units*/
# include <stdio.h>
int main()
{
    int number,hun,ten,unit;
    printf("Please enter 3-digit number:");
    scanf("%d",&number);
    hun=number/100;
    number=number%100;
    ten=number/10;
    unit=number%10;
    printf("%d hundreds, %d tens, %d units",hun,ten,unit);
}