class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_set<int> st;
     Node* cur = head;
     if(cur == NULL) return head;
     else st.insert(cur->data);
     while(cur != NULL && cur -> next != NULL){
         if(st.find(cur -> next ->data) != st.end()){
             cur -> next = cur -> next -> next;
         }else{
             st.insert(cur->next->data);
             cur = cur -> next;
         }
     }
     return head;
    }
};
