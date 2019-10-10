#include<stdio.h>
int main()
{
	int a,b,c,t; 
	int max;
	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		t=a;
	}
	else{
		t=b;
	}
	if(t>c){
		max=t;
	}
		else{
			max=c;	
		}
	printf("最大值是：%d",max); 
	
	return 0;
 } 
