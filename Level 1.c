//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>//Correction in Spelling
void main()//Change in type
{	float a,b,c,mx,mi;//Change data type
	scanf("%f%f%f",&a,&b,&c);
	printf("\t%f\t%f\t%f",a,b,c);//Change format specifiers
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		mx=b;//Removed an extra if clause 
            	if(a>c) 
				mi=c;
		else 
				mi=a;
	}
	//Extra bracket
	else//Please add a comment to each lines that has changes and Indicate the changes
	{
		mx=c;
		mi=a;//No need for another if clause 
	}
	printf("Largest is %f and smallest is %f",mx,mi);//Correction in order and change to printf also change in format specifier
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases

Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3

Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
