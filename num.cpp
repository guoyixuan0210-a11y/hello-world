#include<stdio.h>
int main(){
	int a,qian,bai,shi,ge;
	scanf("%d",&a);
	qian=a/1000;
	bai=a/100%10;
	shi=a/10%10;
	ge=a%10;
	if(a>=1000)
	{
		printf("%d是一个4位数，各位数字分别是：千位%d，百位%d，十位%d，个位%d\n",a,qian,bai,shi,ge);
	}
	else if(a>=100)
	{
		printf("%d是一个3位数，各位数字分别是：百位%d，十位%d，个位%d\n",a,bai,shi,ge);
	}
	else if(a>=10)
	{
		printf("%d是一个2位数，各位数字分别是：十位%d，个位%d\n",a,shi,ge);
	}
	else
	{
		printf("%d是一个1位数，个位是%d\n",a,ge);
	}
	return 0;
}