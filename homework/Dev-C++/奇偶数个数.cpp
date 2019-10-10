#include<stdio.h>
int main()
{
	int N,i,p,ji=0,ou=0;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		scanf("%d",&p);
		if (p%2==0) {
			ou++;
		}
		else{
			ji++;
		}			
	}
	printf("%d %d",ji,ou);
}


