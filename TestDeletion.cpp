int main() {
    BST tree;
    insert(tree.root, 10);
    insert(tree.root, 5);
    insert(tree.root, 15);
    tree.root = deleteNode(tree.root, 10);
    inorder(tree.root);
    return 0;
}