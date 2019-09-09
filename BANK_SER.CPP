
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<graphics.h>
#include<fstream.h>
#include<ctype.h>
#include <stdlib.h>
#include<time.h>
#include<dos.h>

int n=0;
struct record
{
char name[35],amount[20];
}
number[50];
void add1(){
int i = 0;
char name[20];
FILE *fp;
fp=fopen("project.DAT","a");
if(fp==NULL){printf("Error!");exit(1);}
printf("\n\n\nEnter name:: %s ",n+1);
scanf("%s",number[n].name);
fprintf(fp,"\nNumber%d \n___________________\n___________________\nName:----->%s \n", n+1,number[n].name);
printf("Enter amount: %s",n+1);
scanf("%s",number[n].amount);
fprintf(fp,"Amount:----->%s\n___________________\n___________________\n",number[n].amount);
n++;
fclose(fp);
}

void add2(){
int i = 0;
FILE *fq;
fq=fopen("project1.DAT","a");
if(fq==NULL){printf("Error!");exit(1);}
printf("\n\n\nEnter name:: %s ",n+1);
scanf("%s",number[n].name);
fprintf(fq,"\nNumber%d \n___________________\n___________________\nName:----->%s \n", n+1,number[n].name);
printf("Enter amount: %s",n+1);
scanf("%s",number[n].amount);
fprintf(fq,"Amount:----->%s\n___________________\n___________________\n",number[n].amount);
n++;
fclose(fq);
}

void add3(){
int i = 0;
FILE *fr;
fr=fopen("project2.DAT","a");
if(fr==NULL){printf("Error!");exit(1);}
printf("\n\n\nEnter name:: %s ",n+1);
scanf("%s",number[n].name);
fprintf(fr,"\nNumber%d \n___________________\n___________________\nName:----->%s \n", n+1,number[n].name);
printf("Enter amount: %s",n+1);
scanf("%s",number[n].amount);
fprintf(fr,"Amount:----->%s\n___________________\n___________________\n",number[n].amount);
n++;
fclose(fr);
}
void search1()
{
FILE *fp;
fp=fopen("project.DAT","r");

	char name[35];
	int amount;
	int found=0;
	int i = 0;
	if (n==0) printf("NO DATA");
else{
printf("\n\nEnter the account holder name:");
scanf("%s",name);
for (i=0; i<n; i++){
if (strcmp(name,number[i].name)==0){
found=1;
printf("\nHere is The person Name: %s \nAmount: %s\n",number[i].name,number[i].amount);
break;
}
}
if (found==0)
printf("NOT FOUND");
}
getch();
}
void search2()
{
FILE *fq;
fq=fopen("project1.DAT","r");

	char name[35];
	int amount;
	int found=0;
	int i = 0;
	if (n==0) printf("NO DATA");
else{
printf("\n\nEnter the account holder name:");
scanf("%s",name);
for (i=0; i<n; i++){
if (strcmp(name,number[i].name)==0){
found=1;
printf("\nHere is The person Name: %s \nAmount: %s\n",number[i].name,number[i].amount);
break;
}
}
if (found==0)
printf("NOT FOUND");
}
getch();
}
void search3()
{
FILE *fr;
fr=fopen("project2.DAT","r");

	char name[35];
	int amount;
	int found=0;
	int i = 0;
	if (n==0) printf("NO DATA");
else{
printf("\n\nEnter the account holder name:");
scanf("%s",name);
for (i=0; i<n; i++){
if (strcmp(name,number[i].name)==0){
found=1;
printf("\nHere is The person Name: %s \nAmount: %s\n",number[i].name,number[i].amount);
break;
}
}
if (found==0)
printf("NOT FOUND");
}
getch();
}

void del()
{
	 char name[23];
	 int i,j;
	 int found=0;
	 if (n==0){ printf("no data");   getch();}
	 else{
	printf("Enter the phone number of the person you want to delete:");
	scanf("%s",name);
	for (i=0; i<n; i++){
		if (strcmp(name,number[i].name)==0){
			found=1;
			printf("\n\nThe Number is Delete successfully\n\n");

			break;
		}
	}
	if (found==0)
		printf("The person you want to delete is not found");

		n--;}
	 }





