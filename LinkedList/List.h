/* File: List.h
   Author: Carlos M
   Created: 08.09.22
 */

#ifndef LIST_H
#define LIST_H

class List {
    private:
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;

        nodePtr head;
        nodePtr current;
        nodePtr temp;
        

    public:
        List();
        void Addnode(int newData);
        void DeleteNode(int delData);
        void Print();

};


#endif