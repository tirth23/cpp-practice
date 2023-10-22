// Linked List implementaion using head and position
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

//reference of head is used bcoz changes in head inside function should reflect in head in main
void insertAtHead(Node* &head, int data) { 
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &head, int data) {
    Node* temp = new Node(data);

    //empty list
    if(head == NULL) {
        head = temp;
        return;
    }

    Node* curr = head;
    //travel till curr -> next != NULL
    while(curr -> next) {
        curr = curr -> next;
    }
    curr -> next = temp;
}

void insertAtPosition(Node* &head, int pos, int data) {
    Node* temp = new Node(data);

    //insert at head
    if(pos == 1) {
        temp -> next = head;
        head = temp;
        return;
    }
    
    //reach till previous node of pos th node, if pos = 3, then move to 2nd node
    Node* curr = head;
    int cnt = 1;
    while(cnt <= pos-2) {
        curr = curr -> next;
        cnt++;
    }    

    //if pos > list size + 1 then insertion not possible
    if(curr == NULL) return;

    temp -> next = curr -> next;
    curr -> next = temp;
}

void deleteAtPosition(Node* &head, int pos) {
    Node* curr = head;
    Node* prev = NULL;

    if(head == NULL) return;

    if(pos == 1) {
        head = curr -> next;            
        // head = (*curr).next;
        delete curr; 
    } else {
        //reach till pos th node
        int cnt = 1;
        while(cnt <= pos-1) {
            prev = curr;
            curr = curr -> next;
            cnt++;
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
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    printList(head);

    insertAtPosition(head, 3, 10);
    printList(head);

    deleteAtPosition(head, 3);
    printList(head);

    return 0;
} 