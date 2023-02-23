#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

void setcolor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
    {
        wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
        SetConsoleTextAttribute(hStdOut,wColor);

    }
}


struct login
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];

};
registe()
{
    FILE *log;
    log=fopen("login12.txt","w");

    struct login l;

    printf("\t\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");


    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t\t*              REGISTRATION FORM                *\n");
    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t\t*************************************************\n");
    printf("\n \n \n");

    printf("\t\t\t\t\t\t\t\tEnter First Name: ");
    scanf("%s",l.fname);

    printf("\t\t\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s",l.lname);

    printf("\t\t\t\t\t\t\t\tEnter Username  : ");
    scanf("%s",l.username);

    printf("\t\t\t\t\t\t\t\tEnter Password  : ");
    scanf("%s",l.password);

    fwrite(&l,sizeof(l),1,log);

    fclose(log);


    printf("\n\n\n\t\t\t\t\t\t Your Username is your UserId. ");
    printf("Now login with UserId and Password!\n");
    printf("\n\n\n\n\n   PRESS ANY KEY TO CONTINUE.........!");

    getch();
    system("CLS");
    login();
}


login()
{
    int a = 0;
    char username[200],password[20];
    do
    {
        FILE *log;
        log = fopen("login12.txt","r");
        struct login l;
        printf("\t\t\t\t\t\t\t*************************************************\n");
    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");

        printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
        printf("\t\t\t\t\t\t\t*                  LOGIN FORM                   *\n");
        printf("\t\t\t\t\t\t\t*       ---------------------------------       *\n");
           printf("\t\t\t\t\t\t\t*************************************************\n");
        printf("\n\t\t\t\t\t\t\t        ENTER USERNAME:-");
        scanf("%s",&username);
        printf("\t\t\t\t\t\t\t        ENTER PASSWORD:-");
        scanf("%s",&password);

        while(fread(&l,sizeof(l),1,log))
        {

            if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
            {

                printf("Successfully Login\n");
                a = a+6;
                break;
            }
            else
            {
                printf("\n\n\n\n\n\t\t\t\t\t\t\t\tIncorrect Password or Username!");
                printf("\n\t\t\t\t\t\t\t\tPlease Enter valid UserId and Password...");
                a++;

                Beep(350,700);
                getch();


            }
            system("CLS");
        }

    }
    while(a<=5);

}



struct CustomerDetails   //STRUCTURE DECLARATION
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
    char nationality[15];
    char email[20];
    char period[10];
    char arrivaldate[10];
} s;

                            //*****Welcome Page for the Hotel Butterfly Cave******//

int main()
{
    int i=0;

    time_t t;
    time(&t);
    char customername;
    char choice;

    system("cls");   // FOR CLEARING SCREEN
    setcolor(15);
    system("cls");

    printf("\t\t\t\t\t\t*************************************************\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*        WELCOME TO HOTEL BUTTERFLY CAVE        *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*           **'Home As You Roam'**              *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*      CONTACT US:18-87454575552,035455852      *\n");
    printf("\t\t\t\t\t\t*             Dhaka, Bangladesh                 *\n");
    printf("\t\t\t\t\t\t*************************************************\n\n\n");
    for(i=0; i<148; i++)
        printf("-");
    printf("\t\t\t\t\t\t    CURRENT DATE & TIME: %s",ctime(&t));
    for(i=0; i<148; i++)
        printf("-");
    printf(" \n\n\n\n PRESS ANY KEY TO CONTINUE:..............");


    getch();
    system("cls");




    int cho;
    printf("\t\t\t\t\t\t*************************************************\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*        WELCOME TO HOTEL BUTTERFLY CAVE        *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*************************************************\n\n\n");

    printf("\t\t\t\t\t\t    *         PRESS 1 FOR REGISTRATION       *\n");
    printf("\n");
    printf("\t\t\t\t\t\t    *         PRESS 2 FOR LOGIN              *\n");
    scanf("\n%d",&cho);

    if(cho==1)
    {

        system("CLS");
        registe();
    }
    else if(cho==2)
    {

        system("CLS");
        login();
        system("cls");

    }

    else if(cho!=1 && cho!=2)
    {
        printf("Error!\nYou entered wrong keyword! Please enter right keyword.");
        Beep(350,700);
        getch();
        system("cls");
        printf("\n");
        login();
    }
    system("cls");





    while (1)      // INFINITE LOOP
    {
        system("cls");
        printf("\t\t\t\t\t\t*************************************************\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*************************************************\n");
        for(i=0; i<148; i++)
            printf("-");

        printf("\t\t\t\t\t\t\t\t\t|MAIN MENU|\n");
        for(i=0; i<148; i++)
            printf("-");
        printf("\n");

        printf("\t\t\t\t\t\t\t\t *Please enter your choice for menu*:");
        printf("\n\n");
        printf(" \n\t\t\t\t\t\t\t\t Enter 1 -> Book a room");
        printf("\n\t\t\t\t\t\t\t\t------------------------");
        printf(" \n\t\t\t\t\t\t\t\t Enter 2 -> View Customer Record");
        printf("\n\t\t\t\t\t\t\t\t----------------------------------");
        printf(" \n\t\t\t\t\t\t\t\t Enter 3 -> Delete Customer Record");
        printf("\n\t\t\t\t\t\t\t\t-----------------------------------");
        printf(" \n\t\t\t\t\t\t\t\t Enter 4 -> Search Customer Record");
        printf("\n\t\t\t\t\t\t\t\t-----------------------------------");
        printf(" \n\t\t\t\t\t\t\t\t Enter 5 -> Edit Record");
        printf("\n\t\t\t\t\t\t\t\t-----------------------");
        printf(" \n\t\t\t\t\t\t\t\t Enter 6 -> Exit");
        printf("\n\t\t\t\t\t\t\t\t-----------------");
        printf("\n\n\n");
        for(i=0; i<148; i++)
            printf("-");
        printf("\t\t\t\t\t\t\t\tCurrent date and time : %s",ctime(&t));
        for(i=0; i<148; i++)
            printf("-");
        printf("\n");

        choice=getche();
        choice=toupper(choice);
        switch(choice)           // SWITCH STATEMENT
        {
        case '1':
            add();
            break;
        case '2':
            list();
            break;
        case '3':
            delete1();
            break;
        case '4':
            search();
            break;
        case '5':
            edit();
            break;
        case '6':
            system("cls");
             printf("\t\t\t\t\t\t*************************************************\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*                                               *\n");
    printf("\t\t\t\t\t\t*************************************************\n");
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!");
            printf("\n\t\t\t\t\t\t\t FOR TRUSTING OUR SERVICE");
            printf("\n\t\t\t\t\t\t *****************************************");
            //	Sleep(2000);
            exit(0);
            break;
        default:
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t\t\t\tINCORRECT INPUT!!");
            Beep(350,700);
            printf("\n\n\n\n\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE.........");
            getch();
        }
    }
}

