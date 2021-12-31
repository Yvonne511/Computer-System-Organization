int main(void) {
  

  // int a[3] = {10, 11, 12};
  // int* p = a;
  // printf("%p\n", a);
  // printf("%d\n", *a);
  // printf("%d\n", *(a+1));

  // printf("%p\n", a);
  // printf("%p\n", p);
  // return 0;

  // int a[2][3] = {{1,2,3},{4,5,6}};
  // int (*p)[3] = a;
  // printf("%p\n", a);
  // printf("%d\n", *a[0]);
  // printf("%p\n", a[0]);
  // printf("%p\n", p);

  int x = 10;
  int *p = &x;
  printf("%p\n", p);
  printf("%p\n", &x);
  printf("%d\n", *p);
  //p++ change address
  //(*p)++ change content
  p++;
  printf("%d\n", *p);
  p--;
  printf("%d\n", *p);
}