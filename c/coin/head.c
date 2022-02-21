#include <stdio.h>

//能被4整除但不能被100整除的年份为普通闰年 或 能被400整除的年份为闰年

struct Date{
	int year;
	int month;
	int day;
};


int main()
{
	struct Date Day;
	int end=0;
	
	printf("请输入年月日：");
	scanf("%d-%d-%d",&Day.year,&Day.month,&Day.day);
	end=Day.day;
	int number[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<(Day.month-1);i++)
	{
		end=end+number[i];

	}
	if(Day.month>2)
	{
		if((Day.year%400==0)||((Day.year%4==0)&&(Day.year%100!=0)))
		{
			end=end+1;
		}
    }
	printf("%d-%d-%d是本年的第%d天",Day.year,Day.month,Day.day,end);
	return 0;
	
}