void add()
{
    FILE *f;
    char test;
    f=fopen("add.txt","a+");
    if(f==0)
    {
        f=fopen("add.txt","w+");
        system("cls");
        printf("Please hold on while we set our database in your computer!!");
        printf("\n Process completed press any key to continue!! ");
        getch();
    }
    while(1)
    {
        system("cls");
         printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*                  BOOKING ROOM                 *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");
        printf("\n\t\t\t\t\t\t\t\tEnter Customer Details:");
        printf("\n\t\t\t\t\t\t\t\t***********************");
        printf("\n\n\n\t\t\t\t\t\t\tEnter Room Number               :");
        scanf("%s",s.roomnumber);
        fflush(stdin);
        printf("\t\t\t\t\t\t\tEnter Name                      :");
        scanf("%s",s.name);
        printf("\t\t\t\t\t\t\tEnter Address                   :");
        scanf("%s",s.address);
        printf("\t\t\t\t\t\t\tEnter Phone Number              :");
        scanf("%s",s.phonenumber);
        printf("\t\t\t\t\t\t\tEnter Nationality               :");
        scanf("%s",s.nationality);
        printf("\t\t\t\t\t\t\tEnter Email                     :");
        scanf("%s",s.email);
        printf("\t\t\t\t\t\t\tEnter Period(\'x\'days)           :");
        scanf("%s",&s.period);
        printf("\t\t\t\t\t\t\tEnter Arrival date(dd\\mm\\yyyy)  :");
        scanf("%s",&s.arrivaldate);
        fwrite(&s,sizeof(s),1,f);
        fflush(stdin);
        printf("\n\n\t\t\t\t\t\t\tCongratulations!Your room is successfully booked!!");
        printf("\n\n\n\n\n\n  PRESS 'Esc' KEY TO EXIT! ANY OTHER KEY TO ADD ANOTHER ROOM........");
        test=getche();
        if(test==27)
            break;

    }
    fclose(f);
}

void list()
{
    FILE *f;
    int i;
    if((f=fopen("add.txt","r"))==NULL)
        exit(0);
        system("cls");
        printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*              VIEW CUSTOMER RECORD             *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");

    printf("ROOM");
    printf("\tNAME");
    printf("\t\tADDRESS");
    printf("\t\t\tPHONENUMBER");
    printf("\t\tNATIONALITY");
    printf("\t\tEMAIL");
    printf("\t\t\tPERIOD");
    printf("\t\tARRIVALDATE\n");

    for(i=0; i<148; i++)
        printf("-");
    while(fread(&s,sizeof(s),1,f)==1)
    {

        printf("\n%s\t%s\t\t%s\t\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s",s.roomnumber, s.name, s.address, s.phonenumber,s.nationality,s.email,s.period,  s.arrivaldate);
    }
    printf("\n");
    for(i=0; i<148; i++)
        printf("-");

    fclose(f);
    getch();
}

