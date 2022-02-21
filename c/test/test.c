#include<stdio.h>
#include<string.h>

struct mc{
		char a[20];
		int b;
	}x[3]={"zs",0,"ls",0,"ww",0};
	
int main()
{
	
	char y[20];
	
	for(int i=0;i<10;i++)
	{
		scanf("%s",y);
		for(int j=0;j<3;j++)
		{
		    if(strcmp(y,x[j].a)==0)
		    {
			    x[j].b++;
		    }
		}
	}
	

for(int i=0;i<3;i++)
{
	printf("%s:%d\n",x[i].a,x[i].b);
}
}