//program of guessing the number!!! #fun game....

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,iguess=1;
	srand(time(0));
	number=rand()%100+1;
	do
	{
    	printf("guess the number between 1 to 100!!\n");
    	scanf("%d",&guess);
		if(guess<number)
		{
			printf("TRY A LARGER NUMBER!!\n");
		}
		else if(guess>number)
		{
			printf("TRY A SMALLER NUMBER!!\n");
		}
		else
		{
			printf("WOW YOU GUESS IT RIGHT!!!CONGO in %d attempts\n",iguess);
		}
		iguess++;
    } 
    while(guess!=number);
	return 0;
}
