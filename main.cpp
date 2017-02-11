#include "slist.h"

/*
Class Library File
*/

// Constructor
Node(int val)
    : _value(val), _pNext(NULL)
    { }
   
  
// Destructor
while (head) {
    nodeptr tmp=head->next;
    delete head;
    head = tmp;
}
// add(value)				//Adds a new value to the end of this list.
template<typename T>
void SLList<T>::add(const T& val) {
    Node<T>* prev = head;
    for (Node<T>* ptr = head->next; ptr; ptr = ptr->next) {
        if (ptr->data == val) {
            std::cout << "Duplicate: " << val << '\n';
            return;
        }
        prev = ptr;
    }
    prev->next = new Node<T>(val);
}
// clear()					//Removes all elements from this list.
template<typename C>
void SLList<T>::clear(const T& val) {
    Node<T>* prev = head;
    for (Node<T>* ptr = head->next; ptr; ptr = ptr->next) {
        if (ptr->data == val) {
            std::cout << "Duplicate: " << val << '\n';
            return;
        }
        prev = ptr;
    }
    prev->next = new Node<T>(val);
}
// equals(list)				//Returns true if the two lists contain the same elements in the same order.
bool areIdentical(struct node *a, struct node *b)
{
    while (a != NULL && b != NULL)
    {
        if (a->data != b->data)
            return false;
        a = a->next;
        b = b->next;
    }
    return (a == NULL && b == NULL);
}
//get(index)				//Returns the element at the specified index in this list.
 int getValue(void)
    { return _value; }
    
    Node* getNext(void)
    { return _pNext; }
};
//insert(index, value)		//Inserts the element into this list before the specified index.
void insert(int data, int pos)
{
  Node* prev = new Node();
  Node* curr = new Node();
  Node* newNode = new Node();
  newNode->data = data;

  int tempPos = 0;   // Traverses through the list

  curr = head;      // Initialize current to head;
  if(head != NULL)
  {
    while(curr->next != NULL && tempPos != pos)
    {
        prev = curr;
        curr = curr->next;
        tempPos++;
    }
    if(pos==0)
    {
       cout << "Adding at Head! " << endl;
       // Call function to addNode from head;
    }
    else if(curr->next == NULL && pos == tempPos+1)
    {
      cout << "Adding at Tail! " << endl;
      // Call function to addNode at tail;
    }
    else if(pos > tempPos+1)
      cout << " Position is out of bounds " << endl;
     //Position not valid

    else
    {
        prev->next = newNode;
        newNode->next = curr;
        cout << "Node added at position: " << pos << endl;
    }
 }
 else
 {
    head = newNode;
    newNode->next=NULL;
    cout << "Added at head as list is empty! " << endl;
 }
}
//exchg(index1, index2)		//Switches the payload data of specified indexex.
switch ( input ) {
}
// isEmpty()				//Returns true if this list contains no elements.
int isEmpty( node * list )
 {
   if( !list )
      return 1;
   return 0;
 }
// remove(index)			//Removes the element at the specified index from this list.
void removeElement(int remValue) {
    LinkedList* prev = head;
    LinkedList* current = head->pNextValue;
    while(current != NULL) {
        if(current->value == remValue) { 
            break; 
        }
        else {
            cout << "Value " << current->value << " does not match " << remValue << ".\n";
            prev = current; 
            current = current->pNextValue; 
        }
    }
    if(current == NULL) { 
        cout << "Can't remove value: no match found.\n"; 
    } else {
        cout << "Deleting: " << current << "\n";
        prev->pNextValue = current->pNextValue; 
        delete current; 
    }
}
// set(index, value)		//Replaces the element at the specified index in this list with a new value.
void linkedlist::Insert(int item)
{
    if(head == 0) 
    {
        head = new node; 
        curr = head; 
        curr->link = 0; 
        curr->item = item; 
    }
    else 
    {
        curr->link = new node; 
        curr = curr->link; 
        curr->link = 0; 
        curr->item = item; 
    }
}
// size()					//Returns the number of elements in this list.

while(cur != NULL)
{
int count;
cur->next;
count++
}
// subList(start, length)	//Returns a new list containing elements from a sub-range of this list.
LinkedList<ValueType> sub = list.subList(start, length);

// toString()				//Converts the list to a printable string representation.
string SList::toString() const {
    stringstream ss;
    if (head != NULL) {
        ss.str("");
    } else {
        int i = 1;
        for (SLNode* n = head; n != NULL; n->getNextNode()) {
            if  (i < (size - 1))
                ss << n->getContents() << ", ";
            ss << n->getContents();
            i++;
        }
    }
    return ss.str();

