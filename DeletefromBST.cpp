Node* deleteNode(Node* root, int val) {
    if (!root) return root;
    if (val < root->value) root->left = deleteNode(root->left, val);
    else if (val > root->value) root->right = deleteNode(root->right, val);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while (temp->left) temp = temp->left;
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}