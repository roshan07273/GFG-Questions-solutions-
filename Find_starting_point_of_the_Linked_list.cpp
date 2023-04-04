/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        if(head == NULL || head->next == NULL) return -1;
 	Node *fast  = head;
	Node *slow = head;
	Node *entry = head;
	while(fast->next && fast->next->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
	while(slow != entry){
		slow = slow->next;
		entry = entry->next;
	}
	return entry->data;
  }

}
return -1;
}
};
