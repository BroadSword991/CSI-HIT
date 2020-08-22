//Please add a comment to each line with changes and indicate the changes
#include<stdlib.h>
int main()//Spelling
{
	int a[100];
	int n;
	int s;
	int flag=0;
	int *ap;
	ap=a;//Change *
	printf("Enter the number of elements in the array:-");
	scaf("%d",&n);//Format Specifier
	printf("Enter the elements:-\n");
	for(i=0;i<n;i++)//Condition
		scanf("%d",a[i]);//Format Specifier
	printf("Enter the element to be searched:-");
	scanf("%d",s);//Variable name and Format Specifier
	for(i=0;i<n;i++)//Update condition
		{
			if(ap+i==s)//Condition modified
			flag==1;
		}//Brackets
	if(flag!=0)
		prinf("Item found\n");
	else if
		printf("Item not found\n");//Output statement
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
Enter the number of elements in the array:-5
Enter the elements:-
1
2
3
4
5
Enter the element to be searched:-4
Output 1
Item found
Input 2
Enter the number of elements in the array:-3
Enter the elements:-
8
5
4
Enter the element to be searched:-2
Output 2
Item not found
*/
//Please add a comment to each line with changes and indicate the changes
