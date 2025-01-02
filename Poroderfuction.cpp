void preorder(Node* root) {
    if (root) {
        cout << root->value << " ";
        preorder(root->left);
        preorder(root->right);
    }
}