#include<stdio.h>
#include<string.h>
int main()
{
    void reverse(char*);
    char s[]="sameersinha";
    reverse(s);
 return 0;
}

void reverse(char s[]){
    int i,j;
    char c,ptr;
    
    for ( i = 0,j=strlen(s)-1; i < j ; i++,j--)
    {
      c=s[i];
      s[i]=s[j];
      s[j]=c;
    }
    printf("%s",s);
}
