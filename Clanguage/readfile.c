#include "stdio.h"
int main(void) {
  FILE *fp;

   fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

   fp = fopen("test.txt", "r");
   char buf[10];
   fgets(buf, 5, fp );
   printf("%s", buf);

   fscanf(fp, "%s", buf);
   printf("%s", buf);
   fclose(fp);

   fp=fopen("test.txt","r");
   int ch;
   if(fp==NULL){
    return 0;
    }
   while((ch=fgetc(fp))!=EOF){
    printf("%c",ch);
   }   
   return 0;
}