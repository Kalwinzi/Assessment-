int main() {
    BST tree;
    insert(tree.root, 10);
    insert(tree.root, 5);
    insert(tree.root, 15);
    
    cout << (search(tree.root, 5) ? "Found" : "Not Found") << endl;
    cout << (search(tree.root, 20) ? "Found" : "Not Found") << endl;

    return 0;
}