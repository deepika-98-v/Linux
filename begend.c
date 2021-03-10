#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp=fopen("abfile","r");
if(fp==NULL)
{
printf("File error");
return;
}
fseek(fp,0,SEEK_SET);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,1,SEEK_SET);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,2,SEEK_SET);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,-2,SEEK_END);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,-3,SEEK_END);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,-4,SEEK_END);
c=fgetc(fp);
printf("%c\n",c);
fseek(fp,-5,SEEK_END);
c=fgetc(fp);
printf("%c\n",c);
fclose(fp);
}
