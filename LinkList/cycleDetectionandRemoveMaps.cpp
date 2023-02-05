#include <iostream>
#include <map>
using namespace std;


// basics of std::maps






/*



int main(){
    map<int, bool> Map;
    int arr[10] = {1,22,3,4,5,7,7,8,7,10};
    for(int i=0;i<10;i++){
        Map.insert(make_pair(i, true));
    }

    for(auto i:Map){
        cout << i.first << " " << i.second << endl;
    }
    Map[5] = 0;
    for(auto i:Map){
        cout << i.first << " " << i.second << endl;
    }

}

*/








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
        if(head == NULL){
            return NULL;
                
        }
        map<Node *, bool> visited;
        Node *temp = head;
        while(temp!=NULL){
            if(visited[temp] == true){
                return  temp;
            }
            visited[temp] = true;
            temp = temp->next;
        }
    }

    void removeLoop(){
        Node *begin_add = detectLoop(head);
        Node *temp = begin_add ->next;
        while(temp->next != begin_add){
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
    // Node *loop = l.detectLoop(l.head);
    // Node *starting_node = l.getBeginNode();
    // cout << "loop starts at " << starting_node->data;
    cout << "removing loop" << endl;
    l.removeLoop();
    l.display(l.head); // runs without loop
    return 0;
}

