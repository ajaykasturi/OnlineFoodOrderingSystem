#include<stdio.h>
void Happy(void);//function prototptpe
void TopBrands(void);//function prototype

void Happy(void)//function to print items in a file
{
	FILE *fptr;
	fptr=fopen("EatWhatMakesYouHappy.txt","r");
	char c;
	while((c=fgetc(fptr))!=EOF)
	{
		printf("%c",c);
	}
	printf("\n");
	fclose(fptr);	
}
void TopBrands(void)//function to print brands in a file
{
	FILE *ptr;
	ptr=fopen("TopBrands.txt","r");
	char c;
	while((c=fgetc(ptr))!=EOF)
	{
		printf("%c",c);
	}
	printf("\n");
	fclose(ptr);	
}
