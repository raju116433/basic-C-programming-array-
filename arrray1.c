#include<stdio.h>
int main (){
int num []= {10,12,15,18,20,25,90,95,100,1000,200,30,40,50};
int value , pos=-1,i;
printf ("enter the number what you are searching : ");
scanf ("%d", &value);
for (i=0;i <14; i++)
{
    if (value == num [i])
    {
        pos = i + 1;
        break ;
    }
}
if (pos == -1 )
{
    printf ("num is not valid");
}
else {
    printf ("the num is found %d",pos );
}
return 0;
}

