#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the number");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
		
	}
	if(d==c)
	{
		printf("it is a palindrome");
	}
	else{
		printf("it is not a palindrome");
	}
}
