#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

	//......................declaration for gotoxy......................

	void gotoxy();

	//......................declaration for file.....................
    
	void filefunction();

	//......................decalaring fn for menu......................

	void startgame();
	void inst();
	void scorecard();
	void hscore();
	void abt();
	void timet();

	//......................decalaring fn for levels......................
    
	void level1();
	void level2();
	void level3();
    
	//.........................global variables.............................

	char username[20];    
	int score;

	//......................gotoxy function......................

	void gotoxy(int x,int y)
 	{
 	printf("%c[%d;%df",0x1B,y,x);
 	}

	//......................main coding......................

	int main()
	{    
    	system("clear");
    	time_t t;
    	time(&t);
     	static counter=0;
        	int time_spent,speed;
   	 
    	int c;
   	 
 	 
    	if(counter==0)
    	{
        	//.....coverpage...............
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");    
        	gotoxy(38,10);
        	printf(" \t\tW\tE\tL\tC\tO\tM\tE");
        	gotoxy(45,12);
        	printf("_______________________________________________________ ");
        	gotoxy(38,16);
        	printf ("\t\t\t***************************");
        	gotoxy(45,18);       	 
        	printf("\t\t\tTYPING TUTOR");
        	gotoxy(38,20);       	 
        	printf ("\t\t\t***************************");
        	gotoxy(45,24);
        	printf("_______________________________________________________ ");
        	gotoxy(45,26);
        	printf("\t\t\tBY CODE CHEFS\n");
        	gotoxy(38,28);       	 
        	printf("__________________________________________________________________\n\n\n ");
        	sleep(1);
        	//..........username details......................
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");    
        	gotoxy(38,16);
        	printf ("\t\t\t*********************************");
        	gotoxy(45,18);    
        	printf("\t\t\tEnter Your Username ");
        	gotoxy(38,20);    
        	printf ("\t\t\t*********************************");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,22);
        	printf("\t\t\t");
        	scanf("%s",username);
       	 
    	}

    	counter++;
       	 
        	//.........main menu.............
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");    
        	gotoxy(64,10);
        	printf("%s",ctime(&t));
        	gotoxy(38,12);
        	printf("\t\t\t\t*****************");
        	gotoxy(48,14);
        	printf("\t\t\t 	MAIN MENU ");
        	gotoxy(38,16);
        	printf("\t\t\t\t*****************");
        	gotoxy(38,18);
        	printf("\t\t\t\t1.START GAME");
        	gotoxy(38,19);
        	printf("\t\t\t\t2.INSTRUCTIONS");
        	gotoxy(38,20);
        	printf("\t\t\t\t3.SCORECARD");
        	gotoxy(38,21);
        	printf("\t\t\t\t4.ABOUT ME");
        	gotoxy(38,22);
        	printf("\t\t\t\t5.EXIT");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,24);
        	printf("\t\t	Enter Your Choice:");
        	scanf("%d",&c);
        	switch(c)
     	{   	 
        	case 1 :startgame();
                	break;
        	case 2 :inst();
                	break;
        	case 3 :scorecard();
                	break;
        	case 4 : abt();
                	break;
        	case 5 :system("clear");
                      	break;
      	 
    	}
          	return(0);    
	}

    	//.................1st page of Game......................
    
        	void startgame()  
	{

   	 
        	int n;
        	system("clear");

        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	gotoxy(38,12);
        	printf("\t\t\t  ************************");
        	gotoxy(48,14);
        	printf("\t\t  	Choose your Level");
        	gotoxy(38,16);
        	printf("\t\t\t  ************************");
        	gotoxy(38,18);
        	printf("\t\t\t\t1.LEVEL 1");
        	gotoxy(38,19);
        	printf("\t\t\t\t2.LEVEL 2");
        	gotoxy(38,20);
        	printf("\t\t\t\t3.LEVEL 3");
        	gotoxy(38,21);
        	printf("\t\t\t\t4.RETURN TO MAIN MENU");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,24);
        	printf("\t\t	Enter Your Choice:");
        	scanf("%d",&n);   	 

    	switch(n)
    	{   	 
        	case 1 :level1();
                  	break;
        	case 2 :level2();
                  	break;
        	case 3 :level3();
                  	break;
        	case 4 :main();
                  	break;
        	default:printf("Please enter a valid option.");
    	}
	}

    	//.................about me.....................
    	void abt()   
   	{
        	system("clear");
        	int n;
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	gotoxy(38,12);
        	printf("\t\t\t  ************************");
        	gotoxy(48,14);
        	printf("\t\t       	ABOUT US");
        	gotoxy(38,16);
        	printf("\t\t\t  ************************");
        	gotoxy(38,19);
        	printf("          	Hello everyone this game is developed by CODECHEF");
        	gotoxy(38,21);
        	printf("\t\t\t\tTeam members are:");
        	gotoxy(38,22);
        	printf("\t\t\t\t1.Apurva Patil");
        	gotoxy(38,23);
        	printf("\t\t\t\t2.Sanjana Nalawade");
        	gotoxy(38,24);
        	printf("\t\t\t\t3.Soundarya Nevrekar");
        	gotoxy(38,25);
        	printf("\t\t\t\t4.Aishwarya Phadale");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,27);
        	printf("PRESS 1 to return to menu:");
        	scanf("%d",&n);	 
            	if(n==1)
        	{
         	main();
        	}   
   	}


    	//...................instruction..............
    	void inst()
    	{
    	system("clear");
    	int n;    
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	gotoxy(38,12);
        	printf("\t\t\t  ************************");
        	gotoxy(48,14);
        	printf("\t\t    	INSTRUCTIONS");
        	gotoxy(38,16);
        	printf("\t\t\t  ************************");
        	gotoxy(38,18);
        	printf("\t\t\t......Rules of the Game......");
        	gotoxy(38,20);
        	printf("=>  Enter your name as player name");
        	gotoxy(38,21);
        	printf("=>  Default time limit is 30 sec");
        	gotoxy(38,22);
        	printf("=>  Select the level and get started ");
        	gotoxy(38,23);
        	printf("=>  Characters are displayed and you have to type them as fast as you can..");
        	gotoxy(38,24);
        	printf("=>  Avoid incorrect typing otherwise game will be over..");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,27);
        	printf("\t\tPRESS 1 to return to menu:");
        	scanf("%d",&n);	 
            	if(n==1)
        	{
         	main();
        	}
    	}
    

    	//.........................level 1.........................

    	void level1()
    	{
        	system("clear");
        	int counter=0,n;
        	score=0;
        	char a;
      	 
    	time_t start, current;
        	start = time(NULL);

        	do
        	{
            	current = time(NULL);
        	//used to generate a new nandom no. every time
        	srand(time(NULL));
       	 
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	counter++;
       	 
        	int n=rand()%26;    	//rand() fn is used to generate a random no.
        	char c=(char)(n+97);	//converts no. to character
        	gotoxy(38,14);
        	printf("\t\t *********************************************");
        	gotoxy(38,16);
        	printf("\t\t\t	TYPE the following CHARACTER");
        	gotoxy(38,19);
        	printf("\t\t\t \b       	%c\n",c);
        	gotoxy(38,24);
        	printf("\t\t *********************************************");                  	 
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,22);
        	printf("\t\t\t   ");
        	scanf(" %c",&a);

             	if(c==a)
             	{
                  	score=score+10;
           	 
             	}
             	else
             	{
                  	break;
           	 
             	}

          	} while (difftime(current, start) <=30);        	 
       	 
        	gotoxy(38,25);
        	printf("\t\t\t	Game Over!!!!");
        	gotoxy(38,26);
        	printf("\t\t\t	Your score is:%d",score);
        	gotoxy(45,27);
        	printf("\t\tPRESS 1 to return to menu:");
            	filefunction();
        	scanf("%d",&n);	 
            	if(n==1)
        	{
         	main();
        	}

    	}

	//.........................level 2.........................

    	void level2()
    	{
    	system("clear");
    	int counter=0,n;
    	score=0;
    	char a;
    	time_t start, current;
    	start = time(NULL);

    	do
    	{
     	current = time(NULL);


    	//used to generate a new nandom no. every time
    	srand(time(NULL));
   	 
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	gotoxy(38,14);
        	counter++;
        	int n=rand()%26;    	//rand() fn is used to generate a random no.
        	char c=(char)(n+65);	//converts no. to character
        	printf("\t\t *********************************************");
        	gotoxy(38,16);
        	printf("\t\t\t	TYPE the following CHARACTER");
        	gotoxy(38,19);
        	printf("\t\t\t \b       	%c\n",c);
       	 
        	gotoxy(38,24);
        	printf("\t\t *********************************************");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,22);
        	printf("\t\t\t   ");
        	scanf(" %c",&a);
       	 
            	if(c==a)
            	{
                	score=score+10;
           	 
            	}
            	else
            	{
                	break;
           	 
            	}
         	} while (difftime(current, start) <=30);
   	 
        	gotoxy(38,25);
        	printf("\t\t\t	Game Over!!!!");
        	gotoxy(38,26);
        	printf("\t\t\t	Your score is:%d",score);
        	gotoxy(45,29);
       	 
        	gotoxy(45,27);
        	printf("\t\tPRESS 1 to return to menu:");
            	filefunction();
        	scanf("%d",&n);	 
            	if(n==1)
        	{
         	main();
        	}
    	}
	//.........................level 3.........................
    
	void level3()
	{
    	system("clear");
    	int counter=0,n;
    	score=0;
    	char a,c;
    	time_t start, current;
    	start = time(NULL);

    	do
    	{
     	current = time(NULL);

     	//used to generate a new nandom no. every time
    	srand(time(NULL));
  	 
       	system("clear");
       	gotoxy(38,8);
       	printf("__________________________________________________________________ ");
       	gotoxy(38,14);
        	counter++;
        	int n=rand()%26;    	//rand() fn is used to generate a random no.
        	int n1=rand()%2;    	//rand() fn is used to generate a random no.
        	if(n1==0)       	 
        	{
            	c=(char)(n+65);	//converts no. to character
        	}
        	else
        	{
            	c=(char)(n+97);	//converts no. to character
        	}
   	 
   	 
        	printf("\t\t *********************************************");
        	gotoxy(38,16);
        	printf("\t\t\t	TYPE the following CHARACTER");
        	gotoxy(38,19);
        	printf("\t\t\t       	%c",c);
        	gotoxy(38,24);
        	printf("\t\t *********************************************");
       	 
       	 
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(45,22);
        	printf("\t\t\t   ");
        	scanf(" %c",&a);
       	 
            	if(c==a)
            	{
                	score=score+10;
           	 
            	}
            	else
            	{
                	break;
           	 
            	}
        	} while (difftime(current, start) <=30);
   	 
        	gotoxy(38,25);
        	printf("\t\t\t	Game Over!!!!");
        	gotoxy(38,26);
        	printf("\t\t\t	Your score is:%d",score);
        	gotoxy(45,29);
      	 
        	gotoxy(45,27);
        	printf("\t\tPRESS 1 to return to menu:");
            	filefunction();
        	scanf("%d",&n);	 
            	if(n==1)
        	{
         	main();
        	}
	}

	//.................Score Card............................

	void scorecard()
    	{
        	int n;
        	system("clear");
        	gotoxy(38,8);
        	printf("__________________________________________________________________ ");
        	gotoxy(38,12);
        	printf("\t\t\t  ************************");
        	gotoxy(48,14);
        	printf("\t\t    	SCORE CARD");
        	gotoxy(38,16);
        	printf("\t\t\t  ************************");
        	gotoxy(38,18);
        	printf("\t\t\t......Username And Score.....");
        	gotoxy(38,28);
        	printf("__________________________________________________________________ ");
        	gotoxy(65,20);

            	FILE *p;
            	char ch;
            	p=fopen("Database.txt","r");    
            	do
            	{
            	ch=fgetc(p);
            	printf("%c",ch);
            	if(ch=='\n')
            	{
                	printf("\t\t\t\t\t\t\t  	");
            	}
            	}while(ch!=EOF);
            	fclose(p);

            	gotoxy(45,27);
            	printf("\t\tPRESS 1 to return to menu:");
            	scanf("%d",&n);	 
             	if(n==1)
            	{
            	main();
            	}
        	}

	//......................file............................................
         	 
        	void filefunction()
        	{
             	FILE *p;
             	p=fopen("Database.txt","a");
             	fprintf(p,"%s\t%d\n",username,score);
             	fclose(p);
        	}  
 	 











