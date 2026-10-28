#include<stdio.h>
int main()
{
	int t;
	float m,cost;
	scanf("%f%d",&m,&t);
	if(m<=3)
	{
		cost=10;
	}
	else if(m>3&&m<=10)
	{
		cost=10+(m-3)*2;
	}
	else
	{
		cost=10+7*2+(m-10)*3;
	}
	cost=cost+(t/5)*2;
	printf("%.2f\n",cost);
	return 0;
}