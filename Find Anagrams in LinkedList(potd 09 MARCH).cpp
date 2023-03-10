class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        
        vector<int> arr(26,0),arr2(26,0);
        int c=0,c1=0;
        for(auto x:s){
            arr[x-'a']++;
            if(arr[x-'a'] == 1) c++;
        }
        Node* temp = head;
        vector<Node*> ans;
        while(temp){
            arr2[temp->data-'a']++;
            if(arr2[temp->data-'a'] == arr[temp->data-'a']) c1++;
            while(arr2[temp->data-'a'] > arr[temp->data-'a'])
            {
                
                if(arr2[head->data-'a'] == arr[head->data-'a']) c1--;
                arr2[head->data-'a']--;
                head=head=head->next;
        }
        if(c==c1){
            ans.push_back(head);
            Node* t = temp->next;
            temp->next = NULL;
            temp = t;
            head = t;
            c1 = 0;
            fill(arr2.begin(),arr2.end(),0);
        }
        else temp = temp->next;
    }
    return ans;
    }
};
