/*Define a structure called cricket that will describe the following information:
player name
team name
batting average
Using cricket, declare an array player with 5 elements and write a program to read the information about tall the 5 players and print a team-wise list containing names of player with their batting average.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct cricket
{
	char pname[20];
	char tname[20];
	float bavg;
};

int main()
{
	struct cricket s[10],t;
	int i,j,n=5;
	float p;

	printf("\nEnter data of %d players",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter PName TName BAvg for player-%d = ",i+1);
		scanf("%s %s %f",s[i].pname,s[i].tname,&s[i].bavg);
	
	}

	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(strcmp(s[j-1].tname,s[j].tname)>0)
			{
				t=s[j-1];
				s[j-1]=s[j];
				s[j]=t;
			}
		}
	}

	printf("\nAfter teamwise sorting... Player list is ");
	for(i=0;i<n;i++)
	{
		printf("\n%-20s %-20s %.2f",s[i].pname,s[i].tname,s[i].bavg);
	}

	
	return 0;
}