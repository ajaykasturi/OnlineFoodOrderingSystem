#include<stdio.h>
#include<string.h>
int Login(char [],char []);//function prototype
int CheckLog(char [],char [],FILE *);//function prototype
int loginfo(void);//function prototype
/*int main()
{
	char email[200],pass[200];
	printf("E-mail: ");
	gets(email);
	printf("Password: ");
	gets(pass);
	Login(email,pass);
	return 0;
}*/
int loginfo(void)//FUNCTION TO TAKE LOGIN INFO
{
	char email[200],pass[200];
	printf("\nE-mail: ");
	scanf("%s",email);
	printf("\nPassword: ");
	scanf("%s",pass);
	int k;
	k=Login(email,pass);
	return k;
}
int Login(char mail[],char pswd[])//function to pass login info to another function to check the login details
{
	FILE *ptr;
	ptr=fopen("userlogindata.txt","r");
	if(ptr==NULL)
	{
		printf("ERROR 405 login failed");
	}
	int r;
	r=CheckLog(mail,pswd,ptr);
	return r;
}
int CheckLog(char mail[],char pswd[],FILE *ptr)//function to check the login details
{
	char m[200],p[200];
	int l=0;
	while(1)
	{
		fscanf(ptr,"%s",m);
	    fscanf(ptr,"%s",p);
	    if(feof(ptr))
	    break;
	    int c1,c2;
		c1=strcmp(m,mail);
		c2=strcmp(p,pswd);
		if(c1==0 && c2==0 )
		{
			printf("\nlogin Successfull\n");
			l=1;
			return 1;
		}
	}
	if (l==0)// if the above code returns l==0 then we get error here
	{
		printf("Login Failed Check your login creditals\n");
	}

}
