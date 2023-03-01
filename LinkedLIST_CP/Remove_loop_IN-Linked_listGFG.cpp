class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node* endLoop(Node* head, Node* p){
    Node *q = head;
    while(p->next != q->next){
        q = q->next;
        p = p->next;
    }
    return p;
}

void removeLoop(Node* head)
{
    if(head == NULL)
        return;
    Node *p = head, *q = head, *end;
    while(p != NULL && q != NULL && q->next != NULL){
        end = p;
        p = p->next;
        q = q->next->next;
        if(p == q)
            break;
    }
    if(p != q)
        return;
    if(head != p)
        end = endLoop(head,p);
    end->next = NULL;
}
};