#include<stdio.h>
#include<conio.h>
int main()
{
	int no,rem,rev,temp;
	temp=0;
	printf("enter the number");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
}
	if(rev==temp)
	{
		printf("number not is palindorm");
	}
	else
	{
		printf("number is palindrom");
	}
	return 0;
}
