/*   c project
 *   Periodic Table
 *   Created on: 26-Nov-2016
 *   Auther: Suraj Durgesht
 *   IIIT DHARWAD
 */
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLINE 1000

int main()
{
	char e[MAXLINE];   //elements
	char ch,s;
	int found=0,a;
	char b[100],c;
	char table;
	float m;
    FILE *fp;
    char another='y';

    jump:
    // system("cls");           // clear screen

    // ************Main menu ********************/

    printf("\n\t\t **** Welcome to Modern Periodic Table\a ****");

    printf("\n\n\n\t\t\t\tMAIN MENU\n\t\t================================================\n\t\t[1] Print the Mordern Periodic Table\n\t\t[2] Search the element by it's symbol\n\t\t[3] Search the atomic number of an element by symbol\n\t\t[4] Search the atomic mass of an element\n\t\t[5]Find out electonic config.of an element \n\t\t[6]Find group and period of element by symbol  \n\t\t[7]Characteristic of block(s,p,d,f)\n\t\t[8]All information of element by it's symbol\n\t\t[0] Exit\n\t\t================================================\n\t\t");

    printf("Enter the choice:");

    scanf("%d",&ch);    /*element to search*/
	switch(ch)
	{
        case 0:
            printf("\n\t\t\"Thank you!\"\n\a");                 //thank case
            break;

	    case 1:
	        //system("cls");                                         // to print mordern periodic table
            fp =fopen("modern periodic table.txt","r");          ////Check the file location
            while((table=getc(fp))!=EOF)
                printf("%c",table);
            fclose(fp);
            break;

        case 2:
            //system("cls");
            while(another=='y')                          //check continue
            {
                if((fp=fopen("element name.txt","r"))==NULL)   /*Check the file location*/
                {
                    printf("An Unexpected error encountered while opening the file 'element name.txt'Please check the file location\n");
                    exit(1);
                }
                printf("Enter the Element's chemical symbol to find its name : \n");
                scanf("%s",b);
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     /*Compare string one by one*/
                    {
                        while((c=getc(fp))!='.')
                        printf("%c",c);
                        //fscanf(fp,"%c",&c);
                        break;
                    }
                }
                printf("\nDo you want to search more?(Y/N)\a: ");
                fflush(stdin);
                scanf("%c",&another);
                //continue;
                }
                //break;

        case 3:
            //system("cls");
            while(another=='y')
            {
                if((fp=fopen("atomic number.txt","r"))==NULL)   //Check the file location
                {
                    printf("An Unexpected error encountered while opening the file 'atomic number.txt' Please check the file location\n");
                    exit(1);
                }
                printf("Enter the Element chemical symbol to find its Atomic number : \n");
                scanf("%s",b);
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     //Compare string one by one
                    {
                        fscanf(fp,"%d",&a);
                        found=1;
                        break;
                    }
                }
                if(found==1)
                    printf("The atomic number of %s is = %d .\n",b,a);
                else
                    printf("The input element does not exist in the Modern Periodic Table...OMG you have invented a new element... ;\nPlease, enter correct symbol.\n");

                printf("\nDO you want to search more?(Y/N)\a: ");
                fflush(stdin);
                scanf("%c",&another);
               //continue;
            }
            break;
            //system("cls");

     case 4:
         //system("cls");
         while(another=='y')
            {

                if((fp=fopen("mass number.txt","r"))==NULL)   /*Check the file location*/
                {
                    printf("An Unexpected error encountered while opening the file 'mass number.txt'Please check the file location\n");
                    exit(1);
                }
                printf("\nEnter the Element's chemical symbol to find its Mass number:");
                scanf("%s",b);
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     /*Compare string one by one*/
                    {
                        fscanf(fp,"%f",&m);
                        found=1;
                        break;
                    }
                }
                if(found==1)
                    printf("\nThe Mass number of %s is=%f\n",b,m);
                else
                    printf("The input element does not exist in the Modern Periodic Table...OMG you have invented a new element... ;\nPlease, enter correct symbol.\n");
                printf("\nDo you want to search more(Y/N)\a: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;

       case 5:
           //system("cls");
           while(another=='y')
           {

                if((fp=fopen("configuration.txt","r"))==NULL)   /*Check the file location*/
                {
                    printf("An Unexpected error encountered while opening the file 'configuration.txt'Please check the file location\n");
                    exit(1);
                }
                printf("Enter the Element's chemical symbol to find its Electronic configuration : \n");
                scanf("%s",b);
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     /*Compare string one by one*/
                    {
                        while((c=getc(fp))!='.')
                        printf("%c",c);
                        //fscanf(fp,"%c",&c);
                        break;
                    }
                }
                printf("\nWant to enter another any more Y/N\a: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;

		case 6:
		    //system("cls");
		    while(another=='y')
            {

                if((fp=fopen("grp&period.txt","r"))==NULL)   /*Check the file location*/
                {
                    printf("An Unexpected error encountered while opening the file 'grp&period.txt'Please check the file location\n");
                    exit(1);
                }
                printf("Enter the Element's chemical symbol to find its Position:");
                scanf("%s",b);
                printf("\tGroup\t\tPeriod\n");
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     /*Compare string one by one*/
                    {
                        while((c=getc(fp))!='\n')
                        printf("%c",c);
                        //fscanf(fp,"%c",&c);
                        break;
                    }
                }
                printf("\nWant to enter another any more Y/N\a: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;
        case 7:
           // system("cls");
            //printf("Enter a block for getting information:\n");
            while(another=='y')
            {
                printf("Enter a block for getting information:\n");
                //getch();//scanf("%c",&ch);
                if('s'==getch())
                //switch(ch)
                {
                //case 's':
                    fp = fopen( "s block.txt","r");          ////Check the file location of s block
                    while ((table=getc(fp))!=EOF)
                        printf("%c",table);
                    fclose(fp);
                    //break;
            //default:
              //  printf("Sorry,Invalid option.");
                }
                else if('d'==getch())
                {
                    fp = fopen( "d block.txt","r");          ////Check the file location of d block
                    while ((table=getc(fp))!=EOF)
                        printf("%c",table);
                    fclose(fp);
                    //break;
                }
                else if('p'==getch())
                {
                fp = fopen( "p block.txt","r");          ////Check the file location of p block
                while ((table=getc(fp))!=EOF)
                    printf("%c",table);
                fclose(fp);
                //break;
                }
                else if('f'==getch())
                {
                fp = fopen( "f block.txt","r");          ////Check the file location of f block
                while ((table=getc(fp))!=EOF)
                    printf("%c",table);
                fclose(fp);
                //break;
                }
                else
                {
                    printf("Sorry,Invalid option.");
                }

                printf("\nWant to enter another any more Y/N\a: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;
        case 8:
           // system("cls");
            while(another=='y')
           {

                if((fp=fopen("all data.txt","r"))==NULL)   /*Check the file location*/
                {
                    printf("An Unexpected error encountered while opening the file 'all data.txt'Please check the file location\n");
                    exit(1);
                }
                printf("Enter the Element's chemical symbol to get all information: \n");
                scanf("%s",b);
                printf("\tweight\t\tname\t\tatomic no\tm.p\tb.p\tdensity\t\tyear\t\tconfiguration\t\t\tionisation(ev)\n");
                while(fscanf(fp,"%s",e)!=EOF)
                {
                    if(strcmpi(b,e)==0)     /*Compare string one by one*/
                    {
                        while((c=getc(fp))!=',')
                        printf("%c",c);
                        //fscanf(fp,"%c",&c);
                        break;
                    }
                }
                printf("\nDo you want to search more?(Y/N)\a: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;
    }
    //system("cls");
    printf("\n\n\t[11] Main Menu\t\t[00] Exit\n");              // to go main menu
    printf("\n\n\n..::Enter the Command : ");
    scanf("%d",&ch);

    switch (ch)
    {
        case 11:
            goto jump;                            //jump declear above
        case 00:
            break;
        default:
            printf("Invalid choice");
            break;
    }
    //system("cls");
    return 0;
}                                                  //end of program
