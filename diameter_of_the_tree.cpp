class Solution {
private:
    int height(Node* root, int &maxi) {
        if (root == NULL) return 0;

        int lh = height(root->left, maxi);
        int rh = height(root->right, maxi);

        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }

public:
    int diameter(Node* root) {
        int maxi = 0;
        height(root, maxi);
        return maxi + 1;
    }
};
