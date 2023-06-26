// https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0
#include<iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};

void insertAtEnd(Node* &head, int data){
    Node *temp = new Node(data);
    Node *pointer = head;

    while(pointer->next != nullptr){
        pointer = pointer ->next;
    }

    pointer->next = temp;
}

void traverseFromHead(Node* &head){
    Node* temp = head;
    int flag = 0;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

        if(flag>=2) break;
    }
    cout<<endl;
}

void reverserLL(Node* &head){
    Node* prev1 = head;
    Node* prev2 = head;
    Node* pointer = head;

    if(pointer->next == nullptr || pointer == nullptr)    return;
    
    pointer = pointer->next;
    prev1->next = nullptr;
    prev2 = pointer;

    while(pointer->next != nullptr){
        pointer = pointer->next;
        prev2->next = prev1;
        prev1 = prev2;
        prev2 = pointer;

    }


    pointer->next = prev1;
    head = pointer;
}

int main() {
    Node *head = new Node(1);

    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    traverseFromHead(head);
    reverserLL(head);
    traverseFromHead(head);

    return 0;
}