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

    ~Node() {
        int value = this -> data;

        // cout << endl << this << endl;
        // cout << this -> next << endl;

        // free memory
        // if(this -> next != NULL) {
        //     // delete next;
        //     this -> next = NULL;
        // }
        cout << "Memory free for node with data " << value << endl;  
    }
};

void insertAtHead(Node* &head, int d) {

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(Node* &head, Node* &tail, int position) {
    //delete first node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;

        cout << temp << " " << temp -> data << endl;
        cout << temp -> next << endl;
        //free memory
        // temp -> next = NULL;
        delete temp;
        // temp = NULL;

        cout << endl << temp << " " << temp -> data << endl;
        cout << temp -> next << endl;
    } else {

        //delete other nodes
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        //update tail if last node
        if(curr -> next == NULL) {
            tail = prev;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(9 );
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    /*Insert at Head*/
    // Node* head = node1;

    // insertAtHead(head, 10);
    // print(head);

    // insertAtHead(head, 11);
    // print(head);

    // insertAtHead(head, 12);
    // print(head);

    /*Insert at Tail*/
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 10);
    // print(tail);

    insertAtTail(tail, 11);
    // print(tail);

    insertAtTail(tail, 12);
    // print(head);

    insertAtPosition(head, tail, 3, 7);
    print(head);

    deleteNode(head, tail, 1);
    print(head);

    return 0;
}