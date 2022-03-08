//#include<stdio.h>
int main()
{

	int n1,n2,n3;
char ch;
	
	printf("Enter 1st no:\n");
	scanf("%d",&n1);
	printf("Enter operator of your choice \n");
	printf("Operator you want +,-,*,/,% \n");
	scanf("%s",&ch);
	printf("Enter 2st no:\n");
	scanf("%d",&n2);
	
	if(ch=='+')
	{ printf("Sum of  %d + %d = %d",n1,n2,n1+n2);
	}
	else if(ch=='-')
	{ printf("Subtraction of %d - %d = %d",n1,n2,n1-n2);
	}
	else if(ch=='*')
	{printf("Multiplication of  %d * %d = %d",n1,n2,n1*n2);
	}
	else if(ch=='/')
	{printf("Division of %d / %d = %d",n1,n2,n1/n2);
	}
	else if(ch=='%')
	{printf("Remainder of %d % %d  = %d",n1,n2,n1-n2);
	}
	else
	{ printf("Invalid operator");
	}

	return 0;
}
