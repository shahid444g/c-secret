#include<stdio.h>
#include<string.h>
int main()
{
  char c,f;


  
   FILE *fp1 = fopen("file1.txt", "r");
  
   FILE *fp2 = fopen("file2.txt", "w");
  while((c=fgetc(fp1))!=EOF){
   c = toupper(c);
    fputc(c,fp2);
  }

   fclose(fp1);

   fclose(fp2);
   return 0;
}
