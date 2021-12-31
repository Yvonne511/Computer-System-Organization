#include "employee.h"
EMPLOYEE* list_of_employees=NULL;

void printEmployee(EMPLOYEE e){
    printf("Names:%s, ", e.name);
    printf("ID:%d\n", e.id);
    if (e.payments == NULL) {
      printf("%s\n","No Payments...");
    } else {
      printf("%s\n","--------------------");
      printf("%s\n","Date\t\t\t\t\tAmount");
      printf("%s\n","----\t\t\t\t\t------");
      while(e.payments != NULL){
        printf("%s\t\t\t\t%f\n",e.payments->date,e.payments->amount);
        e.payments=e.payments->next;
      }
    }
}

void addEmployee(int e_id, char* e_name){
    struct employee* new = (struct employee*) malloc(sizeof(struct employee));
    new->id=e_id;
    new->name=e_name;
    new->next=list_of_employees;
    list_of_employees = new;
}

void printEmployees(){
    if (list_of_employees == NULL ) {
      printf("%s\n","The list is empty...");
    } else{
      while(list_of_employees != NULL){
        printEmployee(*list_of_employees);
        list_of_employees=list_of_employees->next;
        printf("%s\n","====================================");
      }
    }
}

int addPayment(int e_id, char* p_date, float p_amount){
    if (list_of_employees == NULL ) {
      printf("%s\n","The list is empty...");
      return 0;
    } else{
      while(list_of_employees != NULL){
        if (list_of_employees->id == e_id){
          struct payment* new = (struct payment*) malloc(sizeof(struct payment));
          new->date=p_date;
          new->amount=p_amount;
          new->next=list_of_employees->payments;
          list_of_employees->payments = new;
          return 1;
        } else{
          list_of_employees=list_of_employees->next;
        }
      }
    }
    return 0;
}

int deleteEmployee(int e_id, char* e_name){
    if (list_of_employees == NULL ) {
      printf("%s\n","The list is empty...");
      return 0;
    } else{
      struct employee *current = list_of_employees; struct employee *prev;
      if (current!=NULL && current->id==e_id){
        list_of_employees = current->next;
        return 1;
      }
      while(current != NULL && current->id != e_id){
        prev = current;
        current = current->next;
      }
      if (current == NULL) return 0;
      prev->next = current->next;
      free(current);
      return 1;
    }
}