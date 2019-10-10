#include<stdio.h>

int main()
{
	printf("请输入两个时间（时 分）（第二个时间大于第一个时间):"); 
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1); 
	scanf("%d %d",&hour2,&minute2);
	int D1=hour1*60+minute1;
	int D2=hour2*60+minute2;
	int D=D2-D1;
	printf("时间差为%d小时%d分",D/60,D%60);
	
	
	return 0;
 } 
