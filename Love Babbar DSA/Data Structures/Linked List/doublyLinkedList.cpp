#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"\nfreed : "<<val<<endl;
    }
};

void insertAtHead(Node* &head, int data){
    
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtEnd(Node* &tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
    temp->prev = tail;
    tail = temp;
}

void traverseFromHead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void traverseFromTail(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insertAtMiddle(Node* &head, Node* &tail, int data, int pos){

    if(pos == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = new Node(data);
    Node* cur = head;
    Node* prev = cur;
    Node* next = cur->next;
    for(int i=0; i<pos-1; i++){
        prev = cur;
        next = cur->next;
        cur = next; 
    }

    prev->next = temp;
    temp->next = next;
    temp->prev = prev;
    next->prev = temp;

    if(next == NULL){
        tail = temp;
    }

}

void deleteNodeAt(Node* &head,Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node* cur = head;
    Node* prev = NULL;
    while(cur != NULL){
        if(count == pos){
            if(cur->next == NULL)
                tail = prev;
            prev->next = cur->next;
            cur->next->prev = prev;
            cur->next = NULL;
            cur->prev = NULL;
            delete cur;
            return;
        }
        prev = cur;
        cur = cur->next;
        count++;
    }
}


int main(){
    Node *head = new Node(5);
    Node *tail = head;

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtEnd(tail, 6);
    insertAtEnd(tail, 7);
    insertAtEnd(tail, 8);
    insertAtMiddle(head, tail, 132, 1);
    traverseFromHead(head);
    traverseFromTail(tail);
    deleteNodeAt(head,tail, 2);
    deleteNodeAt(head,tail, 1);
    traverseFromHead(head);
    traverseFromTail(tail);

}