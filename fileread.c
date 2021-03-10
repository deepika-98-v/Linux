#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("data","r");
  char buf[100];
  if(fp==NULL)
  {  printf("File Error");
     return;
  }
  fgets(buf,100,fp);
  printf("%s",buf);
  close(fp);
}
