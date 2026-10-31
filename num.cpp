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
		printf("整数%d是4位数，千位：%d,百位：%d,十位：%d,个位：%d\n",a,qian,bai,shi,ge);
	}
	else if(a>=100)
	{
		printf("整数%d是3位数，百位：%d,十位：%d,个位：%d\n",a,bai,shi,ge);
	}
	else if(a>=10)
	{
		printf("整数%d是2位数，十位：%d,个位：%d\n",a,shi,ge);
	}
	else
	{
		printf("整数%d是1位数，个位：%d\n",a,ge);
	}
	return 0;
}