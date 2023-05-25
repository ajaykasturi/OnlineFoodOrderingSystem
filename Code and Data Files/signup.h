#include<stdio.h>
#include<string.h>
void ConfirmPass(char [],char []);//function prototype
void InputPass(void);//function prototype
void Bio(void);//function prototype
void Sfile(char [],char [],char [],char []);//function prototype
void ID(void);// function prototype
void CheckMail(char []); //function prototype
char fn[200],ln[200],mail[200],pswd[200];//declaring variables as global
/*int main()
{
	Bio();
	ID();
	InputPass();
	Sfile(fn,ln,mail,pswd);
	return 0;
}*/
void Bio(void)//function to enter the bio data of user
{
	extern char fn[200],ln[200];
	fflush(stdin);
	printf("\nFirst Name: ");
	gets(fn);//scanf("%s",fn);
	printf("\nLast Name: ");
	gets(ln);//scanf("%s",ln);
	ID();
	InputPass();
	Sfile(fn,ln,mail,pswd);
}
void ID(void)//function to take email id of user a
{
	extern char mail[200];
	printf("\nE-mail: ");
	scanf("%s",mail);
	CheckMail(mail);
}
void CheckMail(char id[])//function to check the email id is valid or not
{
	int i,c=0;
	for(i=0;i<=strlen(id);i++)
	{
		if(id[i]=='@')
		{
			printf("\nMail Valid\n");
			c++;
			break;
		}
	}
	if(c==0)
	{
		printf("Mail is Invalid\n");
		ID();
	}
}
void InputPass(void)//function to take password from user
{
    char pass[200],cpass[200];
    fflush(stdin);
	printf("\nEnter Password: ");
	gets(pass);//scanf("%s",pass);
	printf("\nEnter Confirm Password: ");
	gets(cpass);//scanf("%s",cpass);
	ConfirmPass(pass,cpass);
}
void ConfirmPass(char pas[],char cpas[])//funciton to check the passwords are matched or not
{
	int c;
	c=strcmp(pas,cpas);
	if(c==0)
	{
		extern char pswd[200];
		strcpy(pswd,pas);
		printf("\nPassword matched\n");
	}
	else
	{
		printf("\nPassword miss-matched Try Again\n");
		InputPass();
	}
}
void Sfile(char fn[],char ln[],char mail[],char pswd[])//function to store the user data into a file for furthrer usage
{
	FILE *fptr;
	int i;
	char userid[200],folder[]="\\user_info_files\\";
	strcpy(userid,mail);
	strcat(userid,".txt");
	fptr=fopen(userid,"a+");// here the text file is created with name mail.txt
	fprintf(fptr,"Firstname: %s",fn);
	fputs("\n",fptr);
	fprintf(fptr,"Lastname: %s",ln);
	fputs("\n",fptr);
	fprintf(fptr,"E-mail: %s",mail);
	fputs("\n",fptr);
	fprintf(fptr,"Password: %s",pswd);
	fputs("\n",fptr);
	
	fclose(fptr);
	
	fptr=fopen("userlogindata.txt","a+");
	
	fputs(mail,fptr);
	fputs("\n",fptr);
	fputs(pswd,fptr);
	fputs("\n",fptr);
	
	fclose(fptr);

	printf("\nYour account created successfully\n\n");
}

