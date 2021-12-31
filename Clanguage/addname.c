#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;

   fp = fopen("test.txt", "w+");
   fprintf(fp, "James\n");
   fputs("Will\n", fp);
   fclose(fp);

   fp = fopen("test.txt", "a");
    
   fputs("Yvonne\n", fp);
   fclose(fp);
   


  //  fp = fopen("test.txt", "r");
  //  char buf[10];
  //  fgets(buf, 5, fp );
  //  printf("%s", buf);

  //  fscanf(fp, "%s", buf);
  //  printf("%s", buf);
  //  fclose(fp);

  //  fp=fopen("test.txt","r");
  //  int ch;
  //  if(fp==NULL){
  //   return 0;
  //   }
  //  while((ch=fgetc(fp))!=EOF){
  //   printf("%c",ch);
  //  }   
  //  return 0;
}