#include<stdio.h>
#include<string.h>
void Bio()
{
	char fn[200],ln[200];
	printf("\nFirst Name: ");
	gets(fn);                            
	printf("\nLast Name: ");
	gets(ln);                               
}

#include<stdio.h>
#include<string.h>
#include"bio.h"
int main()
{

	float choice,cvar;
	printf("Enter your choice: ");
	cvar=scanf("%f",&choice);
	if(cvar==0 || (choice!=1 && choice!=2))
	{
		printf("ERROR! 405: Check your entered data");
	}
	else
	{
		if(choice==1)
		{
			printf("LogIn Page\n");
		}
		else if(choice==2)
		{
			printf("SignUp Page\n");
			Bio();
		}
		else
		{
			printf("Login ERROR!");
		}
	}
}