#include<stdio.h>
#include<string.h>
#include<windows.h>
int fordelay(int);
void Menu();
void close();
void either1or2();
int login();
void registration();
void Home();
void learn();
void either3or4();
void learning_centre();
void shop();
void learn();

struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};

struct login l;

int main()
{   
   printf("\n\n\t\t--HEALTHCORE--");
   printf("\n\tAt Healthcore Nutrition, we have a varied range of products that complement your daily nutrition, help to maintain your overall health, and facilitate you to achieve your nutrition goals. ");
   printf("\n\tStart your day with a range of flavoured and high-quality shakes (meal replacements) that blend the right amount of protein, carbohydrate and other essential micronutrients or refresh your body and mind with a cup of instant energy drink mix and much more. Our wide range of products help to maintain your digestive, cardiovascular and immune system health");
   Menu();
return 0;
}

void Menu()
{   printf("\n\n\t\tPress 1 for registartion");
    printf("\n\t\tPress 2 for login if already registered");
    either1or2();
}

void either1or2()
{
        int num;
    scanf("%d",&num);
 switch(num)
  {
    case 1:
     registration();
     break;
     
    case 2:
     login();
     break;
      
    default:
     printf("\n\n\t\tYou have made a great choice by choosing our Nutrition");
  }
}
int fordelay(int j)
{
    int i,k;
    for(i=0;i<j;i++)
        k=i;
}

int login()
{
    char username[30],password[20];
    char chku,chkp;
    FILE *log;
    log=fopen("login.txt","r");
    struct login l;
    printf("\n\n\t\t--------Login Zone---------");
    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    scanf("%s",&username);
    printf("\nPassword: ");
    scanf("%s",&password);

    while(!feof(log))
        {
            fread(&l,sizeof(l),1,log);
            chku=strcmp(username,l.username);
            chkp=strcmp(password,l.password);
            if(chku==0 && chkp==0)
            {
                printf("\nHello %s !! Welcome",l.fname);
                printf("\nlogin successful!!");
            
            }
            else if(chku!=0 && chkp==0)
                printf("Invalid Username!!");
            
            else if (chku==0 && chkp!=0)
                printf("Invalid Password!!");
                
            else
               printf(".....");
              
      Home();        
}
fclose(log);

}

void registration()
{

    FILE *log;
    log=fopen("login.txt","w");
    struct login l;
    printf("\n\n\t\t--------Registration zone-----------");
    printf("\nWelcome to your online Healthcore services. you need to enter some details for registration.\n\n");
    printf("\nEnter First Name:\n");
    scanf("%s",&l.fname);
    //fprintf(log,l.fname);
    printf("\nEnter Surname:\n");
    scanf("%s",&l.lname);

    printf("Thank you.\nNow please choose a username and password as credentials for system login.\nEnsure the username is no more than 30 characters long.\nEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n"); 

    printf("\nSET Username:\n");
    scanf("%s",l.username);
    printf("\nSET Password:\n");
    scanf("%s",l.password);

    fwrite(&l,sizeof(l),1,log);
    printf("Information saved....");

    fclose(log);

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",l.fname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    login();
}
void Home()
{
   printf("\n\n\t\t--------Home----------");
    printf("\n\n\tpress 3 to go to shop");
    printf("\n\n\tpress 4 to go to Learning Centre");
    either3or4();
}

void either3or4()
{
    int num;
    scanf("%d",&num);

    switch(num)
    {
        case 3:
         shop();
         break;
        case 4:
         learning_centre();
         break;
    }
}
void shop()

{   
    printf("\n\n\t\t-------Shop zone--------");
    printf("\n\n\t\tThe items in the shop are:");
    printf("\n\n\t\t---core products---:");
    printf("\n\n\t\t *Multivitamin Minerals and herbal Tablets");
    printf("\n\n\t\t *Breakfast shakemix");
    printf("\n\n\t\t *Protein Powder");
    printf("\n\n\t\t *Greentea mix");

    
   
}
void learning_centre()
{
	printf("\n\n\t\t-----Learning Centre------");
    printf("\n\n\t\tTips for Healthy Life:");

    printf("\n\n\t\tpress 1 to get tip about Skin health");
    printf("\n\n\t\tpress 2 to get tip about bone health");
    printf("\n\n\t\tpress 3 to get  general tips");
    printf("\n\n\t\tpress 4 to get tip about Mental health");
    learn();
}

void learn()
{
    int num;
    scanf("%d",&num);
    switch(num)
    {
        case 1:
         printf("\n\n\t\t * A good skin can be achieved by sulight,water,fruits,milk provide a lot of value to the skin");
         printf("\n\n\t\t *Having some dark chocolate can help make your skin look smoother and keep it better hydrated");
         printf("\n\n\t\t *Green tea has anti-ageing properties.Switching to green tea can keep your skin youthful for a longer time");
         break;
        case 2:
         printf("\n\n\t\t * Calcium builds strong bones.Get calcium from green vegetables,beans or fortified foods.Vitamin D controls your body's use of calcium");
        case 3:
         printf("\n\n\t\t *Avoid consuming too many artificial sweeteners as they may cause gastric problems");
         printf("\n\n\t\t*Camphor vaprs can help relieve nasal congestion.Put some camphor in your handkerchief and inhale at intervals");
        case 4:
         printf("\n\n\t\t *Exercise is not only good for your physical health but also improves your concentration and thinking.Thereby making you more productive");
     close();
    }

}

void close()
{
    printf("\n\n\t\tThankyou for visiting us...");
}
