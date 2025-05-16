#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

void preorderTraversal(struct TreeNode* root) {
    if (!root) return;
    struct TreeNode* stack[100];
    int top = -1;
    stack[++top] = root;
    while (top >= 0) {
        struct TreeNode* node = stack[top--];
        printf(node == root ? "%d" : " %d", node->val);
        if (node->right) stack[++top] = node->right;
        if (node->left) stack[++top] = node->left;
    }
}

int main() {
    struct TreeNode n4 = {4}, n3 = {3, NULL, &n4}, n6 = {6}, n5 = {5, &n3, &n6}, 
                    n2 = {2, &n5}, root = {1, &n2};
    preorderTraversal(&root);  // Output: 1 2 5 3 4 6
}
