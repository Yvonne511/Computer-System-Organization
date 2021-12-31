#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;

  fp = fopen("test.txt", "w+");
  fprintf(fp, "%d\n", 10);
  fprintf(fp, "%d\n", 20);
  fprintf(fp, "%d\n", 30);
  fclose(fp);

  fp=fopen("test.txt","r");
  int ch;
  int sum = 0;
  if(fp==NULL){
   return 0;
   }
  while(!feof(fp)){
    fscanf(fp,"%d",&ch);
    sum += ch;
    printf("%d\n",ch);
    //printf("%d\n", sum);
  }  
   printf("%d\n", sum);
   fclose(fp);

}