int main()
{
textcolor(BLUE);
clrscr();


FILE *fp;
FILE *fq;
FILE *fr;

int z,d,e,f,h,j,k,m,n,t,o,w,q,se,loop;
float g;
char a[10],b[10],x[]="SHAWON",y[]="*****",r,s[10000],st[1000],de[85]="*****THIS PROJECT IS DEVELOPED BY sH@WOn*****     PLEASE WAIT FOR LOADING.......",end[34]="=====THANKS FOR BEING WITH US=====";

cout<<"USERNAME--->";
cin>>a;
cout<<"PASSWORD--->";
cin>>b;
if(strcmp(a,x)==0 && strcmp(b,y)==0)
{
cout<<endl<<endl<<setw(60)<<"*****WELCOME TO ONLINE BANKING SERVICE*****";
printf("\n\n");
for(se=0;se<=85;se++)
{
delay(70);

printf("%c",de[se]);


}
printf("\n");
printf("  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
printf("  ::: ::::::: ::   ::    ::    ::     :: ::::::: ::    :: ::::::::::::::::::::\n");
printf("  ::: ::   :: ::   ::   ::::   ::     :: ::   :: ::    :: ::::::::::::::::::::\n");
printf("  ::: ::      ::   ::  ::  ::  ::     :: ::   :: :::   :: :: :::: :::: :::: ::\n");
printf("  ::: ::::::: ::::::: :::::::: ::     :: ::   :: :: :: :: :: :    :    :    ::\n");
printf("  :::      :: ::   :: ::    :: :: ::: :: ::   :: ::   ::: :: :    :::: :::: ::\n");
printf("  ::: ::   :: ::   :: ::    :: :::: :::: ::   :: ::    :: :: :       : :    ::\n");
printf("  ::: ::::::: ::   :: ::    :: ::     :: ::::::: ::    :: :: :::: :::: :::: ::\n");
printf("  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
level:
cout<<endl<<"*****SHOW YOUR OPTION*****"<<endl<<endl<<"1->NEW ACCOUNT"<<endl<<"2->ALL ACCOUNT HOLDER LIST"<<endl<<"3->SEARCH ACCOUNT"<<endl<<"4->DELETE ACCOUNT"<<endl<<"5->USE CALCULATOR"<<endl<<"6->ABOUT US"<<endl<<"7->HELP"<<endl<<"8->EXIT"<<endl<<endl<<"*****PRESS(1-8)KEY TO SELECT*****"<<endl<<endl;
cin>>z;
switch(z)
{
case 1:
cout<<"*****SELECT YOUR ACCOUNT TYPE*****"<<endl<<endl<<"1->C0RRENT ACCOUNT"<<endl<<"2->SAVINGS ACCOUNT"<<endl<<"3->DEPOGET ACCOUNT"<<endl<<endl<<"*****PRESS(1-3) FOR SELECT"<<endl;

cin>>n;
if(n==1)
{

add1();
goto level;
}
else if(n==2)
{
add2();
goto level;
}
else if(n==3)
{
add3();
goto level;
}
break;


case 2:
cout<<"*****SELECT YOUR ACCOUNT TYPE*****"<<endl<<endl<<"1->C0RRENT ACCOUNT"<<endl<<"2->SAVINGS ACCOUNT"<<endl<<"3->DEPOGET ACCOUNT"<<endl<<endl<<"*****PRESS(1-3) FOR SELECT"<<endl;
cin>>o;
if(o==1)
{
FILE *fp;
fp=fopen("project.DAT","r");
while(fscanf(fp,"%s",s)!=EOF)
{
  printf("%s%s\n",s);
}
goto level;
}
else if(o==2)
{
FILE *fq;
fq=fopen("project1.DAT","r");
while(fscanf(fq,"%s",s)!=EOF)
{
  printf("%s%s\n",s);
}
goto level;
}
else if(o==3)
{
FILE *fr;
fr=fopen("project2.DAT","r");
while(fscanf(fr,"%s",s)!=EOF)
{
  printf("%s%s\n",s);
}
goto level;
}

break;

case 3:
cout<<"*****SELECT YOUR ACCOUNT TYPE*****"<<endl<<endl<<"1->C0RRENT ACCOUNT"<<endl<<"2->SAVINGS ACCOUNT"<<endl<<"3->DEPOGET ACCOUNT"<<endl<<endl<<"*****PRESS(1-3) FOR SELECT"<<endl;
cin>>q;
if(q==1)
{
search1();
goto level;
}
else if(q==2)
{
search2();
goto level;
}
else if(q==3)
{
search3();
goto level;
}
break;

case 4:
del();
goto level;
break;


case 5:
cout<<"PRESS 1 FOR [+]"<<endl<<"PRESS 2 FOR [-]"<<endl<<"PRESS 3 FOR [*]"<<endl<<"PRESS 4 FOR [/]"<<endl<<"*****PRESS(1-4)FOR SELECT*****"<<endl;
cin>>d;

if(d==1)
{
cout<<"INPUT YOUR NUMBER"<<endl;
cin>>e>>f;
g=e+f;
cout<<"RESULT::"<<g<<endl;
goto level;
}
else if(d==2)
{

cout<<"INPUT YOUR NUMBER"<<endl;
cin>>e>>f;
g=e-f;
cout<<"RESULT::"<<g<<endl;
goto level;
}
else if(d==3)
{

cout<<"INPUT YOUR NUMBER"<<endl;
cin>>e>>f;
g=e*f;
cout<<"RESULT::"<<g<<endl;
goto level;
}
else if(d==4)
{

cout<<"INPUT YOUR NUMBER"<<endl;
cin>>e>>f;
g=e/f;
cout<<"RESULT::"<<g<<endl;
goto level;
}
break;

case 6:

cout<<setw(50)<<"*****NORTH WESTERN UNIVERSITY*****"<<endl<<"                  PROJECT NAME->BANK MANAGEMENT"<<endl<<"             CSE-[SUMMER-2014]-[SECTION-B]-[GROUP-4]"<<endl<<endl<<"MD HABIBUR RAHMAN-->ID NO-->20142074010"<<setw(40)<<"[Email-->crazzyshawon@gmail.com]"<<endl<<"MD WAHID NAZIM RAHAT -->ID NO-->20142070010"<<endl<<"MD ANIK ISLAM -->ID NO-->20142043010"<<setw(39)<<"[Email-->ianik157@gmail.com]"<<endl<<"MD FARID UDDIN AHMED-->ID NO-->20142046010"<<setw(36)<<"[Email-->md.farid452@gmail.com]"<<endl<<"IFRAT JAHAN MUKTA-->ID NO-->20142052010"<<setw(38)<<"[Email-->anishaorin@gmail.com]"<<endl<<"FAUZIA JAHAN LONA-->ID NO-->20142064010"<<endl<<"ANINDYA SUNDER ROY-->ID NO-->20142073010"<<setw(37)<<"[Email-->aninsunroy@gmail.com]"<<endl<<endl;
goto level;

break;

case 7:
printf("\t\t****Welcome to our Banking Management program****\n\tWe will gide you to make your account safe & easyer to opperate\n\tThere are some instructions below to Access your account....\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-1.Creat Account\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-2.Cashout\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-3.Account Holder Lists\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-4.Delete Account\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-5.Use calculator\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-6.About Us\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\NO-7.Exit\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\******Enter Your choise(1-6) ******");
	scanf("%d",&w);
	if(w==1)
	{printf("\t\t\t\t\t\t\t\t\t\t\t\Enter your name. \n\tAnd add your details,\n\tAnd your cash amount,etc.\n\t\n\t>>>There are 3 types of Account you can create<<<\n\n\tCurrent account,Savings account,Fixed depogit");
	}
	if(w==2)
	{
		printf("\t\t\t\t\t\t\t\t\t\t\t\From this option you can cashout your money.\n\tEnter your ammount then press 'ENTER' =");

	}
	if(w==3)
	{
	  printf("From Account Holder list you can see how many people creat their account.\nWhat typs of account they are holding,etc.");
	}
	if(w==4)
	{
		 printf("\n\n\tIf you are a member of our Bank From here you can Delete your account.\n\tFor our system you have to tell us why  you Delete your account.\n\t(YOU CAN USE SLANG WORDS :D)");
	}
	if(w==5)
	{
		printf("\t\t\t\t\t\t\t\t\t\t\t\'Use calculator' will help you for calculating.");
	}
	if(w==6)
	printf("\t\t\t\t\t\t\t\t\t\t\t\>>>>>ABOUT US<<<<<\n\t\t\t\t\t\t\t\t\t\t\t\WE ARE AWESOME GUY...\n\t\t\t\t\t\t\t\t\t\t\t\WE DON'T THINK...\n\t\t\t\t\t\t\t\t\t\t\t\WE CHATCH AND MAKE UP THE...\n\n");


break;


case 8:
cout<<endl<<endl<<"\t\t";
for(loop=0;loop<=34;loop++)
{
delay(50);
printf("%c",end[loop]);
}
break;



}
}

else
{
cout<<endl<<endl<<endl<<endl<<endl<<setw(65)<<"*****YOUR USERNAME AND PASSWORD IS WRONG*****"<<endl<<endl<<setw(51)<<"*****TRY AGAIN*****"<<endl<<endl;}



getch();
return 0;
}
