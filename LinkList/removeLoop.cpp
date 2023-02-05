#include <iostream>


using namespace std;


class Node{
    public:
    Node *next;
    int data;

    Node(int &data){
        this->data = data;
        this->next = NULL;
    }
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


    Node *detectLoop(Node *head){
        if(head == NULL && head->next == NULL){
            return NULL;
        }

        Node *slow =  head;
        Node *fast  = head;
        while(slow != NULL && fast!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return slow;
                // break;
            }
        }
        return NULL;
    }


    Node *getBeginNode(){
        Node *loop = detectLoop(head);
        if(loop == NULL){
            return head;
        }
        Node *slow = head;
        while(slow!=NULL && loop!=NULL){
            slow = slow->next;
            loop = loop->next;
            if(slow == loop){
                return slow;
            }
        }
        return NULL;
    }
    void removeLoop(Node *start_node){
        Node *temp = start_node->next;
        while(temp->next!=start_node){
            temp = temp->next;
        }
        temp->next =NULL;
    }

    



};


int main(){

    ListNode l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(30);
    l.InsertBegin(40);
    l.InsertBegin(100);
    l.InsertBegin(500);
    l.InsertBegin(400);
    // l.InsertBegin(100);
    l.InsertBegin(600);
    l.InsertBegin(5990);
    int i =0;
    Node *temp = l.head;
    while(i<6){
        temp = temp->next;
        i++;
    }
    temp->next = l.head->next;
    // cout << temp->data << endl;
    // cout << l.head->next->data<< endl;
    // l.display(l.head);
    // l.display(l.head);
    // Node *s={nullptr};
    // s = l.detectLoop(l.head);
    // cout << s->data << endl;
    Node *loop = l.detectLoop(l.head);
    Node *starting_node = l.getBeginNode();
    // cout << "loop starts at " << starting_node->data;
    cout << "removing loop" << endl;
    l.removeLoop(starting_node);
    l.display(l.head); // runs without loop
    return 0;
}
