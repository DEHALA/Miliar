#include<stdio.h>
 int main()
 {
 	int hour1, min1;
 	int hour2, min2;
 	printf("ʱ��1(ʱ ��)��");
 	scanf("%d %d",&hour1,&min1);
 	printf("ʱ��2(ʱ ��)��");
 	scanf("%d %d",&hour2,&min2);
    printf("ʱ��Ϊ%dСʱ%d��",(hour2*60+min2-hour1*60-min1)/60,(hour2*60+min2-hour1*60-min1)%60); 
 	
 	
 	return 0;
  } 
