// Linked List implementaion using head, tail and position
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);

    //empty list
    if (head == NULL) {
        tail = temp;
    }

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);

    //empty list
    if(head == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int data) {
    Node* temp = new Node(data);

    //insert at head
    if(pos == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    Node* curr = head;
    int cnt = 1;
    while(cnt <= pos-2) {
        curr = curr -> next;
        cnt++;
    }

    //insert at tail
    if(curr -> next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }    

    //if pos > list size + 1 then insertion not possible
    if(curr == NULL) return;

    temp -> next = curr -> next;
    curr -> next = temp;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos) {
    Node* curr = head;
    Node* prev = NULL;

    if(head == NULL) return;

    if(pos == 1) {
        head = curr -> next;            
        // head = (*curr).next;
        delete curr; 

        //update tail if list has only one element
        if(head == NULL) tail = NULL;
    } else {
        int cnt = 1;
        while(cnt <= pos-1) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        //update tail if last node
        if(curr -> next == NULL) {
            tail = prev;
        }

        //if pos > list size + 1 then insertion not possible
        if(curr == NULL) return;

        prev -> next = curr -> next;
        delete curr;     
        //manually destructor called to deallocate memory in heap, curr will removed once function call over
    }
}

void printList(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
} 

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head, tail, 4);
    deleteAtPosition(head, tail, 1);
    insertAtTail(head, tail, 5);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 2);
    printList(head);

    insertAtPosition(head, tail, 1, 10);
    printList(head);

    // deleteAtPosition(head, tail, 5);
    printList(head);

    return 0;
} 