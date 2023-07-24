Node* BuildTree(int in[], int is, int ie, int post[], int ps, int pe, map<int, int>& mpp) {
    if (ps > pe || is > ie) return NULL;
    Node* root = new Node(post[pe]);

    int inRoot = mpp[post[pe]];
    int numsLeft = inRoot - is;

    root->left = BuildTree(in, is, inRoot - 1, post, ps, ps + numsLeft - 1, mpp);
    root->right = BuildTree(in, inRoot + 1, ie, post, ps + numsLeft, pe - 1, mpp);
    return root;
}

Node* buildTree(int in[], int post[], int n) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[in[i]] = i;
    }

    Node* root = BuildTree(in, 0, n - 1, post, 0, n - 1, mpp);

    return root;
}
