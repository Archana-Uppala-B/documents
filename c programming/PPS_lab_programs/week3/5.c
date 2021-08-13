/*5. Given as input three integers representing a date as day, month,
year, print the number day, month and year for the next day's date.
Typical input: “28 2 1992” Typical output: “Date following
28:02:1992 is 29:02:1992”*/
# include <stdio.h>

enum { Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

_Bool is31dayMonth (int m)
{
    if ((m==Jan) || (m==Mar)|| (m==May)|| (m==Jul)|| (m==Aug)|| (m==Oct)|| (m==Dec))
    {
      return 1;
    }
    
    else
      return 0;
}

int main()

{  
   //enum month{ Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

    int day;
    int month;
    int year ;

	printf("enter day:");
    scanf("%d",&day);

    printf("enter month:");
    scanf("%d",&month);

    printf("enter year:");
    scanf("%d",&year);
   int nextDay;

 if(month==13)
 {
    month=1;
    year++;
    nextDay=1;
    printf("nextday is %d:%d:%d",nextDay,month,year);
 }
 else if (month==12)
 {
    month=1;
    nextDay=1;
    year++;
    printf("nextday is %d:%d:%d",nextDay,month,year);
 }
 else if(day==28 && month==Feb)
 {   
    if(year%4==0)
    {
        nextDay=29;
        printf("nextday is %d:%d:%d",nextDay,month,year);
        
    }
    else
    {
        nextDay=1;
        month++;
        printf("nextday is %d:%d:%d",nextDay,month,year);
    }
 }
 else if(day==30)
 {
    if(is31dayMonth(month))
       {
          nextDay=31;
          printf("nextday is %d:%d:%d",nextDay,month,year);
       } 
    else
    {
        nextDay=1;
        month++;
        printf("nextday is %d:%d:%d",nextDay,month,year);
    }
 }
 else if(day==31)
 {
    nextDay=1;
    month++;
    printf("nextday is %d:%d:%d",nextDay,month,year);
 }
 return 0;
}
	

	