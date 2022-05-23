#ifndef NODE_H
#define NODE_H

class Node{

    public:
        Node();
        Node * getNext();
        void setNext(Node * ptr);
        int getKey();
        void setKey(int val);


    private:
        int key;
        Node * next;
};

#endif