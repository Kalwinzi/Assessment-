bool search(Node* root, int val) {
    if (!root) return false;
    if (root->value == val) return true;
    return val < root->value ? search(root->left, val) : search(root->right, val);
}