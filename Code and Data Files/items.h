#include<stdio.h>
#include<string.h>
int num()//it used to store no. of items that user wants
{
	printf("\n\nEnter no. of items: ");
	int i;
	scanf("%d",&i);
	return i;
	
}
void premsg()// premsg() is used to print thanking msg 
{
	int it;
	it=num();
	char add[200];
	fflush(stdin);
	printf("\nEnter your Address Here: ");
	gets(add);
	printf("\n\nYour Delivery Address:\n%s\n",add);
	printf("\n\nThank you, Your order(%d items) will be delivered soon at your door steps "
			"For more visit us at www.foodoraeats.com.\n\n",it);
	int r;
	printf("\n\nRate us: ");
	scanf("%d",&r);
	printf("\n\nThank You\n");
			
}
void print(char buff[] )//this function is used to print the data  in the respective files 
{
	FILE *fptr;
	char buffer[]=".txt";
	strcat(buff,buffer);
	fptr=fopen(buff,"r");
	char c;
	while((c=fgetc(fptr))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fptr);
	printf("\n");
}
void header(int n)//this funtion is used to select the what items does the user wants
{
	int c;
	if (n==1)
	{
		char c1[]="Healthyitems";
		print(c1);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();	
	}
	else if(n==2)
	{
		char c2[]="biryaniitems";
		print(c2);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();	
	}
	else if(n==3)
	{
		char c3[]="pizzaitems";
		print(c3);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==4)
	{
		char c4[]="burgeritems";
		print(c4);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==5)
	{
		char c5[]="noodleitems";
		print(c5);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==6)
	{
		char c6[]="somosaitems";
		print(c6);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==7)
	{
		char c7[]="manchuriaitems";
		print(c7);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==8)
	{
		char c8[]="cakeitems";
		print(c8);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==9)
	{
		char c9[]="fryitems";
		print(c9);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==10)
	{
		char c10[]="kfcitems";
		print(c10);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==11)
	{
		char c11[]="dominoitems";
		print(c11);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==12)
	{
		char c12[]="kalevaitems";
		print(c12);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==13)
	{
		char c13[]="burgerkingitems";
		print(c13);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==14)
	{
		char c14[]="paradiseitems";
		print(c14);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else if(n==15)
	{
		char c15[]="mcitems";
		print(c15);
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		premsg();
	}
	else
	{
		printf("\nsFood item not found\n");
	}
}

