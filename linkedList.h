#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct listNode_t{
  
  int value;
   struct listNode_t* next; //pointer to the next node
} ListNode;

typedef struct linkedList_t{
  ListNode* head; //create a head 
  
}LinkedList;

void addToFront(LinkedList* list, int value);
void print(LinkedList* list);

#endif
