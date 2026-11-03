#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=1&&b>=1&&c>=1&&a<=10000&&b<=10000&&c<=10000)
	{
		if(a+b>c&&a+c>b&&b+c>a){
			printf("Yes\n");
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			    printf("Right\n");
			}
			else if(a==b&&b==c){
			    printf("Equilateral\n");
			}
			else{
				printf("General\n");
			}
		}
		else
		printf("No\n");
	}
	return 0;
}