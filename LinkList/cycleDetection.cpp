// Flodys Algo


// why this works

// at every iterations distance between the slow and fast pointer decrease 
// and at one point it distabce become 1 
// this proves that loop is present in link list






/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *FCF(ListNode *head) {
//         ListNode *slow= head;
//         ListNode *fast = head;
//         if(head == NULL || head->next == NULL){
//             return NULL;
//         }
//         while(slow!=NULL && fast!=NULL ){
            
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//             }
//             slow = slow->next;
//             if(slow == fast){
//                 return slow;
//             }
//         }
//         return NULL;
//     }
//     ListNode *detectCycle(ListNode *head) {
//         ListNode *loop = FCF(head);
//         ListNode *fast = loop;
//         ListNode *slow = head;
//         while(slow !=NULL && fast!=NULL){
//             if(slow == fast){
//                 return slow;
//             }
//             slow = slow->next;
//             fast = fast->next;
//         }
//         return NULL;
//     }
// };



// same proess for remove  loops

