#include<stdio.h>
#include<math.h>

int main()
{
char str1[]="ramesh";
char str2[]="sameer";
int i=0;
while ((str1[i]=str2[i])!='\0')
{
 i++;
}
printf("%s",str1);
return 0;
}