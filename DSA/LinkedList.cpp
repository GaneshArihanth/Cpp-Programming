#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
};

void printList(Node* n){
    while(n!= NULL){
        cout<< n->value <<" "<< endl;
        n = n->next;
    }
}
void insertElement(Node** h, int value){
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = *h;
    *h = newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    insertElement(&head,0);
    printList(head);

    return 0;
}