#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int &data){
        this->data = data;
        this->next = NULL;
    };

};


class ListNode{
    public:
    Node *head;
    ListNode(){
        head = NULL;
    }

    void InsertBegin(int data){
        Node *newnode = new Node(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
        // delete []newnode;
    
    }

    void display(Node * &head){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void swapPairs(Node *&head){

    }

    

};

int main(){

    ListNode l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(30);
    l.InsertBegin(40);
    l.InsertBegin(100);
    l.InsertBegin(50);

    
    l.display(l.head);
    // Node *s;
    l.swapPairs(l.head);
    l.display(l.head);
    return 0;
}