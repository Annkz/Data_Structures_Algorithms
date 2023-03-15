#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}


void print(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main(){
    // create a new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next <<endl;

    // head pointed to node1
    // Node* head = node1;
    // print(head);

    // insertAtHead(head, 12);
    // print(head);
    
    // insertAtHead(head, 15);
    // print(head);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 23);
    print(head);

    insertAtTail(tail, 56);
    print(head);
    return 0;
}