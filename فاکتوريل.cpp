#include<stdio.h>
#include<conio.h>
#include<iostream>

main()
{
	int x,i,o; 
	o=1;
	printf("enter a number");
	scanf("%d",&i);
	for(x=1;x<=i;x++)
	{
		o=x*o;
	}
	printf("%d",o);
	
	getch();
	return 0;
}
