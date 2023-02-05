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


    Node *reverseList(Node *head){

        if(head == NULL || head->next == NULL){
            return head;
        }
        Node *prev=NULL;
        Node *curr=head;
        Node *next=NULL;
        while(curr!= NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }


    void reverse(Node *&head, Node *curr, Node *prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        Node *next = curr->next;
        reverse(head, next, curr);
        curr->next = prev;
    }

    Node *revLLRecursive(Node *head){
        Node *prev = NULL;
        Node *curr = head;
        Node *next = curr->next;
        reverse(head, curr,prev);
        return head;
    }
};

int main(){

    ListNode l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(20);
    l.InsertBegin(20);
    l.InsertBegin(50);
    l.display(l.head);
    cout << "After rev" << endl;
    // l.head = l.reverseList(l.head);
    l.head = l.revLLRecursive(l.head); 
    l.display(l.head);
    return 0;
}