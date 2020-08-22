//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int main()//Function main 
{
 	int a,b;//Change in data type
 	scanf("%d",&b);//Format specifier
	a=0//Initialized the value
	//Removed extra lines
 	while(b!=0)//Changed the variable
 	{
		a=a+10*(b%10);//Changed the equation 
  		b=b/10;//Changed the variable
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%d",a);//Change in format specifier anf variable
 	return 0;
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321

Input 2
5667
Output 2
7665
*/



