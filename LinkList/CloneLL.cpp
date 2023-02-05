#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

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
    int size;
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

    void setRandom() {
        Node *curr = head;
        while (curr != nullptr) {
        int index = rand() % size;
        Node *temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        curr->random = temp;
        curr = curr->next;
    }

  }
    Node *cloneList(Node *head){
        
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

    
    // l.display(l.head);
    l.setRandom();
    l.display(l.head);
    return 0;
}