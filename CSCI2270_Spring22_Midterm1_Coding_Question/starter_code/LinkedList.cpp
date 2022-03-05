#include <iostream>

using namespace std;

#include "LinkedList.hpp"

/* DO NOT MODIFY */
LinkedList::~LinkedList()
{
   Node *next;
   while(head != NULL)
   {
      next = head->next;
      delete head;
      head = next;
   }
}

/* DO NOT MODIFY */
void LinkedList::insertNode(int leftValue, int value) {
   Node* left = search(leftValue);
   Node* node = new Node(value);
   
   if (left == 0) { /* inserting a new head node */
      node->next = head;
      head = node;
   }
   else if (left->next == 0) { /* inserting a new tail node */
      left->next = node;
      if (head == 0) 
         head = node;
   }
   else { /* inserting a node in the middle */
      node->next = left->next;
      left->next = node;
   }
}

/* DO NOT MODIFY */
Node* LinkedList::search(int val) {
   Node* current = head;
   while (current != 0) {
      if (current->data == val)
         return current;
      current = current->next;
   }
   return 0;
}

/* DO NOT MODIFY */
void LinkedList::printList()
{
   Node *current = head;
   
   while (current != NULL)
   {
      cout << current->data << " ";
      current = current->next;
   }
}

/* TODO */
void LinkedList::locateMaxMoveHead(int *&arr)
{
   // add your code here but do not change the parameters
   // must call copyLLtoArr() from here
   if(head == NULL || head->next == NULL){ // Check if LL is empty or has only one node
      copyLLtoArr(arr);
      return;
   }
   int max = head->data;
   Node* maxNode = head;
   Node* curr = head;
   Node* prev = NULL;
   Node* temp = NULL;
   while(curr != NULL){ // Traverse LL keeping tack of highest node
      if(curr->data > max){
         max = curr->data;
         temp = prev;
         maxNode = curr;
      }
      prev = curr;
      curr = curr->next;
   }
   if(maxNode == head){ // If max value is at head do nothing
      copyLLtoArr(arr);
   } else { // Else remove max node from location, link prev and next nodes, set max next to head and update head to max
      temp->next = maxNode->next; 
      maxNode->next = head;
      head = maxNode;
      copyLLtoArr(arr);
   }
}

/* TODO */
void LinkedList::copyLLtoArr(int *&newArr)
{
   // add your code here but do not change the parameters
   Node* curr = head;
   int i = 0;
   while(curr != NULL){ // Traverse LL adding each value to the array at incremented index
      newArr[i] = curr->data;
      i++;
      curr = curr->next;
   }
   return;
}