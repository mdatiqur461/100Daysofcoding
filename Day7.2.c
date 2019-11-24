#include <stdio.h>
#include <string.h>
void main()
{
int i,j,len;
char str[100],strrev[100];
printf ("\n Please enter any string : ");
gets(str);
j=0;
len = strlen(str);

for (i=len-1;i>=0;i--)
{
strrev[j++]=str[i];
}
strrev[i]='\0';
printf ("\n String after reversing = %s",strrev);
}
