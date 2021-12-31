#include <stdio.h>
#include <stdlib.h>

int a = 10;
int*b = &a;
void incre1(){
  a = a+1;
}
void incre2(){
  *b = *b+1;
}

void incre3(int** a){
  **a = **a +1;
}
int main(){
    incre1();
    incre2();
    incre3(&b);
    printf("%d\n", *b);
     
}