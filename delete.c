#include "main.h"

void delete(struct node *prev, int number) {  //deletes the node if it is found in the list
  struct node *curr;     // defining the curr struct node
  curr=prev->next;       //setting the curr to prev next so we can go into the while loop and work through it
  while(curr != NULL) {  // multiple times. Run the loop until the curr does not equal NULL
    if(curr->data == number) {  //while going through the loop, we look for the number that want to delete
      curr=prev->next;          //if this is the number that want to delete, the prev next is pointing to the
      prev->next=curr->next;    //node that  is one ahead(skips one node). that node is the curr.
      free(curr);        //frees the node that has been skipped removed
      return;            // closes the function
    }
    prev=curr;           // if the number is not found, this moves it down the list one by one
    curr=curr->next;
  }
}


