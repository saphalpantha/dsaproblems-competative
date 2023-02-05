#include <iostream>
using namespace std;

#include <unordered_map>
class Node{
    public:
    int data;
    Node *next;
    Node *random;
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

    void InsertTail(Node *&head, Node *&tail,int data){
        Node *newnode = new Node(data);
        // Node *temp = head;
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        else{

        tail->next = newnode;
        tail = newnode;
        }
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

    Node*copyList(Node *head){
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *temp = head;
        while(temp!=NULL){
            InsertTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        unordered_map<Node *, Node *> oldtoNew;
        Node *temp1 = head;
        Node *temp2 = cloneHead;
        while(temp1!=NULL && temp2!=NULL){
            oldtoNew[temp1] = temp2;
            temp1=temp1->next;
            temp2=temp2->next;
        }        

        temp1 = head;
        temp2 = cloneHead;
        while(temp1!=NULL){
            temp2->random = oldtoNew[temp1->random];
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return cloneHead;
    }

    
    

};

int main(){

    ListNode l;
    // l.InsertTail(l.cloneHead, l.cloneTail, 10);
    // l.InsertTail(l.cloneHead, l.cloneTail, 20);
    // l.InsertTail(l.cloneHead, l.cloneTail, 30);
    // l.InsertTail(l.cloneHead, l.cloneTail, 40);
    // l.InsertTail(l.cloneHead, l.cloneTail, 100);
    // l.InsertTail(l.cloneHead, l.cloneTail, 50);

    l.display(l.head);
    // l.display(l.head);
    return 0;
}