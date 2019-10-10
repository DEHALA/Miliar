#include<stdio.h>
#include<math.h>
int main(){
	int x=1,y,sum=0;
	for (x=1;x<=100;x++){
		sum=sum+x;
		printf("y=%d\n",x);
	}
	printf("sum=%d\n",sum);
	return 0;
}
