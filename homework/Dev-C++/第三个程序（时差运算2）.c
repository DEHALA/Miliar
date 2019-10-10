#include<stdio.h>
int main()
{
	int hour1,min1;
	int hour2, min2;
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	int t1=hour2-hour1;
	int t2=min2-min1;
	  if(t2<0){
		t2=60 + t2;
		t1--;
	}
	printf("%d %d",t1,t2); 
	
	return 0;
 } 
