void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->value << " ";
        inorder(root->right);
    }
}