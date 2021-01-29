#include "main.h"

int add(struct node *prev, int number) {  // tries to add a node into the list
  struct node *curr, *new_node=init();    //defining a node the new node that is being added to the list
  if(new_node == NULL){   //if there is no memory left, which is unlikely, returns 0
    return 0;
  }
  new_node->data=number;      //setting the new nodes data into the number that is wanting to be added to the list
  curr=prev->next;      //setting the curr to the prev next in order to go into the while loop and then keep up steping
  while(curr != NULL) {    //up through the list.    This runs the loop until the curr next is a NULL
    if(curr->data > number) {   // if the curr data is bigger than the number
      prev->next=new_node;    //then add the node with the number right before the curr data node
      new_node->next=curr;
      return 1;
    }
    else {
      prev=curr;         //setting prev to curr and then curr to curr next in order to go through the loop again
      curr=curr->next;
    }
  }
  prev->next=new_node;  //the loop exits when the curr next is NULL
  new_node->next=NULL;  // that means that the number that is being added is the biggest of the list
  return 1;             // and has to be put in the end of the list and have the new node next be NULL
}                       //returns 1 if succesful in adding the number
