#include<stdio.h>
int main(){
	int s,t,g;
	scanf("%d",&s);
	t=s/10;
	switch(t){
		case 9:printf("A\n");break;
		case 8:printf("B\n");break;
		case 7:printf("C\n");break;
		case 6:printf("D\n");break;
		default:printf("E\n");break;
	}
	return 0;
}