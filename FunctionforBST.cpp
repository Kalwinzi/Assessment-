void insert(Node*& root, int val) {
    if (!root) {
        root = new Node(val);
    } else if (val < root->value) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}