#include <iostream>
#include <stdlib.h>

using namespace std;

struct n {  // The definition of Linked List
  int x;
  n *next;
};
typedef n node;

void isEmpty(node *r) {  // Checking the linklist is empty or not

  if (r->next == NULL)
    cout << "Yes" << endl;
  else
    cout << "Nope" << endl;
}

void llOutput(node *r) {  // Output of Linked List

  while (r != NULL) {
    cout << r->x << endl;
    r = r->next;
  }
}

int countLinkedList(node *n, node **last = NULL) { //Counting the link list
  int count = 0;
  if (last) *last = NULL;
  while (n) {
    ++count;
    if (last) *last = n;
    n = n->next;
  }
  return count;
}

node *makeLinkedListNode(int x) { //Creating a node
  node *n = new node;  // (node*) malloc(sizeof(node));
  n->x = x;
  n->next = NULL;
  return n;
}

void copyLinkedList(node *n) { //Coppying the link list to it's end
  node *last;
  for (int y = countLinkedList(n, &last); y > 0; --y) {
    last->next = makeLinkedListNode(n->x);
    last = last->next;
    n = n->next;
  }
}

void freeLinkedList(node *n) { // relasing memory
  node *next;
  while (n) {
    next = n->next;
    delete n;  // free(n);
    n = next;
  }
}

void destroyList(node *r) {  // Destroying the list

  free(r);
  r->next = NULL;
}

void infoLastNode(node *r) {  // printing last node's veriable.

  while (r->next != NULL) {
    r = r->next;
  }

  cout << r->x;
}

void search(node *r, int x) {  // Looking for entered number

  while (r->next != NULL && r->x != x) {
    r = r->next;
  }
  if (r->x == x)
    cout << "Found" << endl;
  else
    cout << "Not Found" << endl;
}

void insert(node *r, int x) {  // Inserting given number to the last
  while (r->next != NULL) {
    r = r->next;
  }
  r->next = (node *)malloc(sizeof(node));
  r->next->x = x;
  r->next->next = NULL;
}

void deleteGiven(node *r, int x) {  // Deleting entered number.
  while (r->next != NULL && r->x != x) {
    r = r->next;
  }
  while (r != NULL) {
    r->x = NULL;
    r = r->next;
  }
}

int main() {
  return 0;
}
