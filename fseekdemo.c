#include<stdio.h>
int main()
{
FILE *fp;
char c;
int i;
fp=fopen("abfile","r");
if(fp==NULL)
{
printf("File Error");
return;
}
for(i=0;i<5;i++)
{
c=fgetc(fp);
printf("%c\n",c);
}
c=fgetc(fp);
printf("%c\n",c);
fclose(fp);
}

