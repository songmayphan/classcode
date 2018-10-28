#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void addToFront(LinkedList* list, int value) {
  ListNode * newNode = malloc(sizeof(ListNode)); //allocate the space and store the node in the new var
  //initialize data for my new node
  newNode->value = value; //dereference pointer and store a value; assigning param value to new node's value
  //newNode->next  = NULL;// if set o null we will lose the list
  newNode -> next = list -> head; //this is correct
  
  list ->head = newNode; //head and newNode are both pointers
}
void print (LinkedList* list) { //traversing the list 
  //starts at head
  //need a helper node to store the value 
  ListNode* help = list -> head;
  //need a loop while loop is best
  while (help != NULL)  { 
    printf("%i ", help->value); //print the value
    help = help -> next; //advance to the next node
    
  }
  

}
int main() { 
  LinkedList* list = malloc(sizeof(LinkedList)); //determine the size of th linked list , and store the memory adddress
  addToFront( list, 5);
  addToFront( list, 4);
  addToFront( list, 3);
  addToFront( list, 2);
  addToFront( list, 1);
  
  print(list);
  free(list);
  
  return 0; 


}//end main
