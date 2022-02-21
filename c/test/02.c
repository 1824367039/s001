#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
void s1(int a[4][5]);
void s2(int a[4][5]);
void s3(int a[4][5]);


	int sr[4][5];
	for(int i=0;i<4;i++)
	{
		printf("请输入第%d个学生的成绩\n",i+1);
		for(int j=0;j<5;j++)
		{
			scanf("%d",*(sr+i)+j);
		}
	}
	s1(sr);
	s2(sr);
	s3(sr);
}

void s1(int a[4][5])
{
	int x=0;
	for(int i=0;i<4;i++)
	{
	    x=*(*(a+i))+x;
	}
	printf("第一门课平均分：%d\n",x/4);
}
void s2(int a[4][5])
{
	int x=0;
	for(int i=0;i<4;i++)
	{
		x=0;
		for(int j=0;j<5;j++)
		{
			if(*(*(a+i)+j)<60)
			{
				x=x+1;
			}
		}
		if(x>2)
		{
			printf("有两门课程不及格的学生是%d号学生\n",i+1);
		}
	}
}
void s3(int a[4][5])
{
	int x=0,y=0;
	for(int i=0;i<4;i++)
	{
		x=0;
		y=0;
		for(int j=0;j<5;j++)
		{
			x=x+*(*(a+i)+j);
			if(*(*(a+i)+j)>85)
			{	
				y=y+1;
			}
		}
		if(y==5||x>450)
		{
			printf("超牛学生有%d号学生\n",i+1);
		}
	}
}

















