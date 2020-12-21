#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>		// for using MessageBox(), etc
#include <sys/stat.h>	//	for using mkdir(),rmdir(), etc

void menu();
void login();
void Register(char name[]);
void userlogin(char name[]);
void status_of_complaint(char name[]);
void police();
void menu_police(char pname[]);
void Register_complaint_by_police(char pname[]);
void deletecomplaint(char pname[]);
void Search_required_complaint(char pname[]);
void Criminal_Data(char pname[]);
void admin_login();
void admin_menu();
void add_police_official();
void remove_police_official();
void Details_of_police_official();
int check_old_one(char name[]);
int isFileExists(const char *path);
int isFileExistsAccess(const char *path);
int isFileExistsStats(const char *path);
void main(void)
{
	system("cls");//clears the screen
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
    for(int i=0; i<100;++i)
    {
        printf("\xdb");
    }
	printf("\n\n");
    system("color f0");
    printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
    {
        printf("\xdb");
    }
	printf("\n\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n");
    printf("\t\t\t\t\t\t\t\xdb           ** CRIMINAL RECORD MANAGEMENT SYSTEM **            \xdb\n");
    printf("\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n");
	printf("\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n");
    printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
    {
        printf("\xdb");
    }
    printf("\n\t\t\t\t\t\t\t\xdb                     BY                                       \xdb\n");
	printf("\t\t\t\t\t\t\t\xdb                        > DEEPAK BHARADWAJ                    \xdb\n");
	printf("\t\t\t\t\t\t\t\xdb                        > SAI KIRAN                           \xdb\n");
    printf("\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
    {
        printf("\xdb");
    }
    printf("\n\t\t\t\t\t\t\t\xdb          *****************************************           \xdb\n");
    printf("\t\t\t\t\t\t\t\xdb          *****************************************           \xdb\n");
    printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
    {
        printf("\xdb");
    }
    printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
	for(int i=0; i<5; i++)
    {
        printf(".");
        Sleep(500);//after printing one . another comes after 0.5 seconds
    }
	getch();
	menu();
}

void menu()
{

	int opt=0;
	while(opt!=4){
		system("cls");
		printf("\t\t\t\t\t");
		for(int i=0;i<100;++i){
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t");
		for(int i=0; i<100;++i)
		{
			printf("\xdb");
		}
		printf("\n\n");
		printf("\t\t\t\t\t\t\t");
		for(int i=0; i<64;++i)
		{
			printf("\xdb");
		}
		mkdir("C:/CRMS");
		mkdir("C:/CRMS/complaints");
		mkdir("C:/CRMS/police_official");
		printf("\n\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n");
		printf("\t\t\t\t\t\t\t\tARE YOU A\n\t\t\t\t\t\t\t\t\t\t");
		printf("1 . User(Public)\n\t\t\t\t\t\t\t\t\t\t");
		printf("2 . Police Official\n\t\t\t\t\t\t\t\t\t\t");
		printf("3 . Admin(Higher Offical of Police)\n");
		printf("\t\t\t\t\t\t\t");
		for(int i=0; i<64;++i)
		{
			printf("=");
		}
		printf("\n\t\t\t\t\t\t\t\t\t\t4 . Exit\n\t\t\t\t\t\t\t\t\t\t");
		printf("\n\t\t\t\t\t\t        \xdb\t\t\t\t\t\t\t       \xdb\n\t\t\t\t\t\t\t");
		for(int i=0; i<64;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\t\t\tSelect your choice: ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				login();
				break;
			case 2:
				police();
				break;
			case 3:
				admin_login();
				break;
			case 4:
				printf("\n\t\t\t\t\t\t\t\t\t\tThe Program is closing");
				for(int i=0;i<5;++i){
					printf(".");
					Sleep(500);
				}
				exit(0);
				break;
			default:
				MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
				fflush(stdin);
				break;
		}
	}
}

void login()
{
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
	{
		printf("\xdb");
	}
	char name[100],pass[8],str2[100],passt[100],ch,path[100]="C:/CRMS/complaints/";
	int yob,i,j,check,count=3;
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\xdb Enter your name (as per adhaar card) : ");
	scanf("%[^\n]*c",name);
	printf("\t\t\t\t\t\t\t\xdb Enter your year of birth : ");
	scanf("%d",&yob);
	strcpy(path,strcat(path,name));
	check = mkdir(path);
	// check if directory is created or not
    if (!check){
		system("cls");
		printf("\n\t\t\t\t\t\t");
		for(int i=0; i<93;++i)
		{
			printf("\xdb");
		}
		MessageBox(0,"\t\tYour passcode is:\n\nConcatenation of <first four letter of your name(as per adhaar card)> and <year of birth>","Information",0);
		MessageBox(0,"Click 'OK' to continue\nwriting the letter","",0);
		Register(name);
		userlogin(name);
	}
    else {
		for(i=0,j=0;i<4;i++,j++)
		{
			str2[j]=name[i];
		}
		str2[j]='\0';
		sprintf(passt,"%d",yob);
		strcpy(passt,strcat(str2,passt));
		passcode:
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\xdb Enter the passcode: ");
			for(i=0;i<8;++i){
				ch = getch();
				pass[i] = ch;
				ch = '*';
				printf("%c",ch);
			}
			pass[i]='\0';
			/* the passcode should be as first four letters of name (as per adhaar card) and year of birth concatenated */
			if(count==1){
				MessageBox(0,"You lost all the chances\nClick 'OK'","Invalid Passcode",0);
				return;
			}
			if(strcmp(pass,passt)==0){
				MessageBox(0,"Click 'OK'","Valid passcode",0);
				userlogin(name);
			}
			else{
				printf("\n\t\t\t\t\t\t\t\xdb Invalid passcode\n");
				printf("\t\t\t\t\t\t\t\xdb You have only %d chances\n",count--);
				goto passcode;
			}
	}
}

void Register(char name[]){
	char dir[50]="C:/CRMS/complaints/";
	system("cls");
	strcat(dir,name);
	strcat(dir,"/");
	strcat(dir,name);
	strcat(dir,".txt");
	char data[1000];
	FILE *x;
	x=fopen(dir,"w");
	printf("\n\t\t\t\t\t\t");
	for(int i=0; i<103;++i)
	{
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t\t\xdb > Please Enter Your Complaint\t\t\t\t\t\t\t\t\t      \xdb");
	printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
	printf("\n\t\t\t\t\t\t\xdb > Make sure that you add your phone number at the end so that the police can contact you personally \xdb\n");
	printf("\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
	printf("\n\t\t\t\t\t\t\xdb > Click Tab and Enter key after completing the Letter\t\t\t\t\t\t      \xdb\n");
	printf("\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
	printf("\n\t\t\t\t\t\t");
	for(int i=0; i<103;++i)
	{
		printf("\xdb");
	}
	fflush(stdin);
	printf("\n Enter Here...\n");
	scanf("%[^\t]s",data);
    fprintf(x, "%s", data);
    fclose(x);
	printf("\n\t\t\t\t\t\t");
	for(int i=0; i<110;++i)
	{
		printf("\xdb");
	}
	MessageBox(0,"***The Passcode allotted to you is <first four letters of your name><your year of birth> without spaces***\n              DO NOT SHARE IT WITH ANY PERSON","Information",0);
	userlogin(name);
}

void userlogin(char name[]){
	int choice,opt;
	char data[1000];
	FILE *x;
	while(1){
		system("cls");
		printf("\t\t\t\t\t");
		for(int i=0;i<100;++i){
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t");
		for(int i=0; i<100;++i)
		{
			printf("\xdb");
		}
		printf("\n\n");
		printf("\t\t\t\t\t\t\t\t");
		for(int i=0; i<46;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\t\xdb\t1 . Withdrawl of a complaint\t     \xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t\t\t\t\t     \xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t2 . Check status of a complaint      \xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t\t\t\t\t     \xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t3 . Logout\t\t\t     \xdb");
		printf("\n\t\t\t\t\t\t\t\t");
		for(int i=0; i<46;++i)
		{
			printf("\xdb");
		}
		printf("\n\n\t\t\t\t\t\t\t\tSelect your choice : ");
		scanf("%d",&choice);
		if(choice==1){
			char path[100]="C:/CRMS/complaints/";
			strcat(path,name);
			strcat(path,"/");
			strcat(path,"withdrawn.txt");

			x = fopen(path,"r");
			if(x==NULL)
			{
				//created new file
				opt=1;
			}
			else
			{
				// file already exists
				opt=0;
			}
			fclose(x);
			if (opt==1)
			{
				system("cls");
				printf("\n\t\t\t\t\t\t");
				for(int i=0; i<74;++i)
				{
					printf("\xdb");
				}
				printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t \xdb");
				printf("\n\t\t\t\t\t\t\xdb      > After the withdrawl you will be logged out automatically        \xdb");
				printf("\n\t\t\t\t\t\t\xdb      > Please enter the Reason for the Withdrawl\t\t\t \xdb");
				printf("\n\t\t\t\t\t\t\xdb      > Press Tab and Enter key after completion of Typing the reason   \xdb");
				printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t \xdb");
				printf("\n\t\t\t\t\t\t");
				for(int i=0; i<74;++i)
				{
					printf("\xdb");
				}
				fflush(stdin);
				printf("\n Enter Here...\n");
				x=fopen(path,"w");
				scanf("%[^\t]s",data);
				fprintf(x, "%s", data);
				fclose(x);
			}
			else{
				MessageBox(0,"The complaint has withdrawn already","Information",0);
				Sleep(1000);
			}
		}
		else if(choice==2){
			status_of_complaint(name);
		}
		else if(choice==3){
			MessageBox(0,"Logged Out,\n\nClick 'OK' to goto main menu","Log Out",0);
			menu();
		}
		else{
			MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
			fflush(stdin);
			break;
		}
	}
}

void status_of_complaint(char name[]){
	char dir[100]="C:/CRMS/complaints/",path_w[100]="C:/CRMS/complaints/",path_s[100]="C:/CRMS/complaints/",path_r[100]="C:/CRMS/complaints/";
	strcat(path_w,name);

	strcat(path_w,"/withdrawn.txt");
	strcat(path_s,name);
	strcat(path_s,"/solved.txt");
	strcat(path_r,name);
	strcat(path_r,"/solving.txt");
	if(isFileExistsAccess(path_w)){
		MessageBox(0,"Your Letter has been withdrawn","",0);
	}
	else if(isFileExistsAccess(path_s)){
		MessageBox(0,"Your case has been Solved","",0);
	}
	else if(isFileExistsAccess(path_r)){
		MessageBox(0,"Your case is in progress","",0);
	}
	else{
		MessageBox(0,"Your case is not yet investigated","",0);
	}
	userlogin(name);
}
void police(){
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
	{
		printf("\xdb");
	}
	FILE * fp;
	char name[50],pass[50],passt[12],str2[5],ch;
	char desig[50],region[50];
	int yob,i,count=3,j=4,m=4,l,age;
	int Total_cases=0,s_cases=0,p_cases=0;
	char path[100] = "C:/CRMS/police_official/";
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\t\xdb Enter the name of person(as per adhaar card): ");
	scanf("%[^\n]*c", name);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t\t\xdb Enter your year of birth: ");
	scanf("%d",&yob);
	if(check_old_one(name)==1){
		MessageBox(0,"Congratulation You became a part of the police official login person\nYour Passcode is <your year of birth><first four letters of your name>\n          DO NOT SHARE IT WITH OTHER PERSON","Success",0);
		for(i=0,l=0;i<4;i++,l++)
		{
			str2[l]=name[i];
		}
		str2[l]='\0';
		sprintf(passt,"%d",yob);
		strcpy(passt,strcat(passt,str2));
		passcode1:
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\t\xdb Enter the passcode: ");
		fflush(stdin);
		for(i=0;i<8;++i){
			ch = getch();
			pass[i] = ch;
			ch = '*';
			printf("%c",ch);
		}
		pass[i]='\0';
		/* the passcode should be as year of birth and first four letters of name (as per adhaar card) concatenated */
		if(count==0){
			MessageBox(0,"You lost all the chances\nClick 'OK'","Invalid Passcode",0);
			return;
		}
		if(strcmp(pass,passt)==0){
			MessageBox(0,"Click 'OK'","Valid passcode",0);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\t\t\xdb Enter your designation : ");
			scanf("%[^\n]*c",desig);
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\t\xdb Enter the zone/area you have posted : ");
			scanf("%[^\n]*c",region);
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\t\xdb Enter your age : ");
			scanf("%d",&age);
			/*
			* Open file in w (write) mode.
			* "data/file1.txt" is complete path to create file
			*/
			strcat(path,name);
			strcat(path,".txt");
			fp = fopen(path, "w");

			fprintf(fp, "%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d", name, desig, region, yob, age, Total_cases, s_cases, p_cases);
			fclose(fp);
			menu_police(name);
			}
		else{
			printf("\n\t\t\t\t\t\t\t\t\xdb Invalid passcode");
			printf("\n\t\t\t\t\t\t\t\t\xdb You have only %d chances\n",count--);
			goto passcode1;
		}
	}
	for(i=0,l=0;i<4;i++,l++)
	{
		str2[l]=name[i];
	}
	str2[l]='\0';
	sprintf(passt,"%d",yob);
	strcpy(passt,strcat(passt,str2));
	passcode:
	fflush(stdin);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t\t\xdb Enter the passcode: ");
	for(i=0;i<8;++i){
		ch = getch();
		pass[i] = ch;
		ch = '*';
		printf("%c",ch);
	}
	pass[i]='\0';
	/* the passcode should be as year of birth and first four letters of name (as per adhaar card) concatenated */
	if(count==0){
		MessageBox(0,"You lost all the chances\nClick 'OK'","Invalid Passcode",0);
		return;
	}
	if(strcmp(pass,passt)==0){
		MessageBox(0,"Valid passcode","",0);
		system("cls");
		menu_police(name);
	}
	else{
		printf("\n\t\t\t\t\t\t\t\t\xdb Invalid passcode");
		printf("\n\t\t\t\t\t\t\t\t\xdb You have only %d chances\n",count--);
		goto passcode;
	}

}

void menu_police(char pname[]){
	int opt;
	while(1){
		system("cls");
		printf("\t\t\t\t\t");
		for(int i=0;i<100;++i){
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t");
		for(int i=0; i<100;++i)
		{
			printf("\xdb");
		}
		printf("\n\n");
		printf("\t\t\t\t\t\t\t");
		for(int i=0; i<50;++i)
		{
			printf("\xdb");
		}
		fflush(stdin);
		printf("\n\t\t\t\t\t\t\t\xdb\t1 . Add a complaint\t\t\t \xdb");
		printf("\n\t\t\t\t\t\t\t\xdb\t2 . Remove a complaint\t\t\t \xdb");
		printf("\n\t\t\t\t\t\t\t\xdb\t3 . Search for required complaint\t \xdb");
		printf("\n\t\t\t\t\t\t\t\xdb\t4 . Criminal Record\t\t\t \xdb");
		printf("\n\t\t\t\t\t\t\t\xdb\t5 . Log Out\t\t\t\t \xdb");
		printf("\n\t\t\t\t\t\t\t");
		for(int i=0; i<50;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\t Select your choice : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				Register_complaint_by_police(pname);
				break;
			case 2:
				deletecomplaint(pname);
				break;
			case 3:
				Search_required_complaint(pname);
				break;
			case 4:
				Criminal_Data(pname);
			case 5:
				MessageBox(0,"\nLogging out\nRedirecting to main menu","",0);
				menu();
			default:
				MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
				fflush(stdin);
				break;

		}
	}
}

void Register_complaint_by_police(char pname[]){
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
	{
		printf("\xdb");
	}
	char dir[50]="C:/CRMS/complaints/";
	char data[1000],name[50],ch,temp[100];
	FILE *x;
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\xdb Enter the name of person(as per adhaar card): ");
	scanf("%[^\n]*c",name);
	strcat(dir,name);
	strcpy(temp,"A complaint is already registered on the name : ");
	strcat(temp,name);
	int check = mkdir(dir);
	if(check==-1){
		MessageBox(0,temp,"Warning!",0);
		menu_police(pname);
	}
	else{
		strcat(dir,"/");
		strcat(dir,name);
		strcat(dir,".txt");
		if(isFileExistsAccess(dir)){
			strcpy(temp,"A complaint is already registered on the name : ");
			strcat(temp,name);
			MessageBox(0,temp,"Warning!",0);
			menu_police(pname);
		}
		else{
			x=fopen(dir,"w");
			system("cls");
			printf("\n\t\t\t\t\t\t");
			for(int i=0; i<103;++i)
			{
				printf("\xdb");
			}
			printf("\n\t\t\t\t\t\t\xdb > Please Enter Your Compliant\t\t\t\t\t\t\t\t\t      \xdb");
			printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
			printf("\n\t\t\t\t\t\t\xdb > Make sure that you add your phone number at the end so that the police can contact you personally \xdb\n");
			printf("\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
			printf("\n\t\t\t\t\t\t\xdb > Click Tab and enter key after compliation entering data\t\t\t\t\t      \xdb\n");
			printf("\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t      \xdb");
			printf("\n\t\t\t\t\t\t");
			for(int i=0; i<103;++i)
			{
				printf("\xdb");
			}
			printf("\n\n\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<3; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			printf("\n\n\t Enter Here...\n");
			getch();
			scanf("%[^\t]s",data);
			fprintf(x, "%s", data);
			fclose(x);
			printf("\n\t\t\t\t\t\t");
			for(int i=0; i<110;++i)
			{
				printf("\xdb");
			}
			printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t             \xdb");
			printf("\n\t\t\t\t\t\t\xdb ***The Passcode allotted to you is <your year of birth><first four letters of your name> without spaces*** \xdb");
			printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t             \xdb");
			printf("\n\t\t\t\t\t\t\xdb \t\t\t============= DO NOT SHARE IT WITH ANY PERSON =============\t\t\t     \xdb");
			printf("\n\t\t\t\t\t\t\xdb\t\t\t\t\t\t\t\t\t\t\t\t             \xdb");
			printf("\n\t\t\t\t\t\t");
			for(int i=0; i<110;++i)
			{
				printf("\xdb");
			}
			MessageBox(0,"Read the points in rectangular brackets then,\n\nClick 'OK'","",0);
			menu_police(pname);
		}
	}
}

void deletecomplaint(char pname[]){
	char name[50];
	char pass[50],temp[50];
	char check[50]="C:/CRMS/complaints/";
	char path_w[50],path_r[50],path_s[50],folder[50];
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\tPlease enter the name of the person(as per adhaar card): ");
	scanf("%[^\n]*c",name);
	strcat(check,name);
	strcpy(folder,check);
	strcat(check,"/");
	strcpy(path_w,check);
	strcpy(path_r,check);
	strcpy(path_s,check);
	strcat(check,name);
	strcat(path_s,"/solved.txt");
	strcat(path_w,"/withdrawn.txt");
	strcat(check,".txt");
	remove(path_r);
	remove(path_s);
	remove(path_w);
	if(remove(check)==0){
		fflush(stdin);
		rmdir(folder);
		MessageBox(0,"Complaint Deleted Successfully\n\nClick 'OK' to move to Menu","Information",0);
	}
	else{
		strcpy(temp,"Complaint has not registered by the person : ");
		strcat(temp,name);
		MessageBox(0,temp,"Warning!",0);
	}
	menu_police(pname);
}

void Search_required_complaint(char pname[]){
	char name[30],path[50] = "C:/CRMS/complaints/",path_w[50]= "C:/CRMS/complaints/",ch,data[1000];
	char path_status[50],path_s[50]= "C:/CRMS/complaints/",temp[50],path_r[50]= "C:/CRMS/complaints/";
	int opt;
	FILE *fp;
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\tEnter the name (as per adhaar card) : ");
	scanf("%[^\n]*c",name);
	strcat(path,name);
	strcat(path_w,name);
	strcat(path_s,name);
	strcat(path_r,name);
	strcat(path,"/");
	strcpy(path_status,path);	// C:/CRMS/complaints/<name>/
	strcat(path,name);
	strcat(path,".txt");
	// Check if file exists or not
    if (isFileExistsAccess(path))
    {
		strcat(path_w,"/withdrawn.txt");	//C:/CRMS/complaints/deepak/withdrawn.txt
		strcat(path_s,"/solved.txt");
		strcat(path_r,"/solving.txt");
		if (isFileExistsAccess(path_w))
		{
			strcpy(temp,name);
			strcat(temp," has withdrawn the complaint");
			MessageBox(0,temp,"Information",0);
			int msg = MessageBox(0,"Do you want to see/know the reason of withdrawl","?",4);
			if(msg==6){
				system("cls");
				printf("\n\t\t\t\t\t");
				for(int i=0;i<17;++i)
				{
					printf("*");
				}
				printf("\n\t\t\t\t\t  Reason Letter  ");
				printf("\n\t\t\t\t\t");
				for(int i=0;i<17;++i)
				{
					printf("*");
				}
				printf("\n\t\t\t\xdb ");
				FILE *F;
				F = fopen(path_w,"r");
				ch=fgetc(F);
				while(ch!=EOF){
					if(ch=='\n'){
						printf("\n\t\t\t\xdb ");
					}
					else{
						printf("%c",ch);
					}
					ch=fgetc(F);
				}
				fclose(F);
				MessageBox(0,"After Reading the Reason of Withdrawl\nClick on 'OK' ","",0);
				menu_police(pname);
			}
		}
		else if(isFileExistsAccess(path_s)){
			MessageBox(0,"The Complaint has been solved","Information",0);
			MessageBox(0,"Click on 'OK' to goto Police Menu","",0);
			menu_police(pname);
		}
		else if(isFileExistsAccess(path_r)){
			char data[100];
			fp = fopen(path_r,"r");
			fscanf(fp,"%[^\n]*c",data);
			MessageBox(0,data,"Information",0);
			MessageBox(0,"Click on 'OK' to goto Police Menu","",0);
			menu_police(pname);
		}
		else
		{
			fflush(stdin);
			int msg = MessageBox(0,"Are you handling this case","?",4);
			if(msg==6){
				fflush(stdin);
				int msg = MessageBox(0,"Do you want to see the complaint registered","?",4);
				if(msg==6){
					system("cls");
					
					FILE *F;
					F = fopen(path,"r");
					printf("\n\n\t\t\t\xdb ");
					ch=fgetc(F);
					while(ch!=EOF){
						if(ch=='\n'){
							printf("\n\t\t\t\xdb ");
						}
						else{
							printf("%c",ch);
						}
						ch=fgetc(F);
					}
					fclose(F);
					MessageBox(0,"After Reading the Compalint Letter \nClick on 'OK' ","",0);
				}
				while(1){
					system("cls");
					fflush(stdin);
					
					printf("\n\t\t\t\t\t\t\t\t");
					for(int i=0;i<38;++i)
					{
						printf("\xdb");
					}
					printf("\n\t\t\t\t\t\t\t\t\xdb 1 . Are you still solving the case \xdb");
					printf("\n\t\t\t\t\t\t\t\t\xdb 2 . Or is it been solved\t     \xdb");
					printf("\n\t\t\t\t\t\t\t\t");
					for(int i=0;i<38;++i)
					{
						printf("\xdb");
					}
					printf("\n\t\t\t\t\t\t\t\t Select your choice : ");
					scanf("%d",&opt);
					switch(opt){
						case 1:
							strcat(path_status,"/solving.txt");
							fp = fopen(path_status,"w");
							fprintf(fp,"%s %s",pname,"is solving this case");
							fclose(fp);
							menu_police(pname);
							break;
						case 2:
							strcat(path_status,"/solved.txt");
							fp = fopen(path_status,"w");
							fclose(fp);
							menu_police(pname);
							break;
						default:
							MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
							break;
					}

				}
			}
		}
    }
    else
    {
		char templ[100];
		strcpy(templ,name);
		strcat(templ," has not registered yet");
		MessageBox(0,templ,"Warning!",0);
    }
	menu_police(pname);
}
void Criminal_Data(char pname[]){
	char path[50];
	FILE *x;
	char ch;
	int choice;
	while(1){
		system("cls");
		printf("\t\t\t\t\t");
		for(int i=0;i<100;++i){
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t");
		for(int i=0; i<100;++i)
		{
			printf("\xdb");
		}
		printf("\n\n");
		printf("\t\t\t\t\t\t\t");
		for(int i=0; i<50;++i)
		{
			printf("\xdb");
		}
		strcpy(path,"C:/CRMS/criminal_data");
		fflush(stdin);
		printf("\n\t\t\t\t\t\t\t\xdb\t 1 . Women related issues\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 2 . Family related cases\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 3 . kidnaping\t\t\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 4 . Murders\t\t\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 5 . Robbery\t\t\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 6 . Others\t\t\t\t \xdb");
	printf("\n\t\t\t\t\t\t\t\xdb\t 7 . Exit\t\t\t\t \xdb");
		printf("\n\t\t\t\t\t\t\t");
		for(int i=0; i<50;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\xdb\t Select your choice: ");

		scanf("%d",&choice);
		if(choice==1){
			strcat(path,"/women_harresment.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==2){
			strcat(path,"/family_cases.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==3){
			strcat(path,"/kidnapping.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==4){
			strcat(path,"/murders.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==5){
			strcat(path,"/robbery.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==6){
			strcat(path,"/others.txt");
			x=fopen(path,"r");
			printf("\n\t\t\t\t\t\t\t");
			while((ch=fgetc(x))!=EOF) {
				if(ch=='\n'){
					printf("\n\t\t\t\t\t\t\t");
				}
				else{
					printf("%c",ch);
				}
			}
			fclose(x);
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
			for(int i=0; i<5; i++)
			{
				printf(".");
				Sleep(500);//after printing one . another comes after 0.5 seconds
			}
			getch();
		}
		else if(choice==7){
			menu_police(pname);
		}
		else{
			MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
			fflush(stdin);
			continue;
		}
	}
}

void admin_login(){
	char name[50],str2[50],passt[50],ch,pass[50];
	int i,l,j,count=3,opt=0;
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<50;++i)
	{
		printf("\xdb");
	}
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\xdb Enter your name (as per adhaar card): ");	// VAVILIKOLANU DEEPAK
	scanf("%[^\n]*c", name);							// VIKA EK
	fflush(stdin);
	l = strlen(name);
	for(i=0,j=0;i<l;i=i+3,j++)
	{
		str2[j]=name[i];
	}
	str2[j]='\0';
	fflush(stdin);
	if((l%3)==0)
	{
		l/=3;
	}
	else
	{
		l=(l/3)+1;
	}
	passcode:
	printf("\t\t\t\t\t\t\t\xdb Enter the passcode: ");
	for(i=0;i<l;++i){
		ch = getch();
		pass[i] = ch;
		ch = '*';
		printf("%c",ch);
	}
	pass[i]='\0';
	/* the passcode should be as first four letters of name (as per adhaar card) and year of birth concatenated */
	if(count==0){
		MessageBox(0,"You lost all the chances\nClick 'OK'","Invalid Passcode",0);
		return;
	}
	if(strcmp(pass,str2)==0){
		MessageBox(0,"Valid passcode","",0);
		admin_menu();
	}
	else{
		printf("\n\t\t\t\t\t\t\t\xdb Invalid passcode");
		printf("\n\t\t\t\t\t\t\t\xdb You have only %d chances\n",count--);
		goto passcode;
	}
}
void admin_menu(){
	int opt;
	fflush(stdin);
	while(1){
		system("cls");
		printf("\t\t\t\t\t");
		for(int i=0;i<100;++i){
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t");
		for(int i=0; i<100;++i)
		{
			printf("\xdb");
		}
		printf("\n\n");
		printf("\t\t\t\t\t\t\t\t");
		for(int i=0; i<49;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\t\xdb\t1 . Add a police official\t\t\xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t2 . Remove a police official\t\t\xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t3 . Details of a police official\t\xdb");
		printf("\n\t\t\t\t\t\t\t\t\xdb\t4 . Log Out\t\t\t\t\xdb");
		printf("\n\t\t\t\t\t\t\t\t");
		for(int i=0; i<49;++i)
		{
			printf("\xdb");
		}
		printf("\n\t\t\t\t\t\t\t\tSelect your choice : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				add_police_official();
				break;
			case 2:
				remove_police_official();
				break;
			case 3:
				Details_of_police_official();
				break;
			case 4:
				MessageBox(0,"You have Logged out\nClick 'OK'","",0);
				menu();
				break;
			default:
				MessageBox(0,"Invalid Option!\nEnter Again","Error!",0);
				fflush(stdin);
				break;
			}
		}
}
void add_police_official(){
	char name[50],pass[50],passt[4],str2[5],ch;
	char desig[50],region[50];
	int yob,age,msg,Total_cases=0,s_cases=0,p_cases=0;
	FILE * fp;
	char path[100] = "C:/CRMS/police_official/";
	fflush(stdin);
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
	{
		printf("\xdb");
	}
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\xdb Enter the name of the police (as per adhaar card): ");
	scanf("%[^\n]*c", name);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t\xdb Enter your year of birth: ");
	scanf("%d",&yob);
	if(check_old_one(name)==1){
		char para[200];
		strcpy(para,"***Congratulations ");
		strcat(para,name);
		strcat(para," became a part of the police official login person\nAnd the Passcode is <year of birth><first four letters of the name>\n          DO NOT SHARE IT WITH UNOFFICIALS");
		MessageBox(0,para,"Success",0);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\xdb Enter his/her designation : ");
		scanf("%[^\n]*c",desig);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\xdb Enter the zone/area he/she have posted : ");
		scanf("%[^\n]*c",region);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t\xdb Enter his/her age : ");
		scanf("%d",&age);
		fflush(stdin);
		msg = MessageBox(0,"Do you want to allot the cases to the police officer","?",4);
		if(msg==6){
			total_cases:
			printf("\t\t\t\t\t\t\t\xdb Enter how many cases do you want to allot to him : ");
			scanf("%d",&Total_cases);
		}
		while(Total_cases<0){
			MessageBox(0,"Entered negative value for the Total cases\n Enter Again!!!","Error!",0);
			printf("\t\t\t\t\t\t\t\xdb Enter how many cases do you want to allot to him : ");
			scanf("%d",&Total_cases);
		}
		msg = MessageBox(0,"Do you want Enter number of cases solved by the police officer","?",4);
		if(msg==6){
			printf("\t\t\t\t\t\t\t\xdb Enter how many cases did the police solved : ");
			scanf("%d",&s_cases);
		}
		while(s_cases<0){
			MessageBox(0,"Entered negative value to the solved cases\n Enter Again!!!","Error!",0);
			printf("\t\t\t\t\t\t\t\xdb Enter how many cases did the police solved : ");
			scanf("%d",&s_cases);
		}
		if(Total_cases<s_cases){
			MessageBox(0,"Total cases allotted are less than solved cases\n Enter Again!!!","Error!",0);
			printf("\n");
			goto total_cases;
		}
		p_cases = Total_cases - s_cases;
		strcat(path,name);
		strcat(path,".txt");
		/*
		* Open file in w (write) mode.
		*/
		fp = fopen(path, "w");
		fprintf(fp, "%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d", name, desig, region, yob, age, Total_cases, s_cases, p_cases);
		fclose(fp);
		MessageBox(0,"Entered the data successfully","",0);
		admin_menu();
	}
	else{
		printf("\n\t\t\t\t\t\t\t\xdb %s is already a police person, added already",name);
		msg = MessageBox(0,"Do you want to change his details","?",4);
		if(msg==6){
			fflush(stdin);
			printf("\n\t\t\t\t\t\t\t\xdb Enter your designation : ");
			scanf("%[^\n]*c",desig);
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\xdb Enter the zone/area you have posted : ");
			scanf("%[^\n]*c",region);
			fflush(stdin);
			printf("\t\t\t\t\t\t\t\xdb Enter your age : ");
			scanf("%d",&age);
			fflush(stdin);
			msg = MessageBox(0,"Do you want to allot the cases to the police officer","?",4);
			if(msg==6){
				total_cases1:
				printf("\t\t\t\t\t\t\t\xdb Enter how many cases do you want to allot to him : ");
				scanf("%d",&Total_cases);
			}
			while(Total_cases<0){
				MessageBox(0,"Entered negative value for the Total cases\n Enter Again!!!","Error!",0);
				printf("\t\t\t\t\t\t\t\xdb Enter how many cases do you want to allot to him : ");
				scanf("%d",&Total_cases);
			}
			msg = MessageBox(0,"Do you want Enter number of cases solved by the police officer","?",4);
			if(msg==6){
				printf("\t\t\t\t\t\t\t\xdb Enter how many cases did the police solved : ");
				scanf("%d",&s_cases);
			}
			while(s_cases<0){
				MessageBox(0,"Entered negative value to the solved cases\n Enter Again!!!","Error!",0);
				printf("\t\t\t\t\t\t\t\xdb Enter how many cases did the police solved : ");
				scanf("%d",&s_cases);
			}
			if(Total_cases<s_cases){
				MessageBox(0,"Total cases allotted are less than solved cases\n Enter Again!!!","Error!",0);
				printf("\n");
				goto total_cases1;
			}
			p_cases = Total_cases - s_cases;
			strcat(path,name);
			strcat(path,".txt");
			/*
			* Open file in w (write) mode.
			*/
			fp = fopen(path, "w");
			fprintf(fp, "%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d", name, desig, region, yob, age, Total_cases, s_cases, p_cases);
			fclose(fp);
			MessageBox(0,"Entered the data successfully","",0);
			admin_menu();
		}
	}
}

void remove_police_official(){
	system("cls");
	char name[50],pass[50],passt[4],str2[5],ch;
	char desig[50],region[50];
	int i,count=3,j=4,m=4,l,age;
	FILE * fp;
	char path[] = "C:/CRMS/police_official/";
	system("cls");
	printf("\t\t\t\t\t");
	for(int i=0;i<100;++i){
		printf("\xdb");
	}
	printf("\n\t\t\t\t\t");
	for(int i=0; i<100;++i)
	{
		printf("\xdb");
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<64;++i)
	{
		printf("\xdb");
	}
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\xdb Enter the name of the police (as per adhaar card): ");
	scanf("%[^\n]*c", name);
	strcpy(path,strcat(path,name));
	strcpy(path,strcat(path,".txt"));
	if (remove(path)==0)
    {
		MessageBox(0,"Successfully we removed the police official","",0);
    }
    else
    {
        MessageBox(0,"No such police official found","Error!",0);
    }
	admin_menu();
}

void Details_of_police_official(){
	char name[50],data[1000];
	char desig[50],region[50],yob[50],age[50],Total_cases[50],s_cases[50],p_cases[50];
	int count=1;
	char path[50]="C:/CRMS/police_official/";
	FILE *fp;
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\tPlease Enter The Police Officer Name: ");
	scanf("%[^\n]*c",&name);
	strcat(path,name);
	strcat(path,".txt");
	if(isFileExistsAccess(path)){
		fp = fopen(path,"r");
		fscanf(fp, "%[^\n] %[^\n] %[^\n] %[^\n] %[^\n] %[^\n] %[^\n] %[^\n]", name, desig, region, yob, age, Total_cases, s_cases, p_cases);
		fclose(fp);
		while(count<=8){
		switch(count){
			case 1:
				strcpy(data,"NAME\t\t:\t");
				strcat(data,name);
				count++;
				break;
			case 2:
				strcat(data,"\nDESIGNATION\t:\t");
				strcat(data,desig);
				count++;
				break;
			case 3:
				strcat(data,"\nZONE\t\t:\t");
				strcat(data,region);
				count++;
				break;
			case 4:
				strcat(data,"\nYEAR OF BIRTH\t:\t");
				strcat(data,yob);
				count++;
				break;
			case 5:
				strcat(data,"\nAGE\t\t:\t");
				strcat(data,age);
				count++;
				break;
			case 6:
				strcat(data,"\nTOTAL CASES\t:\t");
				strcat(data,Total_cases);
				count++;
				break;
			case 7:
				strcat(data,"\nSOLVED CASES\t:\t");
				strcat(data,s_cases);
				count++;
				break;
			case 8:
				strcat(data,"\nPENDING CASES\t:\t");
				strcat(data,p_cases);
				count++;
				break;
			}
		}
		strcat(data,"\n\nClick on 'OK' to close");
		MessageBox(0,data,"Police Official",0);
	}
	else{
		MessageBox(0,"No such police official found","Warning!",0);
	}
	admin_menu();
}

/**
 * Function to check whether a file exists or not using
 * access() function. It returns 1 if file exists at
 * given path otherwise returns 0.
 */
int isFileExistsAccess(const char *path)
{
    // Check for file existence
    if (access(path, F_OK) == -1)
        return 0;

    return 1;
}

int check_old_one(char name[]){

	char path[100] = "C:/CRMS/police_official/";
	strcat(path,name);
	strcat(path,".txt");
	// Check if file exists or not
    if (isFileExistsAccess(path))
    {
		// As file exists already
        return 0;
    }
    else
    {
		// file not exists
        return 1;
    }
}
