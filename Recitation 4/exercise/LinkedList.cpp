#include "LinkedList.hpp"

using namespace std;


// Search for a specified key and return a pointer to that node
//MANDETORY_TODO: complete this function
// Given the key this function will find the node where the key is present
// If found it will return the node, else NULL
Node* LinkedList::searchList(int key) {
    Node* ptr = NULL;
    Node* temp = head;
    while(temp != nullptr){
      if(temp->key == key){
        ptr = temp;
        break;
      }
      temp = temp->next;
    }
    return ptr;
}


// Add a new node to the list
//MANDETORY_TODO: complete this function
// This function will add a node with newKey after the prev node in the linked list
// if prev is null insertion is to be made at head
void LinkedList::insert(Node* prev, int newKey){

  Node* temp = new Node;
  temp->key = newKey;

  //Check if head is Null i.e list is empty
  if(head == NULL){
    head = temp;
  }

  // if list is not empty, look for prev and append our node there
  else if(prev == NULL)
  {
    temp->next = head;
    head = temp;
  }
  //general insertion
  else{
        temp->next = prev->next;
        prev->next = temp;
      }
}


// OPTIONAL_TODO: GOLD PROBLEM
// Swap the first and last nodes (don't just swap the values). Swap the Nodes
bool LinkedList::swapFirstAndLast()
{
    bool isSwapped = false;
    Node* first = head; // Copy head value
    Node* secondToLast = head; // 
    // Check if only 2 nodes in list
    if(head->next->next == NULL){
      head = first->next; // Head is now second value
      head->next = first; // New head next is now previous first value
      first->next = NULL; // Previous first now last next is null
    }
    else {
      // Traverse through list until second to last node is found
      while(secondToLast->next->next != NULL){
        secondToLast = secondToLast->next;
      }
      Node* last = secondToLast->next; // Get last node
      last->next = head->next; // Set last node next value to next value of first node i.e. second node
      head = last; // Update head pointer
      first->next = NULL; // Null out pointer of old first new last 
      secondToLast->next = first; // Point second to last next to old first 
    }
    isSwapped = true;
    return isSwapped;
}

// Print the keys in your list
void LinkedList::printList(){
  Node* temp = head;

  while(temp->next != NULL){
    cout<< temp->key <<" -> ";
    temp = temp->next;
  }

  cout<<temp->key<<endl;
}
