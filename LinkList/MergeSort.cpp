#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int &data)
    {
        this->data = data;
        this->next = NULL;
    };
};

class ListNode
{
public:
    Node *head;
    ListNode()
    {
        head = NULL;
    }

    void InsertBegin(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
        // delete []newnode;
    }

    Node *middleNode(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void display(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }



    Node *merge(Node *head1, Node *head2){
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }

        int data  = 10;
        Node *ans = new Node(data);
        Node *temp = ans;
        while(head1!=NULL && head2!=NULL){
            if(head1->data<=head2->data){
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            }
            else{
                temp->next = head2;
                temp = head2;
                head2 = head2->next;

            }
        }  
        while(head1!=NULL){
            temp->next = head1;
            temp = head1;
            head1 = head1->next;
        }      
 
        while(head2!=NULL){
            temp->next = head2;
            temp = head2;
            head2 = head2->next;
        }
        ans = ans->next;
        return ans;
        
    }
    Node *sortLL(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *mid = middleNode(head);
        Node *left = head;
        // cout << mid->val << endl;
        Node *right = mid->next;
        mid->next = NULL;
        left = sortLL(left);
        right = sortLL(right);
        Node *res = merge(left, right);
        return res;
    }
};

int main()
{

    ListNode l;
    l.InsertBegin(10);
    l.InsertBegin(20);
    l.InsertBegin(30);
    l.InsertBegin(40);
    l.InsertBegin(100);
    l.InsertBegin(50);

    l.display(l.head);
    Node *ans = l.sortLL(l.head);
    l.display(ans);
    return 0;
}