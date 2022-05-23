#include "LinkedList.h"
#include <limits>

LinkedList::LinkedList(){
    head = nullptr;
}


LinkedList::LinkedList(int arr[], int size){

    head = new Node();
    head->setKey(arr[0]);
    head->setNext(nullptr);

    Node * ptr = head;

    for(int i = 1;i<size;i++){

        Node * newNode = new Node();

        newNode->setKey(arr[i]);
        newNode->setNext(nullptr);

        ptr->setNext(newNode);
        ptr = ptr->getNext();
    }

}

void LinkedList::addFront(int newItem){ //inserts new node at beginning of llist

    Node * tmp = new Node;
    tmp->setKey(newItem);
    tmp->setNext(head);

    head = tmp;
}

void LinkedList::addEnd(int newItem){ //inserts new node at list end.

    Node * ptr = head;
    Node * newNode = new Node;

    newNode->setKey(newItem);
    newNode->setNext(nullptr);

    if(head == nullptr){
        head = newNode;
    }

    else{
        while(ptr->getNext() != nullptr){
            ptr = ptr->getNext();
        }

        ptr->setNext(newNode);
    }
}

void LinkedList::addAtPosition(int position, int newItem){ //insert new node in position-th element of list.

    Node * tmp = head;
    Node * newNode = new Node;

    newNode->setKey(newItem);
    newNode->setNext(nullptr);

    if(position < 1){
        addFront(newItem);
    }
    while(position-1 != 1){

        if(tmp->getNext() == nullptr){
            break;
        }

        tmp = tmp->getNext();
        position--;
    }

    Node * tmp2 = tmp->getNext();
    tmp->setNext(newNode);
    newNode->setNext(tmp2);
}

int LinkedList::search(int item){ // search list for first instance of item.

    Node * tmp = head;
    int counter = 1;

    while(tmp->getKey() != item){
        tmp = tmp->getNext();
        counter++;

        if(tmp == nullptr){
            counter = 0;
            break;
        }
    }

    std::cout<<counter<<" ";
    return counter;
}

void LinkedList::deleteFront(){ // delete first element of list

    Node * tmp = head;
    head = head->getNext();
    delete tmp;
}

void LinkedList::deleteEnd(){ // delete last element of list

    Node * tmp = head;

    if(head->getNext() == nullptr){
        head = nullptr;
        delete tmp;

        return;
    }

    while(tmp->getNext()->getNext() != nullptr){
        tmp = tmp->getNext();
    }

    Node * del = tmp->getNext();

    tmp->setNext(nullptr); //
    delete del;
}

void LinkedList::deletePosition(int position){ // delete element at given position

    Node * tmp = head;

    if(position < 1){
        std::cout<<"outside range"<<std::endl;
        return;
    }

    if(position == 1){
        deleteFront();
    }

    for(int i = 2; i<position;i++){
        tmp = tmp->getNext();
    }

    if(tmp == nullptr or tmp->getNext() == nullptr){
        std::cout<<"outside range"<<std::endl;
        return;
    }

    Node * after = tmp->getNext()->getNext();

    delete tmp->getNext();

    tmp->setNext(after);
}

int LinkedList::getItem(int position){ //print value of item and return value of item.

    Node * tmp = head;

    if(position<1){
        std::cout<<(std::numeric_limits < int >::max())<<" ";
        return (std::numeric_limits < int >::max());
    }

    for(int i = 1; i<position;i++){
        tmp = tmp->getNext();

        if(tmp == nullptr){
            break;
        }
    }

    if(tmp == nullptr){
        std::cout<<(std::numeric_limits < int >::max())<<" ";

        return (std::numeric_limits < int >::max());
    }

    std::cout<<tmp->getKey()<<" ";
    return tmp->getKey();
}

void LinkedList::printItems(){ //print value of all items of list

    if(head == nullptr){
        return;
    }

    Node * ptr = head;
    std::cout<<head->getKey()<<" ";

    while(ptr->getNext() != nullptr){

        ptr = ptr->getNext();
        std::cout<<ptr->getKey()<<" ";
    }

}

LinkedList::~LinkedList(){

    Node * current = head;
    Node * del = nullptr;

    while(current != nullptr){
        del = current->getNext();

        //
        delete current;
        current = del;
    }

    head = nullptr;
}