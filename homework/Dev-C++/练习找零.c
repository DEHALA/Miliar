#include<stdio.h>
 int main()
 {
 	int hour1, min1;
 	int hour2, min2;
 	printf("时间1(时 分)：");
 	scanf("%d %d",&hour1,&min1);
 	printf("时间2(时 分)：");
 	scanf("%d %d",&hour2,&min2);
    printf("时差为%d小时%d分",(hour2*60+min2-hour1*60-min1)/60,(hour2*60+min2-hour1*60-min1)%60); 
 	
 	
 	return 0;
  } 
