#include<stdio.h>

int main()
{
	printf("����������ʱ�䣨ʱ �֣����ڶ���ʱ����ڵ�һ��ʱ��):"); 
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1); 
	scanf("%d %d",&hour2,&minute2);
	int D1=hour1*60+minute1;
	int D2=hour2*60+minute2;
	int D=D2-D1;
	printf("ʱ���Ϊ%dСʱ%d��",D/60,D%60);
	
	
	return 0;
 } 
