#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int value;
  struct node* next;
}NODE;

void additem (NODE** h, int v){
  NODE* cell = (NODE*)malloc(sizeof(NODE));
  cell->value = v;
  cell->next = *h;
  *h = cell;
}

int main(){
  NODE* head;
  head = NULL;
  additem(&head, 10);
  additem(&head, 5);
  additem(&head, 7);
  NODE* p = head;
  while (head->next!=NULL){
    head = head ->next;
  }
  p = p->next;
  printf("%d\n", p->value);
}

