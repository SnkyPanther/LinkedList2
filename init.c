#include "main.h"

struct node *init() {    //makes the list clean and sets the sentinel node
  struct node *s=malloc(sizeof(struct node));  //this allocates a block og memory for s
  s->next=NULL;  //makes the sentinel node s next be NULL
  return(s);     //returns the s, which is the cleaned list or the sentinel node

}
