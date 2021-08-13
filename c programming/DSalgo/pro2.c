  char pass[11],password[11]="healthcore";
    int i=0;
    printf("\n\n\t\tHEALTHCORE");
    printf("\n\n\t\tEnter the password to open healthcore:");
    scanf("%s",&pass);

    if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
            Menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");

            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&exit);
            if (exit==1)
                    {
                        main();
                    }

            else if (exit==0)
                    {
                    close();
                    }
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    
                    }

        }