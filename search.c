#include "main.h"

int search(struct node *prev, int number) { //tries to find the number that was entered if it is in the linker list
  struct node *curr; // defines the curr struct node variable
  curr=prev->next;   // sets the curr equal to the prev next, so we can go into the while loop
  while(curr != NULL) {            // runs while the next is not equal to NULL
    if(curr->data == number) {     // checks if the data is equal to the number
      return 1;                    // returns 1 if the number was found
    }
    else {
      prev=curr;                   // if number not found, it moves up one node and checks there
      curr=curr->next;             // prev and curr move one node up the list
    }
  }
  return 0;   // if the number was not found in the list returns 0

}
