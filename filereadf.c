#include<stdio.h>
int main()
{
  FILE *fp;
  char buf[100];
  fp=fopen("Myfile","r");
  if(fp==NULL)
  {  printf("File Error");
     return;
  }
 // fputs("welcome to Linux",fp);
//fprintf(fp,"model to fprintf"); 
fscanf(fp,"%s",buf);
printf("%s",buf);
 close(fp);
}
