#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};

struct node *init();
void print(struct node *sent);
int add(struct node *list, int number);
int search(struct node *list, int number);
void delete(struct node *list, int number);
