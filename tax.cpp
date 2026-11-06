#include<stdio.h>
int main(){
	float a,b,c,d,e,f,yt,l,s;
	printf("请输入工资基数：");
	scanf("%f",&a);
	b=a*0.08;
	c=a*0.02;
	d=a*0.01;
	e=a*0.05;
	yt=a-(b+c+d+e)-5000;
	if(yt<=0){
		yt=0;f=0;
	}
	else if(yt<=3000){
		l=0.03;s=0;
	}
	else if(yt<=12000){
		l=0.1;s=210;
	}
	else if(yt<=25000){
		l=0.2;s=1410;
	}
	else if(yt<=35000){
		l=0.25;s=2660;
	}
	else if(yt<=55000){
		l=0.3;s=4410;
	}
	else if(yt<=80000){
		l=0.35;s=7160;
	}
	else
	{
		l=0.45;s=15160;
	}
	if(yt>0){
		f=yt*l-s;
	}
	printf("工资构成项：\n");
	printf("工资基数：%.2f\n",a);
	printf("养老保险：%.2f\n",b);
	printf("医疗保险：%.2f\n",c);
	printf("失业保险：%.2f\n",d);
	printf("住房公积金：%.2f\n",e);
	printf("个人所得税：%.2f\n",f);
	printf("扣发项：%.2f\n",b+c+d+e+f);
	printf("实发工资：%.2f\n",a-b-c-d-e-f);
	return 0;
	
}