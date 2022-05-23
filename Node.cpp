#include "Node.h"


Node::Node(){
}

Node * Node::getNext(){
    return this->next;
}

void Node::setNext(Node * ptr){
    this->next = ptr;


}

int Node::getKey(){
    return this->key;
}

void Node::setKey(int val){
    this->key = val;
}


