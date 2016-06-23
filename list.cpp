#include<iostream>

//double linked list that uses 0 based counting to move through array
#ifndef __list_h
#define __list_h
class <class TY> class doubleLinkedList
{

public:
  doubleLinkedList( node c);
  ~doubleLinkedList( node c);



private:

struct node
{
  TY item;
  TY* prev;
  TY* next;
}

TY *headptr;

}
#endif
