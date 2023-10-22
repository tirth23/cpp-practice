#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int data) {
    Node* temp = new Node(data);

    if(head == NULL) {
        head = temp;
        return;
    }

    Node* curr = head;
    while(curr->next) {
        curr = curr->next;
    }

    curr->next = temp;
}

void insertAtPosition(Node* &head, int data, int pos) {
    Node* temp = new Node(data);

    if(pos == 1) {
        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    int count = 1;
    while(count <= pos-2) {
        curr = curr->next;
        count++;
    }

    if(curr == NULL) return;

    temp->next = curr->next;
    curr->next = temp;
}

void deleteAtPosition(Node* &head, int pos) {

    if(head == NULL) return;

    Node* curr = head;
    if(pos == 1) {
        head = curr->next;
        delete curr;
        return;
    }

    Node* prev = NULL;
    int count = 1;
    while(count <= pos-1) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if(curr == NULL) return;

    prev->next = curr->next;
    delete curr;
    
}

void printList(Node* head) {
    Node* curr = head;
    while(curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main() {
    Node* head = NULL;
    // insertAtTail(head, 7);
    // insertAtTail(head, 8);
    // insertAtHead(head, 4);
    // insertAtHead(head, 3);
    // insertAtHead(head, 2);
    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtHead(head, 5);
    insertAtTail(head, 8);
    printList(head);
    deleteAtPosition(head, 3);
    printList(head);
}