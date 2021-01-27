#include "main.h"

int add(struct node *prev, int number) {
  struct node *curr, *new_node=init();
  if(new_node == NULL){
    return 0;
  }
  new_node->data=number;
  curr=prev->next;
  while(curr != NULL) {
    if(curr->data > number) {
      prev->next=new_node;
      new_node->next=curr;
      return 1;
    }
    else {
      prev=curr;
      curr=curr->next;
    }
  }
  prev->next=new_node;
  new_node->next=NULL;
}
