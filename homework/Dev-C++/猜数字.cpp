#include<stdio.h>
int main()
{
int yournumber,mynumber = 38;
scanf ("%d",&yournumber); 
if(yournumber == mynumber){ 
    printf("Good Guess!");
}
else if(yournumber > mynumber ){
    printf("Too big!");
}else{ 
    printf("Too small!");
}
}

