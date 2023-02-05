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


    Node *reverseList(Node *head, int iterate){

        if(head == NULL || head->next == NULL){
            return head;
        }
        Node *prev=NULL;
        Node *curr=head;
        Node *next=NULL;
        int count = 0;
        Node *track;
        while(curr!= NULL && count<iterate ){
            next = curr->next;
            curr->next = prev;  
            prev = curr;
            curr = next;
            track = curr;
            count++;
        }
        head = prev;
        // track = prev;
        cout << track->data << " ---- " << endl;
        cout << next->data << " ****** " << endl;
        cout << prev->data << "&&&&&&&" << endl;
        return head;
    }

};

int main(){

    ListNode l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(30);
    l.InsertBegin(40);
    l.InsertBegin(50);
    l.display(l.head);
    cout << "After rev" << endl;
    l.head = l.reverseList(l.head,3);
    l.display(l.head);
    return 0;
}