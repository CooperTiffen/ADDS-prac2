#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>

#include <iostream>



class LinkedList{

    public:

        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
        LinkedList();
        LinkedList(int arr[], int size);
        ~LinkedList();

    private:
        Node * head;
};



#endif