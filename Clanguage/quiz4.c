#include <stdio.h>
#include <stdlib.h>

int a = 10;
int* p = &a;
int** q = &p;
void inc1(){a = a+1; }
void inc2(){*p = *p+1; }
void inc3(){int** k = q; **k = a+1; }

int main(){
  inc1();
  inc2();
  inc3();
  printf("%d\n", **q);
}