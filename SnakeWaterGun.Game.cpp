//Snake Water Gun game similar to rock paper scissor
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you, char comp)
{
	if(you==comp){
		return 0;
	}
	if(you=='s' && comp=='w'){
		return 1;
	}
	else if(you=='w' && comp=='s'){
		return -1;
	}
	if(you=='s' && comp=='g'){
		return -1;
	}
	else if(you=='g' && comp=='s'){
		return 1;
	}		
		if(you=='g' && comp=='w'){
		return -1;
	}
	else if(you=='w' && comp=='g'){
		return 1;
	}

}
int main()
{
	char you,comp;
	srand(time(0));
	int number=rand()%100+1;
	
	if(number<33)
	{
		comp='s';
	}
	else if(number>33 && number<66)
	{
		comp='w';
	}
	else
	{
		comp='g';
	}
	comp='s';
	printf("Enter 's' for snake, 'g' for gun and 'w' for water\n");
	scanf("%c",&you);
	int result=SnakeWaterGun(you,comp);
	printf("You chose %c and Computer chose %c\n", you , comp);
	
	if(result==0)
	{
		printf("Game is Draw!\n");
	}
	else if(result==1)
	{
		printf("Game Won!\n");
	}
	else
	{
		printf("Game Loose!\n");
	}
	return 0;
}
