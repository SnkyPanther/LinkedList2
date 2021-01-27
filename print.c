#include "main.h"

void print(struct node *sent) {
  sent=sent->next;
  while(sent != NULL) {
    printf("%d ", sent->data);
    sent=sent->next;
  }
  printf("\n");
}
