class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        queue<Node*>q;
        int ans = INT_MIN;
        q.push(root);
        while(q.size()){
            int s = q.size();
            int sum=0;
            for(int i=0;i<s;i++){
                Node *temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                sum+= temp->data;
            }
               ans = max(ans,sum); 
        }
        return ans;
    }
};
