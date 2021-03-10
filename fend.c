#include<stdio.h>
int main()
{
FILE *f=fopen("new.txt","r");
int c=getc(f);
while(c!=EOF)
{
putchar(c);
c=getc(f);
}
fclose(f);
getchar();
return 0;
}
