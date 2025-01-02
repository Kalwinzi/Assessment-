int findMax(Node* root) {
    if (!root) return -1; // Tree is empty
    while (root->right) root = root->right;
    return root->value;
}