#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("data","w");
  if(fp==NULL)
  {  printf("File Error");
     return;
  }
  fputs("welcome to Linux",fp);
  close(fp);
}
