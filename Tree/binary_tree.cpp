#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

    // Function to insert a new node into the binary tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }

private:
    // Recursive function to insert a new node into the binary tree
    TreeNode* insertRecursive(TreeNode* current, int value) {
        if (current == nullptr) {
            return new TreeNode(value);
        }

        if (value < current->val) {
            current->left = insertRecursive(current->left, value);
        } else if (value > current->val) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }
};

int main() {
    BinaryTree tree;

    // Insert nodes into the binary tree
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    // Binary tree structure:
    //       50
    //      /  \
    //     30   70
    //    / \   / \
    //   20  40 60 80

    return 0;
}
