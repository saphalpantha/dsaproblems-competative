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


    Node *reverseKGroup(Node *head, int k){
        if(head == NULL){
            return NULL;
        }
        Node *curr = head;
        Node *next = NULL;
        Node *prev = NULL;

        int count = 0;
        while((curr!=NULL||curr->next!=NULL) && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next!=NULL){
            head->next = reverseKGroup(next, k);
        }
        return prev;
    }
    void display(Node * &head){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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
    l.display(l.head);
    Node *s;
    // s = l.middleNode(l.head);
    s = l.reverseKGroup(l.head, 2);
    l.display(s);
    return 0;
}