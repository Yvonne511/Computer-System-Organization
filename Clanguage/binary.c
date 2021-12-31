#include "stdio.h"
int main(void) {
  int y=10;
  int* x=&y;
  FILE* fptr= fopen("textfile2.dat","wb");
  fwrite(x,sizeof(y),1,fptr);
  fclose(fptr);

  int z;
  fptr= fopen("textfile2.dat","rb");
  fread(&z,sizeof(y),1,fptr);
  fclose(fptr);
  printf("%d\n",z);
}