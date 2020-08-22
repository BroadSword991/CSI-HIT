//Please add a comment to each line with changes and indicate the changes
#include<stdio.h>
#include<string.h>//Correction in header name
int main()
//Please add a comment to each line with changes and indicate the changes
{
	char a[100],b;//Datatype changed
	int c=0,i;//Declaring datatype int an d initializing value of c for count
	printf("Enter a string ");
	scanf("%s",a);//Format specifier changed
	printf("Enter a character to count ");
        scanf("%c",&b);//Format specifier changed
	printf("%c\n",b);//Format specifier changed
	for(i=0;i<strlen(a);i++)//Function is strlen
	{		
		if(a[i]==b)
		 c++;
	}
	printf("\nThe number of occurrences of %c is %d",b,c);//Order of Format specifier changed
	return 0;//Return specified
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter a string hello
Enter a character to count l
Output 1
l

The number of occurrences of l is 2

Input 2
Enter a string Mississippi
Enter a character to count s
Output 2
s

The number of occurrences of s is 
*/
//Please add a comment to each line with changes and indicate the changes
