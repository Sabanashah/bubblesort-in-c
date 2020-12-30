#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t,m[5];
	printf("enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<(5-i);j++)
		{
			if (m[j]>m[j+1])
			{
				t=m[j];
				m[j]=m[j+1];
				m[j+1]=t;
			}
		}
	}
	for(i=0;i<5;i++)
	printf(" after sorting the array is %d\n",m[i]);
}
