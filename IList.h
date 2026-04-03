//
// Created by ruben on 4/2/2026.
//

#ifndef RECIPE1_1_ILIST_H
#define RECIPE1_1_ILIST_H
#include "Ingredient.h"
#include<iostream>
using namespace std;

class IList {
private:
    Ingredient *head, *tail;


public:
    SLList() {
        tail = head = nullptr;
    }
    ~SLList() { // delete the whole list
        Ingredient *ptr = head; // point to the head of hte list
        while (ptr!=nullptr) { // while the pointer is pointing to head node
            ptr = head->getNext(); // set pointer to next node of head( the pointer is pointing to the node infront of head
            delete head; // delete head
            head = ptr; // set the node that ptr is pointing to and make it the new head
        }
    }
    void addtoHead() { // add new node to list
        head = new Ingredient(n,cal, cos, head); // make the new node we created the head(the next node the new node points to is the old head)
        if (tail ==nullptr) { // if there is no tail it means there is one node and we set the tail = head
            tail = head;
        }

    }
    void deletefromHead() {
        if (head != nullptr) { // if head is not empty
            Ingredient *ptr = head; // point to head
            head = ptr->getNext(); // set new head to next node
            delete ptr; // and delete old head node
            if (head ==nullptr) { // if our list is empty set tail to null
                tail =nullptr;
            }

        }

    }
    void addtoTail() {
        if (tail!=nullptr) { // if tail has a node
            tail->setNext(new Ingredient(n,call,cos,nullptr)); // create new node that tail points to as its next
            tail = tail->getNext(); // set tails next node we just created to the new tail
        }
            else { // if list empty we set the head = tail = to the new node;
                head = tail = new Ingredient(n, cal, cos, nullptr);
            }



        }


    void deletefromTail() {
        if (head!= nullptr) { // if there is head is not empty
            Ingredient * ptr = head; // point to head
            if (head!=tail) { // if head does not equal tail
                while (ptr->getNext()!= tail) { // while ptr get next does not equal tail
                    ptr = ptr->getNext(); // traverse the list until we find ptr getnext that points to tail
                }
                tail = ptr; // set the node that ptr is pointing to the new tail
                ptr = ptr->getNext(); // point to the old tail
                tail->setNext(nullptr); // set tail get next to point to null
            }
        }
        else {
            head = tail = nullptr; // if
        }
        delete ptr;
    }
    bool isEmpty() {
        bool res = false;
        if (head== nullptr) {
            res =true;
        }
    }
    void printList() {
        Ingredient * ptr = head;
        while (ptr!=nullptr) {
            cout<< "Ingredient: " << ptr->getName() << "Calories: "<< ptr->getCalories()<<"Cost: "<< ptr->getCost();
            ptr = ptr->getNext();
        }
    }
};

#endif //RECIPE1_1_ILIST_H