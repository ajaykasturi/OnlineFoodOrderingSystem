#include<stdio.h>
#include<string.h>
#include"intro_design.h"
#include"signup.h"
#include"login.h"
#include"tomato.h"
#include"items.h"
int choice1(void)
{
	int v;
	printf("\nLogIn Page\n");
	v=loginfo();
	if(v==1)
	{
		Happy();//function in tamato header file
		TopBrands();// "
		printf("\nEnter Your Choice:");
		int itm,c;
		c=scanf("%d",&itm);
		if(c==0)
		{
			printf("\nERROR! ENTER CORRECT ITEM NUMBER\n");
		}
		else
		{
			if(itm<=15 && itm>=1)
			{
				header(itm);//happy items display
			}
			else
			{
				printf("\n\nERROR FOODITEM_No.-505D\n\n");
			}
			
		}
		//endcard();		
	}
	else
	{
		printf("ERROR! LOGINFO");
	}
}
int choice2(void)
{
	printf("\nSignUp Page\n");
	Bio();
	printf("->Press 1 to login\n->Press any other key to exit\n");
	float coic,c;
	printf("Enter your choice:");
	c=scanf("%f",&coic);
	if(coic==1)
	{
		choice1();
	}
	else
	{
		exit(0);
	}
}
int main()
{
	
	intro_design();
	float choice,cvar;
	cvar=scanf("%f",&choice);
	if(cvar==0 || (choice!=1 && choice!=2))
	{
		printf("ERROR! 405: Check your entered data");
	}
	else
	{
		if(choice==1)
		{
			choice1();
		}
		else if(choice==2)
		{
			choice2();
		}
		else
		{
			printf("Login ERROR!");
		}
	}
	return 0;
}
