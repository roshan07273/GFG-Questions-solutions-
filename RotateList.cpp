class Solution
{
public:
    Node* rotate(Node* head, int k)
    {
        Node *temp=head;
        k--;
        while(k--){
            temp=temp->next;
        }
        if(temp->next==NULL){
            return head;
        }
        Node *temp1=temp->next;
        temp->next=NULL;
        Node *head1=temp1;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=head;
        return head1;
    }
};
