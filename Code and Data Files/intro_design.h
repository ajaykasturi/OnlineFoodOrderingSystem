//intro_design
#include<stdio.h>
#include<stdlib.h>
void quote(int a)//quotation function to print random one quote while runnning the main program
{
	printf("\nQUOTE: ");
	switch(a)
	{
		case 1: printf("The first beer cans were produced in 1935.\n");
		break;
		case 2: printf("Scientists can turn peanut butter into diamonds.\n");
		break;
		case 3: printf("Until 2015, beer wasn't classified as alcohol in Russia.\n'");
		break;
		case 4: printf("Supplements can never fully replace real foods.\n");
		break;
		case 5: printf("Loud music makes you drink more and faster.\n");
		break;
		case 6: printf("Bad eggs will float, and makes you bloat.\n");
		break;
		case 7: printf("Peanuts can be used to make dynamite.\n");
		break;
		case 8: printf("Expiration dates on bottled water have nothing to do with the water.\n");
		break;
		case 9: printf("Human DNA is 60%% the same as bananas.\n");
		break;
		default: printf("India has the lowest meat consumption in the world.\n");
		break;
	}
}
void randf(void)//quotation function
{
	srand(time(0));
	int r;
	r=rand()%10;
	quote(r);
}
void intro_design(void)
{
	int i;
	for(i=0;i<20;i++)
	{
		if(i==10)
		{
			printf("WEL-COME");
		}
		printf("|");
	}
	printf("\n");
	for(i=0;i<28;i++)
	{
		printf("-");
	}
	printf("\nFOODORAEATS ONLINE FOOD DELIVERY\n");
	randf();
	printf("\n->Press 1 to login");
	printf("\n->Press 2 to signup\n");
	printf("\nEnter your choice: ");
}
