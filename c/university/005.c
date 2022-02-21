#include <stdio.h>
int main()
{
	printf("有ABC三根柱子，将A上的n个珠子移到C上，每次只能移动一个珠子，并且小的珠子要在大的上面\n");
	int n;
	void hnd(int n,char one,char two,char three);
	printf("请输入汉诺塔的高度个数：");
	scanf("%d",&n);
	hnd(n,'A','B','C');
}

void hnd(int n,char one,char two,char three)
{
	void pr(char x,char z);
	if(n==1)
	pr(one,three);
	else
	{
	hnd(n-1,one,three,two);
	pr(one,three);
	hnd(n-1,two,one,three);
	}
}
void pr(char x,char z)
{
	printf("%c ---> %c\n",x,z);    //执行的步骤数为2的n次方-1
}




