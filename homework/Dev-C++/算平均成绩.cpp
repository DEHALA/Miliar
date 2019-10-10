#include<stdio.h>
int main()
{
	int n,i,c=0;
	double a,t=0,g;
	scanf("%d",&n); 
	if(n>0){
		for (i=1;i<=n;i++){
		scanf("%lf",&g);
		t=t+g;
		if (g<60) {
			c++;
		}
		}
		a=t/n;
	}				
	printf("average = %.2f\ncount = %d",a,c);
	return 0;
}


