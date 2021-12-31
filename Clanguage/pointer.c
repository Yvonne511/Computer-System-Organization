#include <stdio.h>

int inc(int a){
  a = a+1;
}

int inc2(int* a){
  *a = *a +1;
}

int main(void) {
  // int a[5] = {10, 11, 12, 13, 14};
  // for (int i = 0; i<10; i++){
  //   printf("%d\n", a[i]);
  // }

  int x = 10;
  inc2(&x);
  int* p;
  //p = &x;
  printf("%d\n", x);
  // printf("%p\n", &x);
  // printf("%p\n", &p);
  // printf("%p\n", p);
  return 0;
}