#include<stdio.h>
int main()
{
	int a,b,c,t; 
	int max;
	printf("����������������");
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
	printf("���ֵ�ǣ�%d",max); 
	
	return 0;
 } 
