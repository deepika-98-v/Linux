#include<stdio.h>
int main()
{
FILE *fp;
char c;
int i;
int len;
fp=fopen("abfile","r");
if(fp==NULL)
{
printf("File Error");
return;
}
for(i=1;i<5;i++)
{
fseek(fp,-(i),SEEK_END);
c=fgetc(fp);
printf("%c\t",c);
}

fclose(fp);
}

