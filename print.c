#include "main.h"

void print(struct node *sent) {  // this functions prints the data that lies in the list in a single line
  sent=sent->next;               //move one node from the sentinel node
  while(sent != NULL) {          //goes up the list while the next does not equal to NULL
    printf("%d ", sent->data);   // prints the data in the node in a single node
    sent=sent->next;             //moves the sent one node up and repeats the while if conditions meet
  }
  printf("\n");                  //makes a new line after printing the list's data in a single line
}
