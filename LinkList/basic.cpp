#include <iostream>


using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int &data){
        this->next = NULL;
        this->data = data;
        
    }
};

class List{
    public:
    Node *head;
    List(){head = NULL;};
    void InsertBegin(int data){
        Node *newnode = new Node(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    
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
    List l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(20);
    l.InsertBegin(20);
    l.InsertBegin(50);
    l.display(l.head);
}