#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
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
    head = temp;
}

void insertAtEnd(Node* &tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
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

    if(next == NULL){
        tail = temp;
    }

}

void deleteNodeAt(Node* &head,Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
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
            cur->next = NULL;
            delete cur;
            return;
        }
        prev = cur;
        cur = cur->next;
        count++;
    }
}


int main(){
    Node *head = new Node(10);
    Node *tail = head;
    // cout<<head->data<<endl;
    insertAtEnd(tail, 100);
    insertAtEnd(tail, 0);
    insertAtMiddle(head, tail, 99, 1);
    insertAtMiddle(head, tail, 99, 5);
    insertAtEnd(tail, 100);
    traverseFromHead(head);
    deleteNodeAt(head, tail, 1);
    deleteNodeAt(head, tail, 5);
    insertAtEnd(tail, 200);
    traverseFromHead(head);

}