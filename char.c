#include<stdio.h>
int main()
{
  char c,f;
  int count =0;
  printf("enter the charecter for search");
  f = getc(stdin);
  
   FILE *fp1 = fopen("file1.txt", "r");
  while((c=fgetc(fp1))!=EOF){
    if(c == f)
      count++;
  }
   printf("%d\n",count);
  
   fclose(fp1);

   return 0;
}
