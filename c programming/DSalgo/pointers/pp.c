# include <stdio.h>
int main()
{
    int i=3;
    int *j;
    j=&i;
    printf("address of i=%u\n",&i);
    printf("address of i=%u\n",j);
    printf("addtrss of j=%u\n",&j);
    printf("value at j=%u\n",j);
    printf("value  of i=%d\n",i);
    printf("value of i=%d\n",*j);
    return 0;
}