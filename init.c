#include "main.h"

struct node *init() {
  struct node *s=malloc(sizeof(struct node));  //this allocates a block og memory for s
  s->next=NULL;  //makes the sentinel node s next be NULL
  return(s);

}
