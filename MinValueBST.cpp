int findMin(Node* root) {
    if (!root) return -1; // Tree is empty
    while (root->left) root = root->left;
    return root->value;
}