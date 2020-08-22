//Please add a comment to each line with changes and indicate the changes
#include<stdlib.h>
int main()
{
	int a[50],ap,min,max;//Array size given
	printf("enter the number of elements in array:-");//Change scanf to printf
	scanf("%d",&ap);
	//Unnecessary statement
	for(int i=0;i<ap;i++)//Condition modified
	{
		scanf("%d",&a[i]);//Format specifier
 	}
	for(int i=0;i<ap;i++)//Condition modified
                printf("%d\n",a[i]);//Format specifier
	min=a[0];
        max=a[0];//initialized max value
	for(int i=1;i<ap;i++)//Update condition and initialization modified
	{
		if(a[i]>max)//Condition modified in both if clause
 			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("Min=%d and Max=%d",min,max);//Format specifier changed and order of variable
 	return 0;
}
//Please add a comment to each line with changes and indicate the changes
/*
Input 1
enter the number of elements in array:-5
1
2
3
4
5
Output 1
1
2
3
4
5
Min=1 and Max=5

Input 2
enter the number of elements in array:-3
6
3
9
Output 2
6
3
9
Min=3 and Max=9

*/
//Please add a comment to each line with changes and indicate the changes
