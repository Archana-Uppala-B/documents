#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char computer)
{   
     //return 1 if you win,-1 if you loose and 0 if the game is draw
    
     //condition for draw
    // cases covered
    //ss
    //ww
    //gg
     if(you==computer)
     return 0;


    //Non-draw conditions
    //cases covered
    // sw
    // ws
    // sg
    // gs
    // wg
    // gw
    if(you=='s' && computer=='w')
     return 1;
    else if (you=='w' && computer=='s')
     return -1;

    if(you=='s'&& computer=='g')
     return -1;
    else if (you=='g'&& computer=='s')
     return 1;

    if(you=='w' && computer=='g')
     return 1;
    else if (you=='g' && computer=='w')
     return -1;

    

}
int main()
{
    char you,computer;
    printf("Enter 's' for snake,'w' for water and 'g' for gun.");
    scanf("%s",&you);
        int number;
    srand(time(0));
    number=rand()%100 + 1; //Generates a random number between 1 to 100
    if(number<33)
      computer='s';
    else if(number>33 && number<66)
      computer='w';
    else
      computer='g';
    int result=snakewatergun(you,computer);
    
    if(result==0)
    {
        printf("Game draw!\n");
    }
    else if (result==1)
    {
        printf("You won!\n");
    }
    else
     {
         printf("You lose!\n");
     }
     printf("You chose %c and computer chose %c\n",you,computer);
    
    return 0;
}