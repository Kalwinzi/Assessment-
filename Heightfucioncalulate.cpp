int height(Node* node) {
    if (!node) return -1;  // Height of empty tree is -1
    return 1 + max(height(node->left), height(node->right));
}

class BST {
    Node* root;

public:
    BST() : root(nullptr) {}

    int getHeight() { return height(root); }
};