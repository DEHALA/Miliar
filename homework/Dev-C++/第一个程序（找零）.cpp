#include <stdio.h>

int main()
 {	int yj=0;
 	
 	printf("请输入商品原价（元)");
 	scanf("%d",&yj);
 	
 	int price=0;
 	
 	printf("请输入付款金额（元）");
 	scanf("%d",&price);
 
 	int change=yj-price;
 	
 	printf("找您%d元\n",change);
 	
 	return 0;
 }	
