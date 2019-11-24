#include <stdio.h>
void main()
{
int a[5],i;
i=0;
while (i<5){
scanf ("%d",&a[i]);
i++;
}
i=4;
while (i>=0){
printf ("%d\n",a[i]);
i--;
}
}
