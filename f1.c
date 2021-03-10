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
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,0,SEEK_SET);//points again to 0th postion so that again a will be printed other wise pointer increases automatically
c=fgetc(fp);
printf("%c\n",c);
fclose(fp);
}

