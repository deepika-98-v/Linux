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
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,0,SEEK_END);
len=ftell(fp);
printf("size of file is %d\n",len);
fseek(fp,0,SEEK_SET);
for(i=0;i<len;i++)
{
c=fgetc(fp);
printf("%c\t",c);
}

fclose(fp);
}

