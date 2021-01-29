///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///   Name: Alexandr Kochenkov        Date: 1/28/2021                       ///
///   Class: CSE222A                  Assignment: Pogramming Assignment 2   ///
///                                                           		    ///
///   Synopsis: This program bascically makes a linked list were you can    ///
///   insert number, search for numbers, deletes number from the list,      ///
///   has an option to print out all the numbers in a single line, and when ///
///   doen with the program you can exit it. 				    ///
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "main.h"  //includes the functions and the struct node
void directions();  //this is a function that prints out the directions

int main(){
  struct node *sentinel;
  int number, result;
  char response[100], command, extra;
  sentinel = init();                // makes the init equals sentinel
  directions();		            // passes the directions as soon as run the program
  while(1) {                        // infinite loop
    printf(">");
    fgets(response, 100, stdin);    // takes the response of the user
    result=sscanf(response, "%c %d %c", &command, &number, &extra);   //breaks up the response into a character number and
    if(result == 2)  {                                                // extra and has a buffer
      if(command == 'i') {                //if buffer equals 2 then these are options if command is i
        if(search(sentinel, number) == 0) {// then the following happens, searches if there is the number already in list
          if(add(sentinel, number) == 1)  { //if there isn't then is makes the node in the add function
            printf("SUCCESS\n");            //and prints SUCCESS
          }
          else {
            printf("NODE ALREADY IN LIST\n"); //if node is already in list then prints this message
          }
        }
      }
      else if(command == 's') {              // if command is 's' then the search option runs
        if(search(sentinel,number) == 1)  {  // runs the search functions and looks for the entered nunber
          printf("FOUND\n");                 //prints FOUND if in the list
        }
        else  {
          printf("NOT FOUND\n");             //if there is no such number then prints this message
        }
      }
      else if(command == 'd')  {             // if command is 'd' then the delete option runs
        if(search(sentinel, number) == 1) {  // first searches the list if there is the number is the list
          delete(sentinel, number);          // if found delete function deletes and prints SUCCESS
          printf("SUCCESS\n");
        }
        else {
          printf("NODE NOT FOUND\n");        // if not found then system prints this message
        }
      }
      else {
        directions();                        // anything else printed that equals the buffer = 2 prints the directions
      }
    }
    else if(result == 1) {                   // if results equals 1
      if(command == 'p') {                   // if command equals 'p' then runs the prints option
        print(sentinel);                     //runs the print function
      }
      else if(command == 'x') {              // if command is 'x' then runs the exit option
        struct node *curr, *prev;            // define some struct node varibles for freeing the nodes in list
        prev=sentinel;                       // prev equals the sentinel
        curr=prev->next;                     //curr equals the prev next so that we can go through the while loop
        while(curr != NULL) {                //loops while the curr does not equal NULL
          free(prev);                        //every node freed
          prev=curr;                         //moves up one node to proceed with the loop
          curr=curr->next;
        }    
        free(prev);                          //frees the last node
        return 0;                            // and exits the program
      }
      else {
        directions();                        // anything that isn't recognized prints out directions
      }
    }
    else {
      directions();
    }
  }
}
void directions() {  //this function prints out the options for this program
  printf("\n\nPlease enter one of the following commands:\n");
  printf("i number    insert number into the list\n");
  printf("p           print the list in order\n");
  printf("s number    search for number in the list\n");
  printf("d number    delete number from the list\n");
  printf("x           exit the program\n");
}
