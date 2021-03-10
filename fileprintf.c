#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("Myfile","w");
  if(fp==NULL)
  {  printf("File Error");
     return;
  }
 // fputs("welcome to Linux",fp);
fprintf(fp,"model to fprintf"); 
 close(fp);
}
