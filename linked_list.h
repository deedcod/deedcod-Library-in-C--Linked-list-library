#ifndef linked_list
#define linked_list
#define nullptr 0
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insert(Node** head, int value) {

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
    }
    else {

        Node* lastNode = *head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;

        for ( Node* i = *head; i->next!=nullptr; i=i->next)
        
        lastNode->next = newNode;
    }
}
void remove(Node** head, int value) {

    if (*head == nullptr) {
        return;
    }

    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }

    Node* currNode = *head;
    Node* prevNode = nullptr;
    while (currNode != nullptr && currNode->data != value) {
        prevNode = currNode;
        currNode = currNode->next;
    }


    if (currNode != nullptr) {
        prevNode->next = currNode->next;
        delete currNode;
    }
}

void display(Node* head) {
    Node* currNode = head;
    while (currNode != nullptr) {
         cout << currNode->data << " ";
        currNode = currNode->next;
    }
     cout <<  endl;
}
#endif
