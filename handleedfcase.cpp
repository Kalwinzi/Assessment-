Node* deleteNode(Node* root, int val) {
    if (!root) return nullptr;  // Handle empty tree case

    if (val < root->value) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->value) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with one or no children
        if (!root->left || !root->right) {
            Node* temp = root->left ? root->left : root->right;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor
        Node* temp = root->right;
        while (temp->left) temp = temp->left;
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }

    return root;
}