#include <iostream>
#include <vector>
using namespace std;


class Node{
    public:
    Node *next;
    int data;

    Node(int data){
        next = NULL;
        this->data =data;
    }
};

class ListNode{
    public:

    Node *createList(Node *head, vector<int> &v){
        Node *newnode;
        Node *temp = head;
        for(int i=0;i<v.size();i++){
            newnode = new Node(v[i]);
            if(head == NULL){
                head = temp = newnode;
            }
            newnode->next = temp;
            temp = newnode;
            i++;
        }
        return head;
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
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,5};
    Node *head1 =l.createList(head1, v1); 
    Node *head2 =l.createList(head2, v2); 
    l.display(head1);
    l.display(head2);
}