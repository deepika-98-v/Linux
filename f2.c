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
for(i=0;i<26;i++)
{
c=fgetc(fp);
printf("%c\t",c);
}
fseek(fp,2,SEEK_CUR)
c=fgetc(fp);
printf("%c\n",c);}
fclose(fp);
}

