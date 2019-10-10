#include<stdio.h> 
#include<math.h>
int main(void)
{  
int m,n;
double i,s=0; 
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++){
	s=s+pow(i,2)+1/i;
}
printf("sum = %lf",s);
}