void delete1()
{
    FILE *f,*t;
    int i=1;
    char roomnumber[20];
    if((t=fopen("temp.txt","w"))==NULL)
        exit(0);
    if((f=fopen("add.txt","r"))==NULL)
        exit(0);
    system("cls");
    printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*             DELETE CUSTOMER RECORD            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");
    printf("\n\nENTER THE ROOM NUMBER OF THE CUSTOMER WHICH YOU WANT TO DELETE FROM DATABASE: \n");
    fflush(stdin);
    scanf("%s",roomnumber);
    while(fread(&s,sizeof(s),1,f)==1)
    {
        if(strcmp(s.roomnumber,roomnumber)==0)
        {
            i=0;
            continue;
        }
        else
            fwrite(&s,sizeof(s),1,t);
    }
    if(i==1)
    {
        printf("\n\nSorry!!!\nNo customer records found in this room.....!!!");
        Beep(350,700);
        //remove("E:/file.txt");
        //rename("E:/temp.txt","E:/file.txt");
        getch();
        fclose(f);
        fclose(t);
        main();
    }
    fclose(f);
    fclose(t);
    remove("add.txt");
    rename("temp.txt","add.txt");
    printf("\n\nThe Customer is successfully removed from database....");
    fclose(f);
    fclose(t);
    getch();
}

void search()
{
    system("cls");
    FILE *f;
    char roomnumber[20];
    int flag=1;
    f=fopen("add.txt","r+");
    if(f==0)
        exit(0);
    fflush(stdin);
    printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*              SEARCH CUSTOMER RECORD           *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");
    printf("ENTER THE CUSTOMER'S ROOM NUMBER TO SEARCH FOR DETAILS: \n");
    scanf("%s", roomnumber);
    while(fread(&s,sizeof(s),1,f)==1)
    {
        if(strcmp(s.roomnumber,roomnumber)==0)
        {
            flag=0;
            printf("\n\tRecord Found\n ");
            printf("\nRoom Number   :\t%s",s.roomnumber);
            printf("\nName          :\t%s",s.name);
            printf("\nAddress       :\t%s",s.address);
            printf("\nPhone number  :\t%s",s.phonenumber);
            printf("\nNationality   :\t%s",s.nationality);
            printf("\nEmail         :\t%s",s.email);
            printf("\nPeriod        :\t%s",s.period);
            printf("\nArrival date  :\t%s",s.arrivaldate);
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n\tRequested Customer could not be found!");
    }
    getch();
    fclose(f);
}

void edit()
{
    FILE *f;
    int k=1;
    char roomnumber[20];
    long int size=sizeof(s);
    if((f=fopen("add.txt","r+"))==NULL)
        exit(0);
    system("cls");
    printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*              EDIT CUSTOMER DETAILS            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");
    printf("\nEnter Room number of the customer to edit:\n");
    scanf("%[^\n]",roomnumber);
    fflush(stdin);
    while(fread(&s,sizeof(s),1,f)==1)
    {
        if(strcmp(s.roomnumber,roomnumber)==0)
        {
            k=0;
            system("cls");
            printf("\t\t\t\t\t\t*************************************************\n");

    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*               HOTEL BUTTERFLY CAVE            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");
    printf("\t\t\t\t\t\t*              EDIT CUSTOMER DETAILS            *\n");
    printf("\t\t\t\t\t\t*       ---------------------------------       *\n");

    printf("\t\t\t\t\t\t*************************************************\n\n\n");
            printf("\n\t\t\t\t\t\t\t\tEnter Customer New Details:");
            printf("\n\t\t\t\t\t\t\t\t***************************");
            printf("\n\n\n\t\t\t\t\t\t\tEnter Room Number               :");
            scanf("%s",s.roomnumber);
            fflush(stdin);
            printf("\t\t\t\t\t\t\tEnter Name                      :");
            scanf("%s",s.name);
            printf("\t\t\t\t\t\t\tEnter Address                   :");
            scanf("%s",s.address);
            printf("\t\t\t\t\t\t\tEnter Phone Number              :");
            scanf("%s",s.phonenumber);
            printf("\t\t\t\t\t\t\tEnter Nationality               :");
            scanf("%s",s.nationality);
            printf("\t\t\t\t\t\t\tEnter Email                     :");
            scanf("%s",s.email);
            printf("\t\t\t\t\t\t\tEnter Period(\'x\'days)           :");
            scanf("%s",&s.period);
            printf("\t\t\t\t\t\t\tEnter Arrival date(dd\\mm\\yyyy)  :");
            scanf("%s",&s.arrivaldate);
            fseek(f,size,SEEK_CUR);  //to go to desired position infile
            fwrite(&s,sizeof(s),1,f);
            break;
        }
    }
    if(k==1)
    {
        printf("\n\n\n\tTHE RECORD DOESN'T EXIST!!!!");
        fclose(f);
        getch();
    }
    else
    {
        fclose(f);
        printf("\n\n\n\t\t\t\t\t\t\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
        getch();
    }
}



