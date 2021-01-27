#include "main.h"

int main(){
  struct node *sentinel, *first, *second;
  sentinel = init();
  add(sentinel, 3);
  add(sentinel, 5);
  add(sentinel, 19);
  add(sentinel, 2);
  add(sentinel, 2);
  print(sentinel);
  return 0;
}
