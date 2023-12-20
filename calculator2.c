#include<stdio.h>
int main()
{
	char oper;
	int no1,no2,result;
	printf("enter value for no. 1\n");
	scanf("%d",no1);
	printf("enter value for no. 2");
	scanf("%d",no2);

	printf("what operation would you like to operate? \n");
	printf("1.for addition type '+' \n 2.for substraction type '-' \n 3.for multiplication type '*' \n");
	scanf("%c",oper);
	
	switch(oper)
	{
		case 'a' :
			result=no1+no2;
			break;
		case 'b' :
			result=no1-no2;
			break;
		case 'c' :
			result=no1*no2;
			break;
	}
	return 0;
}
