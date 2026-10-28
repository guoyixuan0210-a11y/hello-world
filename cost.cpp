#include<stdio.h>
int main()
{
	float a,cost;
	scanf("%f",&a);
	if(a<=150)
	{
		cost=a*0.6;
	}
	else if(a>150&&a<=400)
	{
		cost=150*0.6+(a-150)*0.8;
	}
	else 
	{
		cost=150*0.6+250*0.8+(a-400)*1.0;
	}
	printf("cost=%.2f\n",cost);
	return 0;
}