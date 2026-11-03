#include<stdio.h>
int main(){
	int year,month,day,x;
	scanf("%d%d%d",&year,&month,&day);
	int leap=((year%4==0&&year%100!=0)||(year%400==0));
	switch(month)
	{
		case 12:x+=31;
		case 11:x+=30;
		case 10:x+=31;
		case 9:x+=30;
		case 8:x+=31;
		case 7:x+=30;
		case 6:x+=31;
		case 5:x+=31;
		case 4:x+=30;
		case 3:x+=31;
		case 2:x+=(leap?29:28);
		case 1:x+=day;break;
	}
	printf("%d月%d日止，%d年已过去%d天。\n",month,day,year,x);
	return 0;
	
}