#include "linkedListFuncs.h"
#include <stddef.h>

using namespace std;

/*All functions MUST be implemented recursively
* No credit will be given for non-recursive solutions
*/


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    return head->data + recursiveSum(head->next);
}


//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {

    if (head == nullptr) {
        return INT_MIN;
    }
    int restMax = recursiveLargestValue(head->next);
    return std::max(head->data, restMax);
}


/*Given the head of a linked list, find and return the kth node of the linked list
 *Assume head is the first node
 *If k is larger than the size of the linked list, return NULL
 *
 * Example: n1 -> n2 -> n3 -> n4 -> n5, k = 3
 * Return &n3
 */
Node* recursiveFindKthNode(Node *head, int k){
    if (head == nullptr || k <= 0) {
        return nullptr;
    }
    if (k == 1) {
        return head;
    }
    return recursiveFindKthNode(head->next, k - 1);}


/*Given the head of a linked list, delete the kth node from the linked list
 *k will always be less than the length of the linked list
* 
* Return the head of the new linked list
*
* Example: n1 -> n2 -> n3 -> n4, k = 2
* Delete n2 and return &n1
* New list should look like this: n1 -> n3 -> n4
*/
Node* recursiveDeleteKthNode(Node *head, int k) {
    if (head == nullptr || k <= 0) {
        return nullptr;
    }

    if (k == 1) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    head->next = recursiveDeleteKthNode(head->next, k - 1);
    return head;
}


/*Given the head of a linked list, delete the first k nodes from the linked list
 *k will always be less than the length of the linked list
* 
* Return the head of the new linked list
*
* Example: n1 -> n2 -> n3 -> n4, k = 2
* Delete n1, n2 and return &n3
*/
Node* recursiveRemoveKFromFront(Node *head, int k) {
    if (head == nullptr || k <= 0) {
        return nullptr;
    }

    if (k <= k) {
        Node* newHead = head->next;
        delete head;
    }

    head->next = recursiveRemoveKFromFront(head->next, k - 1);
    return head;}


/*Given two linked lists, return a NEW linked-list where each element is the sum of the corresponding elements of the input
 * If a linked list has a longer length than the other, treat the corresponding NULL element as a node with value 0
 * 
 * Example: List 1: 1 -> 2 -> 3 -> 12
 * 	    List 2: 4 -> 5 -> 6
 * Return &head of the linked list 5 -> 7 -> 9 -> 12
 */
Node* recursiveElementwiseSum(Node *head1, Node *head2) {
 /*   if (head1 == nullptr && head2 == nullptr) {
        return nullptr;
    }

    int value1 = (head1 == nullptr) ? 0 : head1->data;
    int value2 = (head2 == nullptr) ? 0 : head2->data;

    Node* newNode = new Node(value1 + value2);

    newNode->next = recursiveElementwiseSum((head1 == nullptr) ? nullptr : head1->next, (head2 == nullptr) ? nullptr : head2->next);

    return newNode;
    */
    return nullptr;
}


/*BONUS: Given the heads of two linked lists, splice the second linked list into the first, alternating elements from each list
 * 
 * The first element of the newly arranged linked list will always be head1, unless head1 is NULL (in which case just return head2)
 *
 * You MUST modify the linked lists themselves and DO NOT create another list or any new nodes
 *
 * Example: List 1: 1->2->3, List 2: 4 -> 5 -> 6
 * Return &head of 1 -> 4 -> 2 -> 5 -> 3 -> 6
 */
Node* recursiveSplice(Node *head1, Node *head2) {
    return NULL;
    //STUB: edit with the correct output, according to the lab instructions, using recursion
}
