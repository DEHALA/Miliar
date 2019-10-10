#include <stdlib.h>

int main()
{
int x=0;
scanf("%d",&x);
switch (x<0){
case 1:x=-1;break;
case 0:x=2*x;break;
}
printf("%d\n", x);
return 0;
}
