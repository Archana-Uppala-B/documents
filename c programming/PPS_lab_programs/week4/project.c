# include <stdio.h>
#include <string.h>
# include <stdlib.h>

void signup(void);
void login(void);

struct{
    char password[20];
    char username[20];
}s;
 FILE *fp;
 void main()
 {
     int ch,i;
     while(1)
     {
         printf("\n            -------Health Core-------                   ");
         printf("\n           -----You're Welcome here-----         ");
         printf("\n                press 1 for login                ");
         printf("\n                press 2 for signup                ");
         printf("\n                 press 0 for exit                  ");
         printf("\n            _____*_*_*_*_*_*_*_*_*_*_*_*_*_*_____        ");
         scanf("%d",&ch);
         switch(ch)
         {
         	case 1:
         	for( i=0;i<40;i++)
         	{
         		printf("_");
         	}
           	login();
         	break;
            case 2:
         	for( i=0;i<40;i++)
         	{
         		printf("_");
			}
			signup();
			break;
			case 0:
			 exit(0);
			 break;
		 }
      }      /*while*/
      
}
   void signup()
     {
   	    char c;
   	    int i;
   	    fp=fopen("record.bin","ab");
   	    printf("-------signup zone------");
   	    printf("set username");
   	    gets(s.username);
   	    printf("set password");
   	    for(i=0;c!=13;i++)
   	    {
   	    	s.password[i]=c;
		}
		printf("Press Enter to continue");
		if(c==13)
		{
			fwrite(&s,sizeof(s),1,fp);
			printf("\n Information Saved");
		}
   	    else
   	    return;
   	    fclose(fp);
   	  
     }
    void login()
    {
    	int c,i;
    	char username[20];
    	char pass[20];
    	char chkp;
    	char chku;
    	printf("\n            -------login zone-----       ");
    	fp=fopen("record.bin","rb");
    	printf("\n   Enter username:");
        scanf("%s",username);
    	printf("\n    Enter Password:");
        scanf("%s",pass);
		
		while(!feof(fp))
		{
			fread(&s,sizeof(s),1,fp);
			chku=strcmp(username,s.username);
			chkp=strcmp(pass,s.password);
			if(chku==0 && chkp!=0)
			{
				printf("invalid password!!!!");
				break;
			}
			else if(chku!=0 && chkp==0)
			{
				printf("invalid username!!!!");
				break;
			}
			else if(chku==0 && chkp==0)
			{
				printf("-----Hello %s Welcome here----",s.username);
				break;
			}
			
	    }
	}

 


